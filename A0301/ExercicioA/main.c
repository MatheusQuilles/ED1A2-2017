/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char vet[10];
    int contador;

    for (contador = 0; contador <= 9; contador++) {
        printf("Informe um nome: ");
        gets(vet[contador]);
    }

    for (contador = 0; contador <= 9; contador++) {
        printf("\n O nome armazenado na primeira posição %d é: %c\n", contador, vet[contador]);
    }

    return 0;
}

