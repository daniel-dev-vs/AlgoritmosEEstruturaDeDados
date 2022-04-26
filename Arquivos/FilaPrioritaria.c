#include <stdio.h>

int tam = 0;

void trocar(int *a, int *b)
{

    int temp = *b;

    *b = *a;
    *a = temp;
}

void heapify(int array[], int tam, int i)
{
    if (tam == 1)
    {
        printf("Só existe um elemento no heap.");
    }
    else
    {
        int maior = i;

        int d = 2 * i + 1;
        int e = 2 * i + 2;

        if (e < tam && array[e] > array[maior])
            maior = e;

        if (d < tam && array[d] > array[maior])
            maior = d;

        if (maior != i)
        {
            trocar(&array[i], &array[maior]);
            heapify(array, tam, maior);
        }
    }
}

void inserir(int array[], int novo)
{
    if (tam == 0)
    {
        array[0] = novo;
        tam += 1;
    }
    else
    {
        array[tam] = novo;
        tam += 1;
        for (int i = tam / 2 - 1; i >= 0; i--)
        {
            heapify(array, tam, i);
        }
    }
}

void deletarRaiz(int array[], int num)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        if (num == array[i])
            break;
    }

    trocar(&array[i], &array[tam - 1]);
    tam -= 1;
    for (int i = tam / 2 - 1; i >= 0; i--)
    {
        heapify(array, tam, i);
    }
}

void mostrarArray(int array[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main(void)
{

    int array[10];

    inserir(array, 3);
    inserir(array, 4);
    inserir(array, 9);
    inserir(array, 5);
    inserir(array, 2);

    printf("Max-Heap array: ");
    mostrarArray(array, tam);

    deletarRaiz(array, 4);

    printf("After deleting an element: ");

    mostrarArray(array, tam);
    inserir(array, 4);
    inserir(array, 1);
    inserir(array, 7);
    inserir(array, 17);
    inserir(array, 16);

    mostrarArray(array, tam);

    return 0;
}