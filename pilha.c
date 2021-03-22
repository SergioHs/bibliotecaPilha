/* pilha.c */
#include <stdio.h>
#include <stdlib.h>

#include "pilha_privado.h"
#include "pilha_interface.h"

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
//Função de validação 
int estaCheio(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

//Função de validação
int estaVazio(struct Stack* stack)
{
    return stack->top == -1;
}

// Função que adiciona um item na pilha
void push(struct Stack* stack, int item)
{
    if (estaCheio(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d empilhado\n", item);
}
 
// Função que desempilha um item da pilha
int pop(struct Stack* stack)
{
    if (estaVazio(stack))
        return 0;
    return stack->array[stack->top--];
}
 
// Funcao que retorna o topo da pilha, sem remove-lo.
int top(struct Stack* stack)
{
    if (estaVazio(stack))
        return 0;
    return stack->array[stack->top];
}