%{
	#include <iostream>
	#include <istream>
	#include <ostream>		
	#include <fstream>	
    ofstream fout("oulex.txt");
	#include <FlexLexer.h>	
	#include"yacc.hpp"

	int lineNo = 1;
	int colNo = 1;

%}
%option c++
%option noyywrap

%x multilinecomment
%x String
	
Single_line_comment		(\/\/)+[^\n]*
Float					[-+]?[0-9]+\.?[0-9]+
Integer					[-+]?[1-9][0-9]*|0
Char					"'"."'"
Identifier              [a-zA-Z_][a-zA-Z0-9_]*
NoId                    [0-9][a-zA-Z_][a-zA-Z0-9_]*


%%

"using"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::lex::USING" << endl;
	cout << "lex::lex::USING" << endl;
	return USING;
}
"namespace"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::lex::NAMESPACE" << endl;
	cout << "lex::lex::NAMESPACE" << endl;
	return NAMESPACE;
}

"if"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	cout << "lex::lex::If" << endl;
	return IF;
}
"else"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::ELSE" << endl;
	cout << "lex::ELSE" << endl;
	return ELSE;
}

"while"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::WHILE" << endl;
	cout << "lex::WHILE" << endl;
	return WHILE;
}

"do"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Do" << endl;
	cout << "lex::Do" << endl;
	return DO;
}

"for"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::FOR" << endl;
	cout << "lex::FOR" << endl;
	return FOR;
}

"foreach"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::FOREACH" << endl;
	cout << "lex::FOREACH" << endl;
	return FOREACH;
}

"interface"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Interface" << endl;
	cout << "lex::Interface" << endl;
	return INTERFACE;
}

"abstract"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::ABSTRACT" << endl;
	cout << "lex::ABSTRACT" << endl;
	return ABSTRACT;
}

"class"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CLASS" << endl;
	cout << "lex::CLASS" << endl;
	return CLASS;
}

"struct"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::STRUCT" << endl;
	cout << "lex::STRUCT" << endl;
	return STRUCT;
}

"new"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::NEW" << endl;
	cout << "lex::NEW" << endl;
	return NEW;
}

"public"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::PUBLIC" << endl;
	cout << "lex::PUBLIC" << endl;
	return PUBLIC;
}

"private"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::PRIVATE" << endl;
	cout << "lex::PRIVATE" << endl;
	return PRIVATE;
}

"protected"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::PROTECTED" << endl;
	cout << "lex::PROTECTED" << endl;
	return PROTECTED;
}



"switch"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::SWITCH" << endl;
	cout << "lex::SWITCH" << endl;
	return SWITCH;
}

"case"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CASE" << endl;
	cout << "lex::CASE" << endl;
	return CASE;
}

"defualt"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::DEFAULT" << endl;
	cout << "lex::DEFAULT" << endl;
	return DEFAULT;
}

"break"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::BREAK" << endl;
	cout << "lex::BREAK" << endl;
	return BREAK;
}

"static"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::STATIC" << endl;
	cout << "lex::STATIC" << endl;
	return STATIC;
}

"const"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CONST" << endl;
	cout << "lex::CONST" << endl;
	return CONST;
}


"void"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::VOID" << endl;
	cout << "lex::VOID" << endl;
	return VOID;
}

"try"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::TRY" << endl;
	cout << "lex::TRY" << endl;
	return TRY;
}

"catch"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CATCH" << endl;
	cout << "lex::CATCH" << endl;
	return CATCH;
}
"int"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::INT" << endl;
	cout << "lex::INT" << endl;
	return INT;
}

"short"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Short" << endl;
	cout << "lex::Short" << endl;
	return SHORT;
}

"long"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::LONG" << endl;
	cout << "lex::LONG" << endl;
	return ULONG;
}

"float"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::FLOAT" << endl;
	cout << "lex::FLOAT" << endl;
	return FLOAT;
}

"double"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::DOUBLE" << endl;
	cout << "lex::DOUBLE" << endl;
	return DOUBLE;
}

"char"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CHAR" << endl;
	cout << "lex::CHAR" << endl;
	return CHAR;
}

"string"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::STRING" << endl;
	cout << "lex::STRING" << endl;
	return STRING;
}

"bool"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::BOOL" << endl;
	cout << "lex::BOOL" << endl;
	return BOOL;
}

"return"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::RETURN" << endl;
	cout << "lex::RETURN" << endl;
	return RETURN;
}


"sizeof"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::SIZEOF" << endl;
	cout << "lex::SIZEOF" << endl;
	return SIZEOF;
}

"typeof"	{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::TYPEOF" << endl;
	cout << "lex::TYPEOF" << endl;
	return TYPEOF;
}

\n		{
	colNo=1;
	lineNo++;
}

" "		{
	colNo += 1; 
}

\+		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::Plus_S" << endl;
	cout << "lex::Plus_S" << endl;
	return Plus_S;
}
\+=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::PLUSEQ" << endl;
	cout << "lex::PLUSEQ" << endl;
	return PLUSEQ;
}

\++		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::PLUSPLUS" << endl;
	cout << "lex::PLUSPLUS" << endl;
	return PLUSPLUS;
}

\~		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::Maddeh" << endl;
	cout << "lex::Maddeh" << endl;
	return Maddeh;
}

\:		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::Colon" << endl;
	cout << "lex::Colon" << endl;
	return Colon;
}

\;		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::Semicolon" << endl;
	cout << "lex::Semicolon" << endl;
	return Semicolon;
}
\.		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo; 
	fout << "lex::Dot" << endl;
	cout << "lex::Dot" << endl;
		return Dot;
}

\-		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Dash" << endl;
	cout << "lex::Dash" << endl;
	return Dash;
}

\-=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::MINUSEQ" << endl;
	cout << "lex::MINUSEQ" << endl;
	return MINUSEQ;
}

\--		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::MINUSMINUS" << endl;
	cout << "lex::MINUSMINUS" << endl;
	return MINUSMINUS;
}


\*=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::STAREQ" << endl;
	cout << "lex::STAREQ" << endl;
	return STAREQ;
}

\*		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Multiple_N1" << endl;
	cout << "lex::Multiple_N1" << endl;
	return Multiple_N1;
}

\/		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Division" << endl;
	cout << "lex::Division" << endl;
	return Division;
}
\/=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::DIVEQ" << endl;
	cout << "lex::DIVEQ" << endl;
	return DIVEQ;
}

\%		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::PercenSign" << endl;
	cout << "lex::PercenSign" << endl;
	return PercenSign;
}

\%=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::MODEQ" << endl;
	cout << "lex::MODEQ" << endl;
	return MODEQ;
}

"("		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::OpenBracket" << endl;
	cout << "lex::OpenBracket" << endl;
	return OpenBracket;
}

")"		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CloseBracket" << endl;
	cout << "lex::CloseBracket" << endl;
	return CloseBracket;
}

\<		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Less" << endl;
	cout << "lex::Less" << endl;
	return Less;
}

\>		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Greater" << endl;
	cout << "lex::Greater" << endl;
	return Greater;
}
\!		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Ta3ajob" << endl;
	cout << "lex::Ta3ajob" << endl;
	return Ta3ajob;
}
\|		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Vertical_Mark" << endl;
	cout << "lex::Vertical_Mark" << endl;
	return Vertical_Mark;
}
\^		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Shapo" << endl;
	cout << "lex::Shapo" << endl;
	return Shapo;
}
\?		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::Quest_Mark" << endl;
	cout << "lex::Quest_Mark" << endl;
	return Quest_Mark;
}
\&		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::And" << endl;
	cout << "lex::And" << endl;
	return And;
}


\=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	cout << "lex::Equal" << endl;
	return Equal;
}

\{		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::OpenBracket_T1" << endl;
	cout << "lex::OpenBracket_T1" << endl;
	return OpenBracket_T1;
}

\}		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CloseBracket_T1" << endl;
	cout << "lex::CloseBracket_T1" << endl;
	return CloseBracket_T1;
}

\^=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::XOREQ" << endl;
	cout << "lex::XOREQ" << endl;
	return XOREQ;
}

\|=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::OREQ" << endl;
	cout << "lex::OREQ" << endl;
	return OREQ;
}

\<<		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::LTLT" << endl;
	cout << "lex::LTLT" << endl;
	return LTLT;
}

\>>		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::GTGT" << endl;
	cout << "lex::GTGT" << endl;
	return GTGT;
}

\>>=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::GTGTEQ" << endl;
	cout << "lex::GTGTEQ" << endl;
	return GTGTEQ;
}

\<<=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::LTLTEQ" << endl;
	cout << "lex::LTLTEQ" << endl;
	return LTLTEQ;
}

\==		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::EQEQ" << endl;
	cout << "lex::EQEQ" << endl;
	return EQEQ;
}

\!=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::NOTEQ" << endl;
	cout << "lex::NOTEQ" << endl;
	return NOTEQ;
}

\<=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::LEQ" << endl;
	cout << "lex::LEQ" << endl;
	return LEQ;
}

\>=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::GEQ" << endl;
	cout << "lex::GEQ" << endl;
	return GEQ;
}

\&&		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::ANDAND" << endl;
	cout << "lex::ANDAND" << endl;
	return ANDAND;
}

\&=		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::ANDEQ" << endl;
	cout << "lex::ANDEQ" << endl;
	return ANDEQ;
}


\/\*	{ 
	BEGIN multilinecomment;
	cout << "BEGIN multilinecomment" << endl;
}

<multilinecomment>[^*\n]*	{
	cout << "Finish multilinecomment" << endl;
	;
}

<multilinecomment>"*"+[^*/\n]*		{
	cout << "new multilinecomment" << endl;
	lineNo++;
}

<multilinecomment>"*"+"/"		{ 
	BEGIN INITIAL;
	cout << "lex::It Is A Multi Line Comment" << endl;
}

\"		{
	BEGIN String;
	cout << "BEGIN String" << endl;
}

<String>(\\.|[^"\\])*		{
	lineNo++;
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	string s = yytext; 
	fout << "lex::STRING_LITERAL" << yytext << endl;
	cout << "lex::STRING_LITERAL" << yytext << endl;
	return STRING_LITERAL;
}

<String>\"		{
	BEGIN INITIAL;
	cout << "lex::This Is A String" << endl;
}

{Single_line_comment}		{ 
	cout << "lex::It Is A Single Line Comment" << endl;
	lineNo++;										
}

{Identifier}		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::IDENTIFIER " << yytext << endl;
	cout << "lex::IDENTIFIER " << yytext << endl;
	return IDENTIFIER;
}
{NoId} {
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::NO_IDENTIFIER " << yytext << endl;
	cout << "lex::NO_IDENTIFIER " << yytext << endl;
	return NoId;
}


{Integer}		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	int x=atoi(yytext);
	fout << "lex::INTEGER_LITERAL" << x << endl;
	cout << "lex::INTEGER_LITERAL" << x << endl;
	return INTEGER_LITERAL;
}

{Float}		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	float x=atoi(yytext);
	fout << "lex::REAL_LITERAL" << x << endl;
	cout << "lex::REAL_LITERAL" << x << endl;
	return REAL_LITERAL;
}

{Char}		{
	colNo += strlen(yytext); 
	yylval.r.myLineNo= lineNo; 
	yylval.r.myColno = colNo;
	fout << "lex::CHARACTER_LITERAL" << endl;
	cout << "lex::CHARACTER_LITERAL" << endl;
	return  CHARACTER_LITERAL;
}		
									

%%

