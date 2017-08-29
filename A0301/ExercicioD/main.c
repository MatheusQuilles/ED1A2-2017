/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5], b[5], c[10], i, contador = 0;

    for (i = 0; i < 5; i++) {
        printf("Informe o %d número para o vetor A: ",i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("Informe o %d número para o vetor B: ",i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            c[i] = a[i - contador];
            contador++;
        } else {
            c[i] = b[i / 2];
        }
    }

    printf("\nVetor C: ");
    for (i = 0; i < 10; i++) {
        printf("\n%d", c[i]);
    }

    return (EXIT_SUCCESS);
}