/* parser for aLoT */
%{
#include <stdio.h>
int yylex(); // avoid implicit declaration warning
void yyerror(char *); // avoid implicit declaration warning
%}

%token COLON
%token SEMICOLON
%token LP
%token RP
%token COMMA
%token LB
%token RB
%token TILDA
%token LSB
%token RSB
%token ASSIGN_OP
%token INCREMENT_OP
%token DECREMENT_OP
%token ADDITION_OP
%token SUBTRACTION_OP
%token MULTIPLICATION_OP
%token DIVISION_OP
%token MOD_OP
%token AND_OP
%token OR_OP
%token XOR_OP
%token NOT_OP
%nonassoc EQUAL_OP NOT_EQUAL_OP LESS_THAN_OP LESS_THAN_EQUAL_OP GREATER_THAN_OP GREATER_THAN_EQUAL_OP
%token MAIN
%token FN
%token CONST
%token FOR
%token WHILE
%token IF
%token ELSE
%token BREAK
%token RETURN
%token ON
%token OFF
%token READ
%token WRITE
%token TIMER
%token CONNECTED_DEV
%token TEMPERATURE
%token HUMIDITY
%token AIRPRESSURE
%token AIRQUALITY
%token LIGHT
%token SOUND
%token SW1
%token SW2
%token SW3
%token SW4
%token SW5
%token SW6
%token SW7
%token SW8
%token SW9
%token SW10
%token BOOLEAN
%token FLOAT
%token INTEGER
%token STRING
%token IDENTIFIER

%%

program: function_definitions main_procedure

main_procedure: MAIN COLON compound_statement

function_definitions: /* empty */
	| function_definitions function_definition

function_definition: FN IDENTIFIER LP parameter_list RP compound_statement

parameter_list: /* empty */
	| non_empty_parameter_list

non_empty_parameter_list: parameter
	| non_empty_parameter_list COMMA parameter

parameter: IDENTIFIER
	| error

compound_statement: LB statement_list RB

statement_list: /* empty */
	| statement_list statement

statement: SEMICOLON
	| connection_statement SEMICOLON
	| switch_statement SEMICOLON
	| read_statement SEMICOLON
	| write_statement SEMICOLON
	| const_declaration_statement SEMICOLON
	| assignment_statement SEMICOLON
	| conditional_statement
	| loop_statement
	| return_statement SEMICOLON
	| break_statement SEMICOLON
	| expression SEMICOLON

connection_statement: IDENTIFIER TILDA STRING
	| IDENTIFIER TILDA IDENTIFIER

switch_statement: switch_type COLON ON
	| switch_type COLON OFF

switch_type: SW1
	| SW2
	| SW3
	| SW4
	| SW5
	| SW6
	| SW7
	| SW8
	| SW9
	| SW10

read_statement: IDENTIFIER READ sensor_type
	| IDENTIFIER READ TIMER
	| IDENTIFIER READ connected_device

sensor_type: TEMPERATURE
	| HUMIDITY
	| AIRPRESSURE
	| AIRQUALITY
	| LIGHT
	| SOUND

connected_device: CONNECTED_DEV LSB IDENTIFIER RSB

write_statement: IDENTIFIER WRITE connected_device
	| INTEGER WRITE connected_device

const_declaration_statement: CONST IDENTIFIER ASSIGN_OP expression

assignment_statement: IDENTIFIER ASSIGN_OP expression
	| increment_statement
	| decrement_statement

increment_statement: IDENTIFIER INCREMENT_OP
	| INCREMENT_OP IDENTIFIER

decrement_statement: IDENTIFIER DECREMENT_OP
	| DECREMENT_OP IDENTIFIER

conditional_statement: IF LP expression RP compound_statement
	| IF LP expression RP compound_statement ELSE compound_statement

loop_statement: while_loop
	| for_loop

while_loop: WHILE LP expression RP compound_statement
for_loop: FOR LP assignment_statement SEMICOLON expression SEMICOLON assignment_statement RP compound_statement

return_statement: RETURN expression

break_statement: BREAK

expression: or_expression
	| error

or_expression: and_expression
	| or_expression OR_OP and_expression

and_expression: xor_expression
	| and_expression AND_OP xor_expression

xor_expression: compare_expression
	| xor_expression XOR_OP compare_expression

compare_expression: additive_expression
	| additive_expression EQUAL_OP additive_expression
	| additive_expression NOT_EQUAL_OP additive_expression
	| additive_expression LESS_THAN_OP additive_expression
	| additive_expression LESS_THAN_EQUAL_OP additive_expression
	| additive_expression GREATER_THAN_OP additive_expression
	| additive_expression GREATER_THAN_EQUAL_OP additive_expression

additive_expression: multiplicative_expression
	| additive_expression ADDITION_OP multiplicative_expression
	| additive_expression SUBTRACTION_OP multiplicative_expression

multiplicative_expression: not_expression
	| multiplicative_expression MULTIPLICATION_OP not_expression
	| multiplicative_expression DIVISION_OP not_expression
	| multiplicative_expression MOD_OP not_expression

not_expression: term
	| NOT_OP term

term: LP expression RP
	| BOOLEAN
	| IDENTIFIER
	| STRING
	| number
	| function_call

number: INTEGER
	| FLOAT

function_call: IDENTIFIER LP argument_list RP

argument_list: /* empty */
	| non_empty_argument_list

non_empty_argument_list: expression
	| non_empty_argument_list COMMA expression

%%
int lineno = 1;

void yyerror(char *str) { fprintf(stderr, "Syntax error on line %d!\n", lineno); }

int main(){
	int result = yyparse();
	if(yynerrs == 0){
		printf("Input program is valid\n");
	}

	return result;
}
