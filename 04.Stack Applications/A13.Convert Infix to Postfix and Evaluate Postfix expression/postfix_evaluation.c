#include "main.h"

int Postfix_Eval(char *Postfix_exp, Stack_t *stk)
{
    int j=0;
    int res;
    while ( Postfix_exp[j] != '\0' )
    {
        
        if( (Postfix_exp[j] >= '0') && (Postfix_exp[j] <= '9') )
              push(stk, Postfix_exp[j] - '0');
        else //-> operators
        {
            if (stk->top < 1) 
            {
            printf("Error: Insufficient operands for operator '%c'\n", Postfix_exp[j]);
            return -1;
            }

            //pop 2 operands
            int op2 = peek(stk);
            pop(stk);
            
            int op1 = peek(stk);
            pop(stk);
            //do the operation
            switch(Postfix_exp[j])
            {
          
                case '+' : 
                            res = op1+op2;
                            break;
                            
                case '-' : 
                            res = op1-op2;
                            break;
                
                case '*' : 
                            res = op1*op2;
                            break;
                            
                case '/' : 
                            res = op1/op2;
                            break;
                default :
                            printf("Invalid Operator\n");
                            break;
                
            }
            push(stk,res);
        }
    j++;
    }
    return peek(stk);
}
