#include <stdio.h>
#include "complexo.h"

int main() {
    Complexo comp1 = criarComplexo(1.3, 1.5);
    printf("Comp1 = ");
    printComplexo(comp1);
    Complexo comp2 = criarComplexo(2, 10);
    printf("\nComp2 = ");
    printComplexo(comp2);
    Complexo soma = somComplexos(comp1, comp2);
    printf("\nSoma = ");
    printComplexo(soma);
    Complexo dif = subComplexos(comp1, comp2);
    printf("\nDiferenca = ");
    printComplexo(dif);
    Complexo mult = multComplexos(comp1, comp2);
    printf("\nMult = ");
    printComplexo(mult);
    Complexo div = divComplexos(comp1, comp2);
    printf("\nDiv = ");
    printComplexo(div);
}
