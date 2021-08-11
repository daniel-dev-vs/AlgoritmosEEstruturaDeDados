#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define TRASEIRA -1


struct fila {
    int frente;
    int tras;
};

typedef struct fila fl;

void criarFila(fl *f){
    f->frente = -1;
    f->tras = -1;
}

void verificarSeEstaCheio(fl *f){
    if(f->frente == MAX){
        printf("A fila está cheia.");
        return;
    }        
}

void verificarSeEstaVazio(fl *f){
    if(f->tras == -1)
}

int main(void) {




    return 0;
}