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

// Primitive Types

INT:
	'int'
	;

DOUBLE:
	'double'
	;

BOOL:
	'bool'
	;

// Other Types

STRING:
	'String'
	;

// Operators

PLUS:
	'+'
	;

MINUS:
	'-'
	;

MULTIPLY:
	'*'
	;

DIVIDE:
	'/'
	;

MODULUS:
	'%'
	;

AND:
	'&&'
	;

ASSIGN:
	'='
	;

EQUALS:
	'=='
	;

NOT_EQUALS:
	'!='
	;

NOT:
	'!'
	;

MUST_NOT_BE_NULL:
	'!.'
	;

NULL_THEN_EVAL_TO_NULL:
	'?.'
	;

IF_NULL_THEN_ASSIGN:
	'??='
	;

// This lambda function primarily returns a value in a one liner.
LAMBDA_FUNC_IDENTIFIER:
	'=>'
	;

OR:
	'||'
	;

IN:
	COLON
	;

LESS_THAN:
	'<'
	;

GREATER_THAN:
	'>'
	;

GREATER_THAN_EQUALS:
	'>='
	;

LESS_THAN_EQUALS:
	'<='
	;

INCREMENT:
	'++'
	;

DECREMENT:
	'--'
	;

PLUS_EQUALS:
	'+='
	;

MINUS_EQUALS:
	'-='
	;

MULTIPLY_EQUALS:
	'*='
	;

DIVIDE_EQUALS:
	'/='
	;

MODULUS_EQUALS:
	'%='
	;

// Brackets

SQR_BRACK_OPEN:
	'['
	;

SQR_BRACK_CLOSE:
	']'
	;

CURL_BRACK_OPEN:
	'{'
	;

CURL_BRACK_CLOSE:
	'}'
	;

PAREN_OPEN:
	'('
	;

PAREN_CLOSE:
	')'
	;

NULLABLE_TYPE_IDENTIFIER:
	QuestionMark
	;

// Keywords & MODIFIERS

// For annotation
AT:
	'@'
	;

ABSTRACT:
	'abstract'
	;

AS:
	'as'
	;

ASSERT:
	'assert'
	;

ASYNC:
	'async'
	;

AWAIT:
	'await'
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

ELSE:
	'else'
	;

ENUM:
	'enum'
	;

EXTENDS:
	'extends'
	;

// This is a reserved keyword for now, as we are going to implement extensions on objects. This is
// reserved as to not have to introduce breaking changes in future. ALso, on is a reserved keyword
// for the same purpose. An extension, when implemented, would be defined as follows extension
// ExtensionName on ExistingClassName {}
EXTENSION:
	'extension'
	;

EXTERNAL:
	'external'
	;

FACTORY:
	'factory'
	;

FALSE:
	'false'
	;

FINAL:
	'final'
	;

FINALLY:
	'finally'
	;

FOR:
	'for'
	;

FUNCTION:
	'Function'
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

IS:
	'is'
	;

// For Dynamic-typing of local variables. Since a variable, if declared by using 'let', must be
// assigned at the declaration time, we can figure the type of the variable out at compile time
// itself. Hence, we do not need to inclue dynamic-typing in the compiler. And if a variable is
// initialized like this: let x = getX(); TYPE getX() {return new Type();} Then, x has the type
// 'TYPE', since the function getX() returns a variable of type 'TYPE'.
LET:
	'let'
	;

// A Agohya Program (.agco) must start with a lib declaration. An example declaration would be lib
// 'com.example.project.anyNumberOfFoldersInBetween.fileName'; OR lib
// 'com.example.project.fileName';
LIB:
	'lib'
	;

NEW:
	'new'
	;

// This is a reserved keyword for now, as we are going to implement extensions on objects. This is
// reserved as to not have to introduce breaking changes in future. ALso, extension is a reserved
// keyword for the same purpose. An extension, when implemented, would be defined as follows
// extension ExtensionName on ExistingClassName {}. This keyword doesn't have any purpose other than
// defining an extension.
ON:
	'on'
	;

OPERATOR:
	'operator'
	;

// We provide method overloading..... and hence we do not need a required keyword like dart
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

TRUE:
	'true'
	;

TRY:
	'try'
	;

TYPEDEF:
	'typedef'
	;

VOID:
	'void'
	;

WHILE:
	'while'
	;

// Whitespaces

WHITESPACE: ('\t' | ' ' | '\n' '\r')+ -> skip
	;

SINGLE_LINE_COMMENT:
	'//' ~[\r\n]* -> skip
	;

MULTI_LINE_COMMENT:
	'/*' (MULTI_LINE_COMMENT | .)*? '*/' -> skip
	;

// Literals

BOOL_LITERAL:
	TRUE
	| FALSE
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

LIB_LITERAL:
	'\'' IDENTIFIER '\''
	;

IMPORT_LITERAL:
	'\'' IDENTIFIER '\''
	;

// Identifiers

IDENTIFIER:
	Letter (LetterOrDigit | '_')*
	;

NEWLINE:
	'\n'
	| '\r'
	;

// SUB Parts

Underscore:
	'_'
	;

Dollar:
	'$'
	;

QuestionMark:
	'?'
	;

COMMA:
	','
	;

Dot:
	'.'
	;

COLON:
	':'
	;

SEMICOLON:
	';'
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

// fragment HexDigits: HexDigit ((HexDigit | '_')* HexDigit)? ;

fragment HexDigit:
	[0-9a-fA-F]
	;