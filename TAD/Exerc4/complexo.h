//
// Created by Pedro on 10/30/2021.
//

#ifndef EXERC4_COMPLEX_H
#define EXERC4_COMPLEX_H

#endif //EXERC4_COMPLEX_H

typedef struct {
    float real;
    float imaginaria;
} Complexo;

//(a) criar um numero complexo ´
Complexo criarComplexo(float real, float imaginaria);

//(b) destruir um numero complexo ´
void destruirComplexo(Complexo *complexo);

//(c) soma de dois numeros complexos; ´
Complexo somComplexos(Complexo comp1, Complexo comp2);

//(d) subtrac¸ao de dois n ˜ umeros complexos; ´
Complexo subComplexos(Complexo comp1, Complexo comp2);

//(e) mutiplicac¸ao de dois n ˜ umeros complexos; ´
Complexo multComplexos(Complexo comp1, Complexo comp2);

//(f) divisao de dois n ˜ umeros complexos;
Complexo divComplexos(Complexo comp1, Complexo comp2);

void printComplexo(Complexo complexo);

