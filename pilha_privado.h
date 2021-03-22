/* pilha_privado.h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilha_interface.h"
struct Stack {
    int top;
    unsigned capacity;
    int* array;
}; 