#include "main.h"

int Infix_Postfix_conversion(char *Infix_exp, char *Postfix_exp, Stack_t *stk)
{
	int i = 0;  // index for reading characters from infix expression
	int j = 0;  // index for writing characters to postfix expression

    while (Infix_exp[i])
    {
        if ( (Infix_exp[i] >= '0') && (Infix_exp[i] <= '9'))    // If the character is an operand
        {
            Postfix_exp[j] = Infix_exp[i];
            j = j + 1;
        }
        else if (Infix_exp[i] == '(')   // If it's an opening parenthesis, push it to the stack
        {
            push(stk, Infix_exp[i]);
        }
        else if(Infix_exp[i] == ')')
        {
            while (stk -> stack[stk -> top]  != '(')     // If it's a closing parenthesis, pop until matching '(' is found
            {
            Postfix_exp[j] = peek(stk);
            pop(stk);
            j = j + 1;
            }
            pop(stk);
        }
        else    // If it's an operator (+, -, *, /)
        {
        
            while (stk -> top != -1 && stk -> stack[stk -> top] != '(' && priority(Infix_exp[i]) <= priority(stk -> stack[stk -> top]))
            {
                Postfix_exp[j] = peek(stk);
                pop(stk);
                j = j + 1;
            }
        push(stk, Infix_exp[i]);
        }
        i = i + 1;
    }
    while (stk -> top != -1)
    {
        Postfix_exp[j] = peek(stk);
        pop(stk);
        j = j + 1;
    }
    Postfix_exp[j] = '\0';
    return 1;
    
}
