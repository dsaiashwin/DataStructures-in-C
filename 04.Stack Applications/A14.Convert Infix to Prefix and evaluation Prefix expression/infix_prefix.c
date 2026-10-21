/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement infix_prefix conversion function
Sample Input : 2 * 3 – 3 + 8 / 4 / (1 + 1)
Sample Output : +, -, *, 2, 30, 3, /, /, 8, 4, +, 10, 1
*/



#include "main.h"

int Infix_Prefix_conversion(char *Infix_exp, char *Prefix_exp, Stack_t *stk)
{

    int i = 0,j = 0;
    
    stk = malloc(sizeof(Stack_t));                      // Creating a new memory for stack using malloc

    for( i = 0; Infix_exp[i] != '\0'; i++ )             // Running a loop Untill NULL
    {
	    if(Infix_exp[i] >= 'A' && Infix_exp[i] <= 'Z' || Infix_exp[i] >= 'a' && Infix_exp[i] <= 'z' || Infix_exp[i] >= 48 && Infix_exp[i] <= 57)    // Checking if element is operand or not
	    { 
	        Prefix_exp[j] = Infix_exp[i];              // Storing infix to prefixfix array
	        
	        j++;
	    }
	    else if( Infix_exp[i] == '*' || Infix_exp[i] == '/' || Infix_exp[i] == '+' || Infix_exp[i] == '-' || Infix_exp[i] == '^'  )     // Checking if element is operator or not
	    {
	        while( stk -> top != -1 && stk -> stack[stk -> top] != ')' && priority(Infix_exp[i]) < priority(stk -> stack[stk -> top]))
	        {                              
		        Prefix_exp[j] = pop(stk);               // check precedance of infix operator and stack operator and pop to prefix 
		  
		        j++;
	        }
	        push(stk, Infix_exp[i]);  
	    }
	    else if( Infix_exp[i] == ')' )
	    {
	        push(stk, Infix_exp[i]);                    // Push to open bracket into stack
        }
	    else
	    {
	        while( stk -> stack[stk -> top] != ')' )   // If close bracket occure, the running a loop untill open bracket
	        {
		        Prefix_exp[j] = pop(stk);               // Pop the operator and stored to prefix 
		
		        j++;
	        }
	        pop(stk);                                   // Pop the open bracket
	    }
    }
    while( stk -> top != -1 )                           // Running a loop untill NULL
    {
	    Prefix_exp[j] = pop(stk);                       // Pop all remainder and all operator and store it to prefix expression
	    
	    j++;
    }

}
