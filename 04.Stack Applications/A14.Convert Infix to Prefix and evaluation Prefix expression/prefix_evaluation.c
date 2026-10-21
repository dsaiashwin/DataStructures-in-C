/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement Prefix_Evaluation function
Sample Input : + – * 2 3 3 / / 8 4 + 1 1
Sample Output : 4
*/



#include "main.h"

int Prefix_Eval(char *prefix_exp, Stack_t *stk)
{
    int op1, op2, res, i = 0;
    
    while( prefix_exp[i] != '\0' )                              // Running a loop untill NULL
    {	
	    if( isdigit( prefix_exp[i] ))                           // Checking that element is digit or not
	    {
	        push( stk, (prefix_exp[i] - 48));                   // Push to operand to stack 
	    }                                                       // Operand - 48 type casting character to integer
	    else
	    {
	        op1 = pop(stk);                                     // Pop the element and store it as operand 1
	        
	        op2 = pop(stk);                                     // Pop the next element and store it as operand2
	        
	        switch( prefix_exp[i] )                             // Which operator occure go to that operation
	        {
		        case '+':
		            res = op1 + op2;                            // This case is for adding two element
		            break;
		        
		        
		        case '-':                                       // For subtraction
		            res = op1 - op2;
		            break;
		        
		        
		        case '*':                                       // Multiplication
 		            res = op1 * op2;
		            break;
		        
		        
		        case '/':                                       // For division
		            res = op1 / op2;
		            break;
	        }
	        push( stk, res );                                   // Push the result(output) into stack 
	    }
	    i++;
    }
    return pop(stk);                                            // Pop result and return to calling function
}
