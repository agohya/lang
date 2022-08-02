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

// Sart Rule
file:
	libDecl NEWLINE? importDecl* NEWLINE? statement* EOF
	;

statement:
	// TODO: IMPLEMENT STATEMENT
	NEWLINE+ (typeDecl | statement+)
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
	annotationDecl
	| classDecl
	| enumDecl
	| extensionDecl
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
	FINAL type IDENTIFIER COLON
	(
		LITERAL
		| PAREN_OPEN PAREN_CLOSE
	) SEMICOLON
	;

enumDecl:
	ENUM classOrExtensionTypeIdentifier CURL_BRACK_OPEN enumBody CURL_BRACK_CLOSE
	;

enumBody:
	(classOrExtensionTypeIdentifier (COLON Digit+)? COMMA)+
	;

// Here, and elsewhere, COLON means EXTENDS / EXTENSION of
// Consider : as Extends when:
//	1) class ClassName : ExistingClass {}
// Consider : as EXTENSION OF when:
//	1) ExtensionName : ExistingClass {}
// Difference is that Extension is not a class, the methods defined in an Extension are merged with the original class's
// Hence, you do not need to import extensions in a file when you use a method from the Extension.
extensionDecl:
	classOrExtensionTypeIdentifier EXTENDS_OR_EXTENSION_OF classOrExtensionTypeIdentifier
		CURL_BRACK_OPEN classBody CURL_BRACK_CLOSE
	;

// A class declaration
classDecl:
	CLASS classOrExtensionTypeIdentifier
	(
		EXTENDS_OR_EXTENSION_OF classOrExtensionTypeIdentifier
		(
			',' classOrExtensionTypeIdentifier
		)*
	)? CURL_BRACK_OPEN classBody CURL_BRACK_CLOSE
	;

type:
	PRIMITIVE_TYPES
	| classOrExtensionTypeIdentifier
	;

classOrExtensionTypeIdentifier:
	CAPITAL_LETTER
	| CAPITAL_LETTER IDENTIFIER
	;