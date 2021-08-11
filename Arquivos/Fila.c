#include <stdio.h>
#include <stdlib.h>

#define MAX 10


struct fila {
    int frente;
    int tras;
    int items[MAX];
};

typedef struct fila fl;

void criarFila(fl *f){
    f->frente = -1;
    f->tras = -1;
}

int verificarSeEstaCheio(fl *f){
    if(f->tras == MAX - 1){
        printf("A fila está cheia.\n");
        return 1;
    }

    return 0;
}

int verificarSeEstaVazio(fl *f){
    if(f->tras == -1){
        printf("A fila está vazia.\n");
        return 1;
    }
    return 0;
}

void adicionarItem(fl *f, int item){
    if(verificarSeEstaCheio(f)){
        printf("Tente esvaziar antes de adicionar um item.\n");
    }else{
        printf("adicionando %d a fila.\n", item);
        
        if(f->frente == -1)
            f->frente = 0;

        f->tras++;
        f->items[f->tras] = item;
    }
}

void removerItem(fl *f){
    if(verificarSeEstaVazio(f)){
        printf("impossível esvaziar uma lista que não tem items, adicione algum item para esvaziar\n");
    }else{
        printf("removendo item :%d\n", f->items[f->frente]);
        f->frente++;
        if(f->frente == f->tras){
            f->frente = -1;
            f->tras = -1;
        }
    }
}

int pegarItem(fl *f){
    int item = f->items[f->frente];
    printf("pegando item: %d\n", item);
    return item;
}

void mostrarPrimeiroItem(int item){
     printf("mostrando item: %d\n", item);
}

void mostrarTodosOsitens(fl *f){
    if(verificarSeEstaVazio(f)){}
    else{
    int i;
    for(i= f->frente; i < f->tras; i++)
        printf("item %d -", f->items[i]);
    }
    
    

    printf("\n");
}

int main(void) {

     fl *f = (fl *)malloc(sizeof(fl));
    
    criarFila(f);

    adicionarItem(f,1);

    pegarItem(f);

    adicionarItem(f,2);
    adicionarItem(f,3);
    adicionarItem(f,4);
    adicionarItem(f,5);
    adicionarItem(f,6);
    adicionarItem(f,7);
    adicionarItem(f,8);
    adicionarItem(f,9);
    adicionarItem(f,10);
    adicionarItem(f,10);
    adicionarItem(f,11);
    mostrarTodosOsitens(f);
    pegarItem(f);

    removerItem(f);
    pegarItem(f);

    mostrarTodosOsitens(f);
    return 0;
}