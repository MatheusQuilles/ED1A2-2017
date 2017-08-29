/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomes[10][50];
    char end[10][50];
    int i, numeroero = 1;

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº nome: ", i + 1);
        gets(nomes[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Insira o %dº endereço: ", i + 1);
        gets(end[i]);
    }

    while ((numeroero >= 1) && (numeroero <= 10)) {
        printf("\nInsira um número para busca: ");
        scanf("%d", &numeroero);

        while ((numeroero < 1) || (numeroero > 10)) {
            printf("\n Tente novamente! Valor de busca inválido!");
            printf("\nInsira um número para busca: ");
            scanf("%d", &numeroero);
        }

        printf("Nome: %s. Endereço: %s", nomes[numeroero-1], end[numeroero-1]);
    }

    return (EXIT_SUCCESS);
}

