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

prog:
	packageDecl NEWLINE? statement+ EOF
	;

packageDecl:
	PACKAGE LetterOrDigitOrDotOrUnderscore ';'
	;

statement:
	/* import
 | decl
 | initializer
 |
	 */
	NEWLINE
	;

decl:
	(primitiveType | classType) IDENTIFIER ';'
	| nullableType IDENTIFIER ';'
	| (primitiveType | classType) IDENTIFIER ASSIGN (
		IDENTIFIER
		| DECIMAL_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
	)
	| nullableType IDENTIFIER ASSIGN (
		IDENTIFIER
		| DECIMAL_LITERAL
		| DOUBLE_LITERAL
		| HEX_LITERAL
		| STRING_LITERAL
		| BOOL_LITERAL
		| NULL_LITERAL
	)
	;

nullableType: (primitiveType | classType) '?'
	;

primitiveType:
	INT
	| DOUBLE
	| BOOL
	;