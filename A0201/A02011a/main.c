/* 
 * File:   main.c
 * Author: mathe
 *
 * Created on 22 de Agosto de 2017, 19:28
 */

#include <stdio.h>
#include <stdlib.h>
int global1, global2, global3;

/*
 * 
 */
void main() {
    printf("A soma de 10 com 20 é: %d \n", soma(10, 20));
    global1 = 100;
    global2 = 200;
    printf("A soma de 100 com 200 é: %d \n", soma(global1, global2));
    global3 = soma(1000, 2000);
    printf("A soma de 1000 com 2000 é: %d \n", global3);
}

int soma(int num1, int num2) {
    int r;
    r = num1 + num2;
    return r;
}
