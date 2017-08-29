/* 
 * File:   main.c
 * Author: mquilles
 *
 * Created on 22 de Agosto de 2017, 16:51
 */
#include <stdio.h>
#include <stdlib.h>

int global1, global2, global3;

void main() {
    global1 = 1;
    global2 = 2;
    global3 = 3;
    processaNumero(global1, global2, &global3);
    printf("O Valor de global1 após processaNumeros é %d\n", global1);
    printf("O Valor de global2 após processaNumeros é %d\n", global2);
    printf("O Valor de global3 após processaNumeros é %d\n", global3);
}

void processaNumero(int num1, int num2, int *num3) {

    num1 = num1 * 10;
    num2 = num2 * 100;
    *num3 = (*num3) *1000;
    printf("Em processaNumero (global1 -> num1) vale %d\n", num1);
    printf("Em processaNumero (global2 -> num2) vale %d\n", num2);
    printf("Em processaNumero (global3 -> num3) vale %d\n", *num3);
}
