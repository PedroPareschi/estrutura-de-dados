#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void exerc1() {
    int *array = (int *) malloc(5 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n\n\n");
    for (i = 0; i < 5; i++) {
        printf("[%d]: %d\n", i, array[i]);
    }
    free(array);
}

void exerc2() {
    int tam;
    printf("Digite a capacidade do vetor: ");
    scanf("%d", &tam);
    int *array = (int *) malloc(tam * sizeof(int));
    int i;
    for (i = 0; i < tam; i++) {
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n\n\n");
    for (i = 0; i < tam; i++) {
        printf("[%d]: %d\n", i, array[i]);
    }
    free(array);
}

void exerc3() {
    int tam;
    printf("Digite a capacidade do vetor: ");
    scanf("%d", &tam);
    int *array = (int *) malloc(tam * sizeof(int));
    int i;
    int pares = 0;
    for (i = 0; i < tam; i++) {
        printf("Digite o valor [%d]: ", i);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            pares++;
        }
    }
    printf("\n\n\n");
    printf("Quantidade de pares = %d\n", pares);
    printf("Quantiadade de impares = %d", tam - pares);
    free(array);
}

_Bool isVowel(char letter);

void exerc4() {
    int tam;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    char *string = (char *) malloc(tam * sizeof(char));
    printf("Digite a string: ");
    fflush(stdin);
    gets(string);
    int i, j = 0;
    char *newString = (char *) malloc(tam * sizeof(char));
    for (i = 0; i < tam; i++) {
        if (!isVowel(string[i])) {
            newString[j] = string[i];
            j++;
        }
    }
    newString = (char *) realloc(newString, j);
    printf("String sem vogais = %s\n", newString);
    free(string);
    free(newString);
}

_Bool isVowel(char letter) {
    letter = (char) toupper(letter);
    if (letter == 'A' || letter == 'E' ||
        letter == 'I' || letter == 'O' || letter == 'U') {
        return 1;
    }
    return 0;
}

void exerc8() {
    int* vetor = (int *) calloc(1500, sizeof(int));
    int i, count=0;
    for (i = 0; i < 1500; i++) {
        if(vetor[i] == 0){
            count++;
        }
    }
    printf("Quantidade de zeros no vetor = %d\n\n", count);
    for (i = 0; i < 1500; i++) {
        vetor[i] = i;
        if(i < 10 || i >= 1490){
            printf("vetor[%d] = %d\n", i, vetor[i]);
        }
    }
    free(vetor);
}

int main() {
    exerc8();
    return 0;
}
