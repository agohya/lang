/* 
 NBRG Public Works License V1
 Copyright (c) 2022 NBRG Developers, NBRG Group Pvt. Ltd.
 
 Copy
 of this License can be obtained at https://nbrg-developers.web.app/license/v1
 
 NOTE: This
 license
 allows the original creator to change the license to another verison of the NBRG Public
 Works
 License V1, but not to another license altogether.
 */
parser grammar AgohyaParser;

options {
	tokenVocab = AgohyaLexer;
}

// Start Rule
file:
	libDecl NEWLINE? importDecl* NEWLINE? statement* EOF
	;

statement:
	// TODO: IMPLEMENT STATEMENT
	typeDecl
	| statementWithoutTypeDeclarations+
	;

statementWithoutTypeDeclarations:
	forStatement
	| whileStatement
	| doWhileStatement
	| forInStatement
	;

// Library Declaration
libDecl:
	LIB LIB_OR_IMPORT_LITERAL SEMICOLON
	;

// Import Declaration
importDecl:
	IMPORT LIB_OR_IMPORT_LITERAL SEMICOLON
	;

// TODO: Add more Type Declarations
// Define a type such as annotation, class, enum, extension, etc.
typeDecl:
	classModifiers* (annotationDecl | classDecl)
	| extensionDecl
	| (enumModifiers* enumDecl)
	;

// Annotation declaration
annotationDecl:
	ANNOTATION IDENTIFIER annotationBody
	;

// Annotation Body
annotationBody:
	CURL_BRACK_OPEN annotationFieldDecl+ CURL_BRACK_CLOSE
	;

// Annotation Field Declaration 
// Field declarations must be final
annotationFieldDecl:
	FINAL type IDENTIFIER (LITERAL | PAREN_OPEN PAREN_CLOSE) SEMICOLON
	;

enumDecl:
	ENUM classOrExtensionTypeIdentifier enumBody
	;

enumBody:
	CURL_BRACK_OPEN (type IDENTIFIER (COLON Digits)? COMMA)+ CURL_BRACK_CLOSE
	;

// Here, and elsewhere, COLON means EXTENDS / EXTENSION of
// Consider : as Extends when:
//	1) class ClassName : ExistingClass {}
// Consider : as EXTENSION OF when:
//	1) ExtensionName : ExistingClass {}
// Difference is that Extension is not a class, the methods defined in an Extension are merged with the original class's
// Hence, you do not need to import extensions in a file when you use a method from the Extension.
extensionDecl:
	classOrExtensionTypeIdentifier EXTENDS_OR_EXTENSION_OF classOrExtensionTypeIdentifier classBody
	;

// A class declaration
classDecl:
	CLASS classOrExtensionTypeIdentifier
	(
		EXTENDS_OR_EXTENSION_OF nonPrimitiveTypes
		(
			',' nonPrimitiveTypes
		)*
	)? classBody
	;

classBody:
	CURL_BRACK_OPEN statementWithoutTypeDeclarations+ CURL_BRACK_CLOSE
	;

// TODO: support LET for local variable declaration.
type:
	PRIMITIVE_TYPES
	| OTHER_BUILT_IN_TYPES
	| classOrExtensionTypeIdentifier
	| localVariableType
	;

localVariableType:
	LET
	;
nonPrimitiveTypes:
	OTHER_BUILT_IN_TYPES
	| classOrExtensionTypeIdentifier
	;

classOrExtensionTypeIdentifier:
	CAPITAL_LETTER
	| CAPITAL_LETTER IDENTIFIER
	;

annotation:
	AT IDENTIFIER PAREN_OPEN PAREN_CLOSE
	;

enumModifiers:
	annotation
	;

variableModifiers:
	VISIBILITY_MODIFIERS
	| FINAL
	| STATIC
	;

classModifiers:
	enumModifiers
	| ABSTRACT
	| VISIBILITY_MODIFIERS
	;