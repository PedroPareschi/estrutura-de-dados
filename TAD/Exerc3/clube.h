//
// Created by Pedro on 10/30/2021.
//

#ifndef EXERC3_QUADRA_H
#define EXERC3_QUADRA_H

#endif //EXERC3_QUADRA_H

typedef struct {
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
} Reserva;

typedef struct {
    char *nome;
    int _len;
    int _cap;
    Reserva *reservas;
} Quadra;

Quadra criarQuadra(char *nome, int cap);
void marcarReserva(Quadra *quadra, int dia, int mes, int ano, int hora, int minuto);
void destruirQuadra(Quadra quadra);
void imprimirQuadra(Quadra quadra);