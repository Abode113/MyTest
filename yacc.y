%output ="yacc.cpp"
%{
	#include <iostream>
	#include <fstream>
	#define _CRT_SECURE_NO_WARNINGS
	#define YYDEBUG 1
	using namespace std;
	#include <FlexLexer.h>
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	
%}

/* Special tokens to help disambiguate rank_specifiers */
%token RANK_SPECIFIER

/* C.1.4 Tokens */
%token IDENTIFIER 
%token INTEGER_LITERAL REAL_LITERAL CHARACTER_LITERAL STRING_LITERAL


/* C.1.7 KEYWORDS */ 
%token  ABSTRACT AS BASE BOOL BREAK
%token  BYTE CASE CATCH CHAR CHECKED
%token  CLASS CONST CONTINUE DECIMAL DEFAULT
%token  DELEGATE DO DOUBLE ELSE ENUM
%token  EVENT EXPLICIT EXTERN FALSE FINALLY
%token  FIXED FLOAT FOR FOREACH GOTO
%token  IF IMPLICIT IN INT INTERFACE
%token  INTERNAL IS LOCK LONG NAMESPACE
%token  NEW NULL_LITERAL OBJECT OPERATOR OUT
%token  OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC
%token  READONLY REF RETURN SBYTE SEALED
%token  SHORT SIZEOF STACKALLOC STATIC STRING
%token  STRUCT SWITCH THIS THROW TRUE
%token  TRY TYPEOF UINT ULONG UNCHECKED
%token  UNSAFE USHORT USING VIRTUAL VOID
%token  VOLATILE WHILE
%token  OpenBracket CloseBracket

/* The ones that seem to be context sensitive */
/* Attribute Targets */
%token ASSEMBLY FIELD METHOD MODULE PARAM PROPERTY TYPE
/* Accessor types */
%token GET SET 
/* Event accessor declarations */
%token ADD REMOVE

/*** PUNCTUATION AND SINGLE CHARACTER OPERATORS ***/
%token COMMA  ","
%token LEFT_BRACKET  "["
%token RIGHT_BRACKET "]"

/*** MULTI-CHARACTER OPERATORS ***/
%token PLUSEQ MINUSEQ STAREQ DIVEQ MODEQ
%token XOREQ  ANDEQ   OREQ LTLT GTGT GTGTEQ LTLTEQ EQEQ NOTEQ
%token LEQ GEQ ANDAND OROR PLUSPLUS MINUSMINUS ARROW

%token CloseBracket Multiple_N1 PercenSign Division Dash Plus_S Maddeh Colon Semicolon OpenBracket_T1 OpenBracket Dot
%token Less Greater And Shapo Vertical_Mark Ta3ajob Quest_Mark Equal CloseBracket_T1

%start compilation_unit  
%union{
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColno;
		}r;
	}


%%


/***** C.1.8 Literals *****/
literal
  : boolean_literal 
  | INTEGER_LITERAL
  | REAL_LITERAL
  | CHARACTER_LITERAL
  | STRING_LITERAL
  | NULL_LITERAL
  ;
boolean_literal
  : TRUE
  | FALSE
  ;
/********** C.2 Syntactic grammar **********/

/***** C.2.1 Basic concepts *****/
namespace_name
  : qualified_identifier
  ;
type_name
  : qualified_identifier
  ;
/***** C.2.2 Types *****/
type
  : non_array_type{cout<<"ggG" << endl;}
  | array_type{cout<<"fff" << endl;}
  ;
non_array_type
  : simple_type
  | type_name
  ;
simple_type
  : primitive_type
  | class_type
  | pointer_type
  ;
primitive_type
  : numeric_type
  | BOOL
  ;
numeric_type
  : integral_type{cout<<"hhh" << endl;}
  | floating_point_type
  | DECIMAL
  ;
integral_type
  : SBYTE | BYTE | SHORT | USHORT | INT {cout<<"yacc::int" << endl;} | UINT | LONG | ULONG | CHAR
  ;
floating_point_type
  : FLOAT | DOUBLE
  ;
class_type
  : OBJECT | STRING
  ;
pointer_type
  : type Multiple_N1
  | VOID{cout<<"yacc:void3"<<endl;} Multiple_N1
  ;
array_type
  : array_type rank_specifier
  | simple_type rank_specifier
  | qualified_identifier rank_specifier
  ;
rank_specifiers_opt
  : /* Nothing */
  | rank_specifier rank_specifiers_opt
  ;
rank_specifier
  : RANK_SPECIFIER
  ;
/***** C.2.3 Variables *****/
variable_reference
  : expression
  ;
/***** C.2.4 Expressions *****/
argument_list
  : argument
  | argument_list COMMA argument
  ;
argument
  : expression
  | REF variable_reference
  | OUT variable_reference
  ;
primary_expression
  : parenthesized_expression
  | primary_expression_no_parenthesis
  ;
primary_expression_no_parenthesis
  : literal
  | array_creation_expression
  | member_access
  | invocation_expression
  | element_access
  | this_access
  | base_access
  | new_expression
  | typeof_expression
  | sizeof_expression
  | checked_expression
  | unchecked_expression
  ;
parenthesized_expression
  : OpenBracket expression CloseBracket
  ;
member_access
  : primary_expression Dot IDENTIFIER
  | primitive_type Dot IDENTIFIER
  | class_type Dot IDENTIFIER
  ;
invocation_expression
  : primary_expression_no_parenthesis OpenBracket argument_list_opt CloseBracket
  | qualified_identifier OpenBracket argument_list_opt CloseBracket
  ;
argument_list_opt
  : /* Nothing */
  | argument_list
  ;
element_access
  : primary_expression LEFT_BRACKET expression_list RIGHT_BRACKET
  | qualified_identifier LEFT_BRACKET expression_list RIGHT_BRACKET
  ;
expression_list_opt
  : /* Nothing */
  | expression_list
  ;
expression_list
  : expression
  | expression_list COMMA expression
  ;
this_access
  : THIS
  ;
base_access
  : BASE Dot IDENTIFIER
  | BASE LEFT_BRACKET expression_list RIGHT_BRACKET
  ;
post_increment_expression
  : postfix_expression PLUSPLUS
  ;
post_decrement_expression
  : postfix_expression MINUSMINUS
  ;
new_expression
  : object_creation_expression
  ;
object_creation_expression
  : NEW type OpenBracket argument_list_opt CloseBracket
  ;
array_creation_expression
  : NEW non_array_type LEFT_BRACKET expression_list RIGHT_BRACKET rank_specifiers_opt array_initializer_opt
  | NEW array_type array_initializer
  ;
array_initializer_opt
  : /* Nothing */
  | array_initializer
  ;
typeof_expression
  : TYPEOF OpenBracket type CloseBracket
  | TYPEOF OpenBracket VOID{cout<<"yacc:void4"<<endl;} CloseBracket
  ;
checked_expression
  : CHECKED OpenBracket expression CloseBracket
  ;
unchecked_expression
  : UNCHECKED OpenBracket expression CloseBracket
  ;
pointer_member_access
  : postfix_expression ARROW IDENTIFIER
  ;
addressof_expression
  : And unary_expression
  ;
sizeof_expression
  : SIZEOF OpenBracket type CloseBracket
  ;
postfix_expression
  : primary_expression
  | qualified_identifier
  | post_increment_expression
  | post_decrement_expression
  | pointer_member_access
  ;
unary_expression_not_plusminus
  : postfix_expression
  | Ta3ajob unary_expression
  | Maddeh unary_expression
  | cast_expression
  ;
pre_increment_expression
  : PLUSPLUS unary_expression
  ;
pre_decrement_expression
  : MINUSMINUS unary_expression
  ;
unary_expression
  : unary_expression_not_plusminus
  | Plus_S unary_expression
  | Dash unary_expression
  | Multiple_N1 unary_expression
  | pre_increment_expression
  | pre_decrement_expression
  | addressof_expression
  ;
/* For cast_expression we really just want a (type) in the brackets,
 * but have to do some factoring to get rid of conflict with expressions.
 * The paremtnesised expression in the first three cases below should be 
 * semantically restricted to an identifier, optionally follwed by qualifiers
 */
cast_expression
  : OpenBracket expression CloseBracket unary_expression_not_plusminus
  | OpenBracket multiplicative_expression Multiple_N1 CloseBracket unary_expression 
  | OpenBracket qualified_identifier rank_specifier type_quals_opt CloseBracket unary_expression  
  | OpenBracket primitive_type type_quals_opt CloseBracket unary_expression
  | OpenBracket class_type type_quals_opt CloseBracket unary_expression
  | OpenBracket VOID{cout<<"yacc:void5"<<endl;} type_quals_opt CloseBracket unary_expression
  ;
type_quals_opt
  : /* Nothing */
  | type_quals
  ;
type_quals
  : type_qual
  | type_quals type_qual
  ;
type_qual 
  : rank_specifier 
  | Multiple_N1
  ;
multiplicative_expression
  : unary_expression
  | multiplicative_expression Multiple_N1 unary_expression  
  | multiplicative_expression Division unary_expression
  | multiplicative_expression PercenSign unary_expression
  ;
additive_expression
  : multiplicative_expression
  | additive_expression Plus_S multiplicative_expression
  | additive_expression Dash multiplicative_expression
  ;
shift_expression
  : additive_expression 
  | shift_expression LTLT additive_expression
  | shift_expression GTGT additive_expression
  ;
relational_expression
  : shift_expression
  | relational_expression Less shift_expression
  | relational_expression Greater shift_expression
  | relational_expression LEQ shift_expression
  | relational_expression GEQ shift_expression
  | relational_expression IS type
  | relational_expression AS type
  ;
equality_expression
  : relational_expression
  | equality_expression EQEQ relational_expression
  | equality_expression NOTEQ relational_expression
  ;
and_expression
  : equality_expression
  | and_expression And equality_expression
  ;
exclusive_or_expression
  : and_expression
  | exclusive_or_expression Shapo and_expression
  ;
inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression Vertical_Mark exclusive_or_expression
  ;
conditional_and_expression
  : inclusive_or_expression
  | conditional_and_expression ANDAND inclusive_or_expression
  ;
conditional_or_expression
  : conditional_and_expression
  | conditional_or_expression OROR conditional_and_expression
  ;
conditional_expression
  : conditional_or_expression
  | conditional_or_expression Quest_Mark expression{cout<<"yacc::7"<<endl;} Colon expression{cout<<"yacc::6"<<endl;}
  ;
assignment
: unary_expression assignment_operator{cout<<"yacc::1"<<endl;} expression{cout<<"yacc::5"<<endl;} 
  ;
assignment_operator
  : Equal{cout<<"yacc::equal4" << endl;} | PLUSEQ | MINUSEQ | STAREQ | DIVEQ | MODEQ 
  | XOREQ | ANDEQ | OREQ | GTGTEQ | LTLTEQ 
  ;
expression
  : conditional_expression
  | assignment
  ;
constant_expression
  : expression
  ;
boolean_expression
  : expression
  ;
/***** C.2.5 Statements *****/
statement
  : labeled_statement{cout<<"yacc::labeled_statement" << endl;}
  | declaration_statement{cout<<"yacc::declaration_statement" << endl;}
  | embedded_statement{cout<<"yacc::embedded_statement" << endl;}
  ;
embedded_statement
  : block
  | empty_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  | try_statement
  | checked_statement
  | unchecked_statement
  | lock_statement
  | using_statement
  | unsafe_statement
  | fixed_statement
  ;
block
  : OpenBracket_T1 statement_list_opt CloseBracket_T1
  ;
statement_list_opt
  : /* Nothing */
  | statement_list
  ;

statement_list
  : statement
  | statement_list statement
  ;
empty_statement
  : Semicolon{cout<<"yacc::Semicolon21"<<endl;}
  ;
labeled_statement
  : IDENTIFIER Colon statement
  ;
declaration_statement
  : local_variable_declaration Semicolon{cout<<"yacc::Semicolon22"<<endl;}
  | local_constant_declaration Semicolon{cout<<"yacc::Semicolon23"<<endl;}
  ;
local_variable_declaration
  : type variable_declarators
  ;
variable_declarators
  : variable_declarator
  | variable_declarators COMMA variable_declarator
  ;
variable_declarator
  : IDENTIFIER
  | IDENTIFIER Equal variable_initializer
  ;
variable_initializer
  : expression
  | array_initializer
  | stackalloc_initializer
  ;
stackalloc_initializer
: STACKALLOC type  LEFT_BRACKET expression RIGHT_BRACKET 
  ; 
local_constant_declaration
  : CONST type constant_declarators{cout<<"yacc::10"<<endl;}
  ;
constant_declarators
  : constant_declarator{cout<<"yacc::9"<<endl;}
  | constant_declarators COMMA constant_declarator
  ;
constant_declarator
  : IDENTIFIER Equal constant_expression
  ;
expression_statement
  : statement_expression Semicolon{cout<<"yacc::Semicolon24"<<endl;}
  ;
statement_expression
  : invocation_expression
  | object_creation_expression
  | assignment{cout<<"yacc::*1"<<endl;}
  | post_increment_expression
  | post_decrement_expression
  | pre_increment_expression
  | pre_decrement_expression
  ;
selection_statement
  : if_statement
  | switch_statement
  ;
if_statement
  : IF OpenBracket boolean_expression CloseBracket embedded_statement
  | IF OpenBracket boolean_expression CloseBracket embedded_statement ELSE embedded_statement
  ;
switch_statement
  : SWITCH OpenBracket expression CloseBracket switch_block
  ;
switch_block
  : OpenBracket_T1 switch_sections_opt CloseBracket_T1
  ;
switch_sections_opt
  : /* Nothing */
  | switch_sections
  ;
switch_sections
  : switch_section
  | switch_sections switch_section
  ;
switch_section
  : switch_labels statement_list
  ;
switch_labels
  : switch_label
  | switch_labels switch_label
  ;
switch_label
  : CASE constant_expression Colon
  | DEFAULT Colon
  ;
iteration_statement
  : while_statement
  | do_statement
  | for_statement
  | foreach_statement
  ;
unsafe_statement
  : UNSAFE block
  ;
while_statement
  : WHILE OpenBracket boolean_expression CloseBracket embedded_statement
  ;
do_statement
  : DO embedded_statement WHILE OpenBracket boolean_expression CloseBracket Semicolon{cout<<"yacc::Semicolon25"<<endl;}
  ;
for_statement
  : FOR OpenBracket for_initializer_opt Semicolon{cout<<"yacc::Semicolon26"<<endl;} for_condition_opt Semicolon{cout<<"yacc::Semicolon27"<<endl;} for_iterator_opt CloseBracket embedded_statement
  ;
for_initializer_opt
  : /* Nothing */
  | for_initializer
  ;
for_condition_opt
  : /* Nothing */
  | for_condition
  ;
for_iterator_opt
  : /* Nothing */
  | for_iterator
  ;
for_initializer
  : local_variable_declaration
  | statement_expression_list
  ;
for_condition
  : boolean_expression
  ;
for_iterator
  : statement_expression_list
  ;
statement_expression_list
  : statement_expression
  | statement_expression_list COMMA statement_expression
  ;
foreach_statement
  : FOREACH OpenBracket type IDENTIFIER IN expression CloseBracket embedded_statement
  ;
jump_statement
  : break_statement
  | continue_statement
  | goto_statement
  | return_statement
  | throw_statement
  ;
break_statement
  : BREAK Semicolon{cout<<"yacc::Semicolon1"<<endl;}
  ;
continue_statement
  : CONTINUE Semicolon{cout<<"yacc::Semicolon2"<<endl;}
  ;
goto_statement
  : GOTO IDENTIFIER Semicolon{cout<<"yacc::Semicolon3"<<endl;}
  | GOTO CASE constant_expression Semicolon{cout<<"yacc::Semicolon4"<<endl;}
  | GOTO DEFAULT Semicolon{cout<<"yacc::Semicolon5"<<endl;}
  ;
return_statement
  : RETURN expression_opt Semicolon{cout<<"yacc::Semicolon6"<<endl;}
  ;
expression_opt
  : /* Nothing */
  | expression
  ;
throw_statement
  : THROW expression_opt Semicolon{cout<<"yacc::Semicolon7"<<endl;}
  ;
try_statement
  : TRY block catch_clauses
  | TRY block finally_clause
  | TRY block catch_clauses finally_clause
  ;
catch_clauses
  : catch_clause
  | catch_clauses catch_clause
  ;
catch_clause
  : CATCH OpenBracket class_type identifier_opt CloseBracket block
  | CATCH OpenBracket type_name identifier_opt CloseBracket block
  | CATCH block
  ;
identifier_opt
  : /* Nothing */
  | IDENTIFIER
  ;
finally_clause
  : FINALLY block
  ;
checked_statement
  : CHECKED block
  ;
unchecked_statement
  : UNCHECKED block
  ;
lock_statement
  : LOCK OpenBracket expression CloseBracket embedded_statement
  ;
using_statement
  : USING OpenBracket resource_acquisition CloseBracket embedded_statement
  ;
resource_acquisition
  : local_variable_declaration
  | expression
  ;
fixed_statement
/*! : FIXED OpenBracket pointer_type fixed_pointer_declarators CloseBracket embedded_statement */
  : FIXED OpenBracket  type fixed_pointer_declarators CloseBracket embedded_statement
  ;
fixed_pointer_declarators
  : fixed_pointer_declarator
  | fixed_pointer_declarators COMMA fixed_pointer_declarator
  ;
fixed_pointer_declarator
  : IDENTIFIER Equal{cout<<"yacc::equal1" << endl;} expression
  ;
compilation_unit
  : using_directives_opt attributes_opt{cout<<"yacc::Empty"<<endl;}
  | using_directives_opt namespace_member_declarations{cout<<"yacc::start"<<endl;}
  ;
using_directives_opt
  : /* Nothing */
  | using_directives
  ;
attributes_opt
  : /* Nothing */
  | attributes
  ;
namespace_member_declarations_opt
  : /* Nothing */
  | namespace_member_declarations
  ;
namespace_declaration
  : attributes_opt NAMESPACE qualified_identifier namespace_body comma_opt
  ;
comma_opt
  : /* Nothing */
  | Semicolon{cout<<"yacc::Semicolon8"<<endl;}
  ;
/*
qualified_identifier
  : IDENTIFIER
  | qualified_identifier Dot IDENTIFIER
  ;
*/
qualified_identifier
  : IDENTIFIER
  | qualifier IDENTIFIER
  ;
qualifier
  : IDENTIFIER Dot 
  | qualifier IDENTIFIER Dot 
  ;
namespace_body
  : OpenBracket_T1 using_directives_opt namespace_member_declarations_opt CloseBracket_T1
  ;
using_directives
  : using_directive
  | using_directives using_directive
  ;
using_directive
  : using_alias_directive
  | using_namespace_directive
  ;
using_alias_directive
  : USING IDENTIFIER Equal{cout<<"yacc::equal2" << endl;} qualified_identifier Semicolon{cout<<"yacc::Semicolon9"<<endl;}
  ;
using_namespace_directive
  : USING namespace_name Semicolon{cout<<"yacc::Semicolon10"<<endl;}
  ;
namespace_member_declarations
  : namespace_member_declaration
  | namespace_member_declarations namespace_member_declaration
  ;
namespace_member_declaration
  : namespace_declaration
  | type_declaration
  ;
type_declaration
  : class_declaration
  | struct_declaration
  | interface_declaration
  | enum_declaration
  | delegate_declaration
  ;

/***** Modifiers *****/
/* This now replaces:
 * class_modifier, constant_modifier, field_modifier, method_modifier, 
 * property_modifier, event_modifier, indexer_modifier, operator_modifier, 
 * constructor_modifier, struct_modifier, interface_modifier, 
 * enum_modifier, delegate_modifier
 */
modifiers_opt
  : /* Nothing */
  | modifiers
  ;
modifiers
  : modifier
  | modifiers modifier
  ;
modifier
  : ABSTRACT
  | EXTERN
  | INTERNAL
  | NEW
  | OVERRIDE
  | PRIVATE
  | PROTECTED
  | PUBLIC
  | READONLY
  | SEALED
  | STATIC
  | UNSAFE
  | VIRTUAL
  | VOLATILE
  ;
/***** C.2.6 Classes *****/
class_declaration
  : attributes_opt modifiers_opt CLASS{ cout<<"Yacc::Class"<<endl;} IDENTIFIER class_base_opt class_body comma_opt
  ;
class_base_opt
  : /* Nothing */
  | class_base
  ;
class_base
  : Colon class_type
  | Colon interface_type_list
  | Colon class_type COMMA interface_type_list
  ;
interface_type_list
  : type_name
  | interface_type_list COMMA type_name
  ;
class_body
  : OpenBracket_T1{cout<<"---"<<endl;} class_member_declarations_opt CloseBracket_T1{cout<<"---"<<endl;}
  ;
class_member_declarations_opt
  : /* Nothing */
  | class_member_declarations
  ;
class_member_declarations
  : class_member_declaration
  | class_member_declarations class_member_declaration
  ;
class_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
  | destructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;
constant_declaration
  : attributes_opt modifiers_opt CONST type constant_declarators Semicolon{cout<<"yacc::Semicolon11"<<endl;}
  ;
field_declaration
  : attributes_opt modifiers_opt type variable_declarators Semicolon{cout<<"yacc::Semicolon12"<<endl;}
  ;
method_declaration
  : method_header method_body
  ;
/* Inline return_type to avoid conflict with field_declaration */
method_header
  : attributes_opt modifiers_opt type qualified_identifier OpenBracket formal_parameter_list_opt CloseBracket
  | attributes_opt modifiers_opt VOID{cout<<"yacc:void6"<<endl;} qualified_identifier OpenBracket formal_parameter_list_opt CloseBracket
  ;
formal_parameter_list_opt
  : /* Nothing */
  | formal_parameter_list
  ;
return_type
  : type
  | VOID{cout<<"yacc:void1"<<endl;}
  ;
method_body
  : block
  | Semicolon{cout<<"yacc::Semicolon13"<<endl;}
  ;
formal_parameter_list
  : formal_parameter
  | formal_parameter_list COMMA formal_parameter
  ;
formal_parameter
  : fixed_parameter
  | parameter_array
  ;
fixed_parameter
  : attributes_opt parameter_modifier_opt type IDENTIFIER
  ;
parameter_modifier_opt
  : /* Nothing */
  | REF
  | OUT
  ;
parameter_array
/*!  : attributes_opt PARAMS array_type IDENTIFIER */
  : attributes_opt PARAMS type IDENTIFIER
  ;
property_declaration
  : attributes_opt modifiers_opt type qualified_identifier 
      ENTER_getset
    OpenBracket_T1 accessor_declarations CloseBracket_T1
      EXIT_getset
  ;
accessor_declarations
  : get_accessor_declaration set_accessor_declaration_opt
  | set_accessor_declaration get_accessor_declaration_opt
  ;
set_accessor_declaration_opt
  : /* Nothing */
  | set_accessor_declaration
  ;
get_accessor_declaration_opt
  : /* Nothing */
  | get_accessor_declaration
  ;
get_accessor_declaration
  : attributes_opt GET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
set_accessor_declaration
  : attributes_opt SET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
accessor_body
  : block
  | Semicolon{cout<<"yacc::Semicolon14"<<endl;}
  ;
event_declaration
  : attributes_opt modifiers_opt EVENT type variable_declarators Semicolon{cout<<"yacc::Semicolon15"<<endl;}
  | attributes_opt modifiers_opt EVENT type qualified_identifier 
      ENTER_accessor_decl 
    OpenBracket_T1 event_accessor_declarations CloseBracket_T1
      EXIT_accessor_decl
  ;
event_accessor_declarations
  : add_accessor_declaration remove_accessor_declaration
  | remove_accessor_declaration add_accessor_declaration
  ;
add_accessor_declaration
  : attributes_opt ADD 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
remove_accessor_declaration
  : attributes_opt REMOVE 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
indexer_declaration
  : attributes_opt modifiers_opt indexer_declarator 
      ENTER_getset
    OpenBracket_T1 accessor_declarations CloseBracket_T1
      EXIT_getset
  ;
indexer_declarator
  : type THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET
/* | type type_name Dot THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET */
  | type qualified_this LEFT_BRACKET formal_parameter_list RIGHT_BRACKET
  ;
qualified_this
  : qualifier THIS
  ;
/* Widen operator_declaration to make modifiers optional */
operator_declaration
  : attributes_opt modifiers_opt operator_declarator operator_body
  ;
operator_declarator
  : overloadable_operator_declarator
  | conversion_operator_declarator
  ;
overloadable_operator_declarator
  : type OPERATOR overloadable_operator OpenBracket type IDENTIFIER CloseBracket
  | type OPERATOR overloadable_operator OpenBracket type IDENTIFIER COMMA type IDENTIFIER CloseBracket
  ;
overloadable_operator
  : Plus_S | Dash 
  | Ta3ajob | Maddeh | PLUSPLUS | MINUSMINUS | TRUE | FALSE
  | Multiple_N1 | Division | PercenSign | And | Vertical_Mark | Shapo 
  | LTLT | GTGT | EQEQ | NOTEQ | Greater | Less | GEQ | LEQ
  ;
conversion_operator_declarator
  : IMPLICIT OPERATOR type OpenBracket type IDENTIFIER CloseBracket
  | EXPLICIT OPERATOR type OpenBracket type IDENTIFIER CloseBracket
  ;
constructor_declaration
  : attributes_opt modifiers_opt constructor_declarator constructor_body
  ;
constructor_declarator
  : IDENTIFIER OpenBracket formal_parameter_list_opt CloseBracket constructor_initializer_opt
  ;
constructor_initializer_opt
  : /* Nothing */
  | constructor_initializer
  ;
constructor_initializer
  : Colon BASE OpenBracket argument_list_opt CloseBracket
  | Colon THIS OpenBracket argument_list_opt CloseBracket
  ;
/* Widen from unsafe_opt STATIC to modifiers_opt */
/* This is now subsumed by constructor_declaration - delete
 * static_constructor_declaration
 *  : attributes_opt modifiers_opt IDENTIFIER OpenBracket CloseBracket block
 *  ;
 */
/* No longer needed after modification of static_constructor_declaration
 * unsafe_opt
 * : 
 * | UNSAFE
 * ;
 */
/* Widen from unsafe_opt to modifiers_opt */
destructor_declaration
  : attributes_opt modifiers_opt Maddeh IDENTIFIER OpenBracket CloseBracket block
  ;
operator_body
  : block
  | Semicolon{cout<<"yacc::Semicolon16"<<endl;}
  ;
constructor_body /*** Added by JP - same as method_body ***/
  : block
  | Semicolon{cout<<"yacc::Semicolon17"<<endl;}
  ;

/***** C.2.7 Structs *****/
struct_declaration
  : attributes_opt modifiers_opt STRUCT IDENTIFIER struct_interfaces_opt struct_body comma_opt
  ;
struct_interfaces_opt
  : /* Nothing */
  | struct_interfaces
  ;
struct_interfaces
  : Colon interface_type_list
  ;
struct_body
  : OpenBracket_T1 struct_member_declarations_opt CloseBracket_T1
  ;
struct_member_declarations_opt
  : /* Nothing */
  | struct_member_declarations
  ;
struct_member_declarations
  : struct_member_declaration
  | struct_member_declarations struct_member_declaration
  ;
struct_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;

/***** C.2.8 Arrays *****/
array_initializer
  : OpenBracket_T1 variable_initializer_list_opt CloseBracket_T1
  | OpenBracket_T1 variable_initializer_list COMMA CloseBracket_T1
  ;
variable_initializer_list_opt
  : /* Nothing */
  | variable_initializer_list
  ;
variable_initializer_list
  : variable_initializer
  | variable_initializer_list COMMA variable_initializer
  ;

/***** C.2.9 Interfaces *****/
interface_declaration
  : attributes_opt modifiers_opt INTERFACE IDENTIFIER interface_base_opt interface_body comma_opt
  ;
interface_base_opt
  : /* Nothing */
  | interface_base
  ;
interface_base
  : Colon interface_type_list
  ;
interface_body
  : OpenBracket_T1 interface_member_declarations_opt CloseBracket_T1
  ;
interface_member_declarations_opt
  : /* Nothing */
  | interface_member_declarations
  ;
interface_member_declarations
  : interface_member_declaration
  | interface_member_declarations interface_member_declaration
  ;
interface_member_declaration
  : interface_method_declaration
  | interface_property_declaration
  | interface_event_declaration
  | interface_indexer_declaration
  ;
/* inline return_type to avoid conflict with interface_property_declaration */
interface_method_declaration
  : attributes_opt new_opt type IDENTIFIER OpenBracket formal_parameter_list_opt CloseBracket interface_empty_body
  | attributes_opt new_opt VOID{cout<<"yacc:void2"<<endl;} IDENTIFIER OpenBracket formal_parameter_list_opt CloseBracket interface_empty_body
  ;
new_opt
  : /* Nothing */
  | NEW
  ;
interface_property_declaration
  : attributes_opt new_opt type IDENTIFIER 
      ENTER_getset
    OpenBracket_T1 interface_accessors CloseBracket_T1
      EXIT_getset
  ;
interface_indexer_declaration
  : attributes_opt new_opt type THIS 
    LEFT_BRACKET formal_parameter_list RIGHT_BRACKET 
      ENTER_getset
    OpenBracket_T1 interface_accessors CloseBracket_T1
      EXIT_getset
  ;

interface_accessors
  : attributes_opt GET interface_empty_body
  | attributes_opt SET interface_empty_body
  | attributes_opt GET interface_empty_body attributes_opt SET interface_empty_body
  | attributes_opt SET interface_empty_body attributes_opt GET interface_empty_body
  ;
interface_event_declaration
  : attributes_opt new_opt EVENT type IDENTIFIER interface_empty_body
  ;

/* mono seems to allow this */
interface_empty_body
  : Semicolon{cout<<"yacc::Semicolon18"<<endl;}
  | OpenBracket_T1 CloseBracket_T1
  ;

/***** C.2.10 Enums *****/
enum_declaration
  : attributes_opt modifiers_opt ENUM IDENTIFIER enum_base_opt enum_body comma_opt
  ;
enum_base_opt
  : /* Nothing */
  | enum_base
  ;
enum_base
  : Colon integral_type
  ;
enum_body
  : OpenBracket_T1 enum_member_declarations_opt CloseBracket_T1
  | OpenBracket_T1 enum_member_declarations COMMA CloseBracket_T1
  ;
enum_member_declarations_opt
  : /* Nothing */
  | enum_member_declarations
  ;
enum_member_declarations
  : enum_member_declaration
  | enum_member_declarations COMMA enum_member_declaration
  ;
enum_member_declaration
  : attributes_opt IDENTIFIER
  | attributes_opt IDENTIFIER Equal{cout<<"yacc::equal3" << endl;} constant_expression
  ;

/***** C.2.11 Delegates *****/
delegate_declaration
  : attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER OpenBracket formal_parameter_list_opt CloseBracket Semicolon{cout<<"yacc::Semicolon19"<<endl;}
  ;

/***** C.2.12 Attributes *****/
attributes
  : attribute_sections
  ;
attribute_sections
  : attribute_section
  | attribute_sections attribute_section
  ;
attribute_section
  : ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list RIGHT_BRACKET EXIT_attrib
  | ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list COMMA RIGHT_BRACKET EXIT_attrib
  ;
attribute_target_specifier_opt
  : /* Nothing */
  | attribute_target_specifier
  ;
attribute_target_specifier
  : attribute_target Colon
  ;
attribute_target
  : ASSEMBLY
  | FIELD
  | EVENT
  | METHOD
  | MODULE
  | PARAM
  | PROPERTY
  | RETURN
  | TYPE
  ;
attribute_list
  : attribute
  | attribute_list COMMA attribute
  ;
attribute
  : attribute_name attribute_arguments_opt
  ;
attribute_arguments_opt
  : /* Nothing */
  | attribute_arguments
  ;
attribute_name
  : type_name
  ;
attribute_arguments
  : OpenBracket expression_list_opt CloseBracket
  ;



/** Dummy rules for those context-sensitive "keywords" **/
ENTER_attrib 
  : {} 
  ;
EXIT_attrib 
  : {}
  ;
ENTER_accessor_decl 
  :{} 
  ;
EXIT_accessor_decl
  :{} 
  ;
ENTER_getset
  :{} 
  ;
EXIT_getset
  : {}
  ;

%%



void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();
}
void main(void)
{
	yydebug = 1;
	freopen("code.txt","r",stdin);
   	freopen("out.txt","w",stdout);
	Parser* p = new Parser();
	p->parse();
}
