/* pilha_publico.h */

typedef struct Stack *pPilha, **ppPilha;

//Cria uma pilha, com o tamanho por parametro
struct Stack* createStack(unsigned capacity);

// Função que empilha um item na pilha
void push(struct Stack* stack, int item);

// Função que desempilha um item da pilha
int pop(struct Stack* stack);

// Funcao que retorna o topo da pilha, sem remove-lo.
int top(struct Stack* stack);

