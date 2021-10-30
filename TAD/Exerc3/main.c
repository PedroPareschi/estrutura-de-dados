#include <stdio.h>
#include "clube.h"

int main() {
    Quadra quadra = criarQuadra("Futebol", 2);
    marcarReserva(&quadra, 15, 11, 2021, 16, 30);
    marcarReserva(&quadra, 12, 12, 2021, 13, 40);
    imprimirQuadra(quadra);
    return 0;
}
