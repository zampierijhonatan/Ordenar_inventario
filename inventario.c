#include <stdio.h>
#include <stdlib.h>

void shellSort(int array[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

int main() {
    int n;
    printf("\n");
    printf("--- Modo de Entrada Rapida ---\n");
    printf("1. Informe a quantidade total de itens: ");
    if (scanf("%d", &n) != 1) return 1;

    int *inventario = (int *)malloc(n * sizeof(int));

    printf("2. Cole ou digite todos os %d codigos separados por espaco e aperte Enter: \n", n);
    
    // O loop continua existindo, mas sem o printf interno, 
    // ele consome todos os numeros da linha de uma vez.
    for (int i = 0; i < n; i++) {
        scanf("%d", &inventario[i]);
    }

    printf("\nProcessando Shellsort...\n");
    shellSort(inventario, n);

    printf("\nInventario Organizado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", inventario[i]);
    }
    
    printf("\n\nConcluido com sucesso.\n");

    free(inventario);
    return 0;
}