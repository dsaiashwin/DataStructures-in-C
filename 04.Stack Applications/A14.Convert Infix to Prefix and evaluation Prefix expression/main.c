/*
Name : Sai Ashwin D
Date : 05 - 09 - 2025
Description : Implement infix_prefix conversion function

*/


#include "main.h"


void strrev(char *string)
{
    char ch;
    
    int len = strlen(string);
    
    for( int i = 0; i < len/2; i++ )
    {
	    ch =  string[i];
	    
	    string[i] = string[len-1-i];
	    
	    string[len-1-i] = ch;
    }
}



int main()
{
    char Infix_exp[50], Prefix_exp[50], ch;                     // Declared the char arrya
    
    int choice, result; 
    
    Stack_t stk;
    
    stk.top = -1;

    printf("Enter the Infix expression : ");
    scanf("%s", Infix_exp);                                     // Getting the Infix expression from user

    
    strrev(Infix_exp);                                          // Function calling with infix expression as argument
    
    
    Infix_Prefix_conversion(Infix_exp, Prefix_exp, &stk);       // Function calling for Infix prefix conversion
    
    strrev(Prefix_exp);                                         // Function calling with prefix expression as argument
    
    
    printf("PreFix expression : %s\n", Prefix_exp);             // printing the prefix expression


    stk.top = -1;

    strrev(Prefix_exp);
    
    result = Prefix_Eval(Prefix_exp, &stk);
    
    printf("\nResult : %d\n", result);                          // printing the final result
    
    return 0;
}
