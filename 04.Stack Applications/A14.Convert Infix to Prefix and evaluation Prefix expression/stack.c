#include "main.h"

void push(Stack_t *stk, int data)                       // This operation is for push
{
    ++(stk -> top);
    
    stk -> stack[stk -> top] = data;
}

char pop(Stack_t *stk)                                  // This operation is for pop
{
    char x;
    if (stk -> top != -1)
    {
	    x = stk -> stack[stk -> top];
	    --(stk -> top);
    }
    return x;
}



int peek(Stack_t *stk)                                  // This operation is for peek
{
    if (stk -> top != -1)
    {
	    return stk -> stack[stk -> top];
    }
    return -1;
}


int priority(char opr)
{
    switch(opr)
    {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}
