//
// Created by Pedro on 10/30/2021.
//

#include <stdlib.h>
#include <stdio.h>
#include "complexo.h"

//(a) criar um numero complexo ´
Complexo criarComplexo(float real, float imaginaria) {
    Complexo comp;
    comp.real = real;
    comp.imaginaria = imaginaria;
    return comp;
}

//(b) destruir um numero complexo ´
void destruirComplexo(Complexo *complexo) {
    free(complexo);
}

//(c) soma de dois numeros complexos; ´
Complexo somComplexos(Complexo comp1, Complexo comp2) {
    Complexo soma;
    soma.real = comp1.real + comp2.real;
    soma.imaginaria = comp1.imaginaria + comp2.imaginaria;
    return soma;
}

//(d) subtrac¸ao de dois n ˜ umeros complexos; ´
Complexo subComplexos(Complexo comp1, Complexo comp2) {
    Complexo subtracao;
    subtracao.real = comp1.real - comp2.real;
    subtracao.imaginaria = comp1.imaginaria - comp2.imaginaria;
    return subtracao;
}

//(e) mutiplicac¸ao de dois n ˜ umeros complexos; ´
Complexo multComplexos(Complexo comp1, Complexo comp2) {
    Complexo mult;
    mult.real = comp1.real * comp2.real;
    mult.imaginaria = comp1.imaginaria * comp2.imaginaria;
    return mult;
}

//(f) divisao de dois n ˜ umeros complexos;
Complexo divComplexos(Complexo comp1, Complexo comp2) {
    Complexo div;
    div.real = comp1.real / comp2.real;
    div.imaginaria = comp1.imaginaria / comp2.imaginaria;
    return div;
}

void printComplexo(Complexo complexo) {
    if (complexo.imaginaria < 0) {
        printf("%.1f - i%.1f", complexo.real, -complexo.imaginaria);
    } else {
        printf("%.1f + i%.1f", complexo.real, complexo.imaginaria);
    }
}