/* * 
 NBRG Public Works License V1
 Copyright (c) 2022 NBRG Developers, NBRG Group Pvt. Ltd.
 
 Copy
 of this License can be obtained at https://nbrg-developers.web.app/license/v1
 
 Agohya
 Project can be found at https://nbrg-developers.web.app/agohya/
 
 NOTE: This license allows the
 original creator to change the license to another verison of the 
 NBRG Public Works License
 without notice,
 but not to another license altogether.
 */
lexer grammar AgohyaLexer;

// Types Primitive Type

// Other Types

// Operators

// MODIFIERS

// TODO: Keywords

// Literals

BOOL_LITERAL:
	'true'
	| 'false'
	;

DOUBLE_LITERAL:
	[-]? Digits '.' Digits
	| [-]? '.' Digits
	;

HEX_LITERAL:
	'0' [xX] HexDigits
	;

INT_LITERAL:
	[-]? Digits
	;

NULL_LITERAL:
	'null'
	;

STRING_LITERAL:
	'\'' (~[\\\r\n'] | EscapeSequence) '\''
	| '"' (~[\\\r\n'] | EscapeSequence) '"'
	;

// Identifiers

IDENTIFIER:
	Letter (LetterOrDigit | '_')*
	;

// Fragments 

fragment EscapeSequence:
	'\\' [btnfr"'\\]
	| '\\' ([0-3]? [0-7])? [0-7]
	| '\\' UnicodeLetter
	;

fragment HexDigits:
	HexDigit HexDigit*
	;

fragment Digits:
	Digit+
	;

fragment Letters:
	Letter+
	;

fragment LetterOrDigit:
	Letter
	| Digit
	;

fragment UnicodeLetter:
	'u'+ HexDigit HexDigit HexDigit HexDigit
	;

fragment Letter:
	[a-zA-Z]
	;

fragment Digit:
	[0-9]
	;

fragment Underscore:
	'_'
	;

fragment Dollar:
	'$'
	;

fragment QuestionMark:
	'?'
	;

fragment Dot:
	'.'
	;

// fragment HexDigits: HexDigit ((HexDigit | '_')* HexDigit)? ;

fragment HexDigit:
	[0-9a-fA-F]
	;