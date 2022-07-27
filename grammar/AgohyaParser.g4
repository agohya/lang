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

// TODO: Implement parser rules.

// The start rule.
prog:
	libDecl NEWLINE? statement* EOF
	| EOF
	;

// For example, | 1) lib 'sampleapp'; 2) lib 'sample_app'; 3) lib 'sample2app'; | For subfiles under
// the project, This can be set to | 1) lib 'sampleapp.subfolder.fileName'; 2) lib
// 'sampleapp.any.No_Of.Sub.Folders.fileName'; |
libDecl:
	LIB LIB_LITERAL SEMICOLON
	;

statement:
	importRule
	| declaration
	| initializer
	| NEWLINE
	;

importRule:
	IMPORT IMPORT_LITERAL SEMICOLON
	;

declaration:
	variableDeclaration
	;

variableDeclaration:
	(primitiveType | classType) IDENTIFIER SEMICOLON
	| nullableType IDENTIFIER SEMICOLON
	| (primitiveType | classType) IDENTIFIER ASSIGN (
		IDENTIFIER
		| INT_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
		| newObjDeclaration
	) SEMICOLON
	| nullableType IDENTIFIER ASSIGN (
		IDENTIFIER
		| INT_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
		| NULL_LITERAL
		| newObjDeclaration
	) SEMICOLON
	;

// Check this rule.
initializer:
	IDENTIFIER ASSIGN (
		IDENTIFIER
		| INT_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
		| newObjDeclaration
	) SEMICOLON
	| IDENTIFIER ASSIGN (
		IDENTIFIER
		| INT_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
		| NULL_LITERAL
		| newObjDeclaration
	) SEMICOLON
	;

classDeclaration:
	CLASS IDENTIFIER typeParameters? (EXTENDS typeList)? (
		IMPLEMENTS typeList
	)? classBody
	;

classBody:
	CURL_BRACK_OPEN classBodyDeclaration CURL_BRACK_OPEN
	;

classBodyDeclaration:
	;

// TODO: Fix this newObjDeclaration rule
newObjDeclaration:
	CLASS CLASS_NAME EXTENDS?
	;

nullableType: (primitiveType | classType) QuestionMark
	;

primitiveType:
	INT
	| DOUBLE
	| BOOL
	;

// TODO: Fix this classType rule.
classType:
	STRING
	| CLASS
	;