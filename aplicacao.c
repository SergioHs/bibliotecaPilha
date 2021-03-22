#include <stdio.h>
#include <stdlib.h>
#include "pilha_interface.h"

int main()
{
    struct Stack* stack = createStack(100);
 
    push(stack, 100);
    push(stack, 20);
    push(stack, 30);
    push(stack, 600);
    push(stack, 90);
    push(stack, 30);
 
    printf("%d desempilhado\n", pop(stack));
    printf("%d desempilhado\n", pop(stack));
    printf("%d desempilhado\n", pop(stack));

    printf("Item no topo: %d \n", top(stack));

    return 0;
}