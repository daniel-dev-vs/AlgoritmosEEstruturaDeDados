#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int cont = 0;

struct pilha {
    int items[MAX];
    int topo;
};

typedef struct pilha pl;

void criarPilhaVazia(pl *p){
    p->topo = -1;
}

int estaCheio(pl *p){
    if(p->topo == MAX -1)
        return 1;
    else 
        return 0;
}

int estaVazio(pl *p){
    if(p->topo == -1)
        return 1;
    else
        return 0;
}

void push(pl *p, int novoItem){
    if(estaCheio(p)){
        printf("pilha CHEIA");
    } else {
        p->topo++;
        p->items[p->topo] = novoItem;
    }

    cont++;
}

void pop(pl *p){
    if(estaVazio(p)){
        printf("\n pilha VAZIA \n");
    } else {
        printf("Item removido= %d \n", p->items[p->topo]);
        p->topo--;
    }

    cont--;
}

void printPilha(pl *p){
    printf("pilha: ");
    for (int i =0; i < cont; i++){
        printf("%d ", p->items[i]);
    }
    printf("\n");
}

int main(){
    int ch;
    pl *p = (pl *)malloc(sizeof(pl));

    criarPilhaVazia(p);

    push(p,1);
    push(p,2);
    push(p,3);
    push(p,4);

    printPilha(p);

    pop(p);

    printPilha(p);
}
