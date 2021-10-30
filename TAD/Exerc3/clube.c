//
// Created by Pedro on 10/30/2021.
//

#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "clube.h"

Quadra criarQuadra(char *nome, int cap) {
    Quadra quadra;
    quadra.nome = (char *) malloc(sizeof(char) * strlen(nome));
    strcpy(quadra.nome, nome);
    quadra._len = 0;
    quadra._cap = cap;
    quadra.reservas = (Reserva *) malloc(sizeof(Reserva) * quadra._cap);
    return quadra;
}

void marcarReserva(Quadra *quadra, int dia, int mes, int ano, int hora, int minuto) {
    if (quadra->_len == quadra->_cap) {
        quadra->_cap *= 2;
        Reserva *new_reservas = malloc(quadra->_cap * sizeof(Reserva));
        for (int i = 0; i < quadra->_len; i++)
            new_reservas[i] = quadra->reservas[i];
        free(quadra->reservas);
        quadra->reservas = new_reservas;
    }
    int pos = quadra->_len;
    quadra->reservas[pos].dia = dia;
    quadra->reservas[pos].mes = mes;
    quadra->reservas[pos].ano = ano;
    quadra->reservas[pos].hora = hora;
    quadra->reservas[pos].minuto = minuto;
    quadra->_len++;
}

void imprimirQuadra(Quadra quadra) {
    printf("Quadra=%s\n", quadra.nome);
    printf("Reservas={\n");
    for (int i = 0; i < quadra._len; i++) {
        printf("\t%d/%d/%d %02d:%02d\n", quadra.reservas[i].dia, quadra.reservas[i].mes,
               quadra.reservas[i].ano, quadra.reservas[i].hora,
               quadra.reservas[i].minuto);
    }
    printf("}");
}


