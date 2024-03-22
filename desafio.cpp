#include <stdio.h>

int main() {
    // 1. Declare três arrays de números inteiros
    int array1[] = {1, 2, 3, 4, 5};
    int array2[5];
    int array3[5];

    // 2. Leia e imprima na tela os valores do array1
    printf("Array1: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    // 3. Use scanf para ler mais 5 elementos que o usuário irá digitar e armazená-los no array2
    printf("Digite mais 5 elementos para o Array2:\n");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &array2[i]);
    }

    // 4. Insira um novo elemento com o número 999 em um dos arrays (escolha um dos arrays para fazer isso)
    array1[5] = 999; // Insere o elemento 999 no array1

    // 5. Imprima todos os elementos dos três arrays na tela
    printf("Array1: ");
    for (int i = 0; i < 6; ++i) { // Usamos 6 aqui para incluir o novo elemento inserido
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array2: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    printf("Array3: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}