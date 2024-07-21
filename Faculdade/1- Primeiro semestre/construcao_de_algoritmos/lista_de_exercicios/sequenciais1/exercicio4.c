/*
Escreva um algoritmo que receba um número real e imprima o “número”, o “quadrado” e a “raiz quadrada” desse número.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int numero, quadrado, raizQuadrada;
    scanf("%d", &numero);
    
    quadrado = numero * numero;
    raizQuadrada = sqrt(numero);

    printf("Numero digitado: %d\n", numero); 
    printf("Numero ao quadrado: %d\n", quadrado);
    printf("Raiz quadrada do numero: %d\n", raizQuadrada); 
    return 0;
}