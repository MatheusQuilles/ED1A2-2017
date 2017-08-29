/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 28 de Agosto de 2017, 20:10
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main() {
    int m1[3][3], m2[3][3], m3[3][3];
    int i, j, op;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Informe um numero na matriz 1, para linha [%d] e coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Informe um numero na matria 2, para linha [%d] e coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    printf("Escolha uma operação (1: + |2: * |3: - |4: /): \n");
    scanf("%d", &op);

    if (op == 1) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }

    } else {
        if (op == 2) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    m3[i][j] = m1[i][j] * m2[i][j];
                }
            }

        } else {
            if (op == 3) {
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        m3[i][j] = m1[i][j] - m2[i][j];
                    }
                }

            } else {
                if (op == 4) {
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 3; j++) {
                            m3[i][j] = m1[i][j] / m2[i][j];
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("O resultado da operacao é: %d \n", m3[i][j]);
        }

        printf("\n");
    }

    return 0;
}

