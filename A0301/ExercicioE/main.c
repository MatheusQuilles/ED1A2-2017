/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m[5][5];
    float c[5];
    float l[5];
    int i, j, somal, somac;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor para a %dª linha e %dª coluna: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);

            somal = 0;
            somal = somal + m[i][j];
            l[i] = l[i] + somal;

            somac = 0;
            somac = somac + m[i][j];
            c[j] = c[j] + somac;
        }
    }

    printf("\n Matriz digitada:");
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf(" %d ", m[i][j]);
        }
    }

    printf("\n");
    printf("\n Soma de cada linha:");
    for (i = 0; i < 5; i++) {
        printf("\n%0.1f", l[i]);
    }

    printf("\n");
    printf("\n Soma de cada ccoluna:");
    for (j = 0; j < 5; j++) {
        printf("\n%0.1f", c[j]);
    }

    return (EXIT_SUCCESS);
}

