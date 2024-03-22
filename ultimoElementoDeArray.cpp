#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    //printf("Tamanho array: %zu \nTamanho do array[0]: %zu \n", sizeof(array), sizeof(array[0]));
    int tamanho = sizeof(array) / sizeof(array[0]);
    printf("Tamanho do array: %d\n", tamanho);
    return 0;
}
