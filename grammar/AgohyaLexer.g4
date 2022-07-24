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
lexer grammar AgohyaLexer;

// Keywords
ABSTRACT:
	'abstract'
	;

ASSERT:
	'assert'
	;

BOOL:
	'bool'
	;

BREAK:
	'break'
	;

CASE:
	'case'
	;

CATCH:
	'catch'
	;

CLASS:
	'class'
	;

CONST:
	'const'
	;

CONTINUE:
	'continue'
	;

DEFAULT:
	'default'
	;

DO:
	'do'
	;

DOUBLE:
	'double'
	;

ELSE:
	'else'
	;

ENUM:
	'enum'
	;

EXTENDS:
	'extends'
	;

FINAL:
	'final'
	;

FOR:
	'for'
	;

IF:
	'if'
	;

IMPLEMENTS:
	'implements'
	;

IMPORT:
	'import'
	;

INT:
	'int'
	;

/// Equivalent to java's instanceof
IS:
	'is'
	;

NEW:
	'new'
	;

/// Does not support Java-style package variables, but this is used as the package declaration.
PACKAGE:
	'package'
	;

/// visibility private (only in the current file)
PRIVATE:
	'private'
	;

/// Visibility public (accessible by all)
PUBLIC:
	'public'
	;

RETURN:
	'return'
	;

STATIC:
	'static'
	;

SUPER:
	'super'
	;

SWITCH:
	'switch'
	;

THIS:
	'this'
	;

THROW:
	'throw'
	;

TRY:
	'try'
	;

VOID:
	'void'
	;

WHILE:
	'while'
	;

/// Defined Literals

BOOL_LITERAL:
	'true'
	| 'false'
	;

DECIMAL_LITERAL: ('0' | [1-9] (Digits? | '_'+ Digits)) [lL]?
	;

DOUBLE_LITERAL: (Digits '.' Digits? | '.' Digits) ExponentPart? [fFdD]?
	| Digits (ExponentPart [fFdD]? | [fFdD])
	;

HEX_LITERAL:
	'0' [xX] [0-9a-fA-F] ([0-9a-fA-F_]* [0-9a-fA-F])? [lL]?
	;

NULL_LITERAL:
	'null'
	;

STRING_LITERAL:
	'"' (~["\\\r\n] | EscapeSequence)* '"'
	;

// Separators

LPAREN:
	'('
	;

RPAREN:
	')'
	;

LBRACE:
	'{'
	;

RBRACE:
	'}'
	;

LBRACK:
	'['
	;

RBRACK:
	']'
	;

SEMI:
	';'
	;

COMMA:
	','
	;

DOT:
	'.'
	;

// Operators

ASSIGN:
	'='
	;

GT:
	'>'
	;

LT:
	'<'
	;

// TODO: Check this once.

// BANG: '!' ;

// TILDE: '~' ;

QUESTION:
	'?'
	;

COLON:
	':'
	;

EQUAL:
	'=='
	;

LE:
	'<='
	;

GE:
	'>='
	;

NOTEQUAL:
	'!='
	;

AND:
	'&&'
	;

OR:
	'||'
	;

INC:
	'++'
	;

DEC:
	'--'
	;

ADD:
	'+'
	;

SUB:
	'-'
	;

MUL:
	'*'
	;

DIV:
	'/'
	;

BITAND:
	'&'
	;

BITOR:
	'|'
	;

CARET:
	'^'
	;

MOD:
	'%'
	;

ADD_ASSIGN:
	'+='
	;

SUB_ASSIGN:
	'-='
	;

MUL_ASSIGN:
	'*='
	;

DIV_ASSIGN:
	'/='
	;

AND_ASSIGN:
	'&='
	;

OR_ASSIGN:
	'|='
	;

XOR_ASSIGN:
	'^='
	;

MOD_ASSIGN:
	'%='
	;

LSHIFT_ASSIGN:
	'<<='
	;

RSHIFT_ASSIGN:
	'>>='
	;

/// Redirect output of statement to return value or lambda function
ARROW:
	'=>'
	;

// Whitespace and comments

WS:
	[ \t\r\n\u000C]+ -> channel(HIDDEN)
	;

COMMENT:
	'/*' .*? '*/' -> channel(HIDDEN)
	;

LINE_COMMENT:
	'//' ~[\r\n]* -> channel(HIDDEN)
	;

// Identifiers

IDENTIFIER:
	Letter LetterOrDigit*
	;

// Fragment rules

fragment ExponentPart:
	[eE] [+-]? Digits
	;

fragment EscapeSequence:
	'\\' [btnfr"'\\]
	| '\\' ([0-3]? [0-7])? [0-7]
	| '\\' 'u'+ HexDigit HexDigit HexDigit HexDigit
	;

fragment HexDigits:
	HexDigit ((HexDigit | '_')* HexDigit)?
	;

fragment HexDigit:
	[0-9a-fA-F]
	;

fragment Digits:
	[0-9] ([0-9_]* [0-9])?
	;

fragment LetterOrDigit:
	Letter
	| [0-9]
	;

fragment Letter:
	[a-zA-Z$_] // these are the "java letters" below 0x7F
	| ~[\u0000-\u007F\uD800-\uDBFF] // covers all characters above 0x7F which are not a surrogate
	| [\uD800-\uDBFF] [\uDC00-\uDFFF]
	// covers UTF-16 surrogate pairs encodings for U+10000 to U+10FFFF
	;
