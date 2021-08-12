#include <stdio.h>

#define TAM 5

int items[TAM];
int frente = -1, tras = -1;

int estaCheio(){
    if((frente == tras + 1) || frente == 0 && tras == TAM - 1)
        return 1;

    return 0;
}

int estaVazio(){

    if(frente == -1)
        return 1;

    return 0;
}

void enfileirar(int item){

    if(estaCheio())
        printf("A Fila está cheia!! \n");
    else {
        if(frente == -1)
            frente = 0;
        
        tras = (tras +1) % TAM;

        items[tras] = item;
        printf("Inserido -> %d \n", item);
    }
}

int desenfileirar(){
    int item;

    if(estaVazio()){
        printf("a Fila está vazia. \n");
        return (-1);
    } else {
        item = items[frente];
        if(frente == tras){
            frente = -1;
            tras = -1;
        } else {
            frente = (frente + 1) % TAM;
        }

        printf("\n Excluído item -> %d \n", item);
    }
}

void exibir(){
    int i;

    if (estaVazio())
        printf("\n A fila está vazia\n");
    else {
        printf("\n frente -> %d", frente);
        printf("\n items -> ");

        for (i =frente; i != tras; i =(i + 1) % TAM)
            printf("%d ", items[i]);

        printf("%d ", items[i]);
        printf("\n tras -> %d", tras);
    }
}


int main(void){
    desenfileirar();

    enfileirar(1);
    enfileirar(2);
    enfileirar(3);
    enfileirar(4);
    enfileirar(5);

    enfileirar(6);

    exibir();

    desenfileirar();
    
    exibir();

    enfileirar(7);
    exibir();
    
    return 0;
}
