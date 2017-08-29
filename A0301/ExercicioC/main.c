/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, contador, npar, nimpar, cont = 0;

    while ((cont < 11)&&(numero != -1)) {
        printf("Informe um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            npar = npar + 1;
        } else {
            nimpar = nimpar + 1;
        }
        cont = cont + 1;
    }

    printf("Foram informados %d números. Dos quais %d são impares e %d são pares!\n", contador,nimpar,npar);

    return(EXIT_SUCCESS);
}

