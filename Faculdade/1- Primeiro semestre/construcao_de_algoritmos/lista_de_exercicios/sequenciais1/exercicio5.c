/*
Escreva um algoritmo que receba a base e a altura de um retângulo e imprimas as seguintes saídas:

a)    Perímetro
b)    Área
c)    Diagonal
*/

#include <stdio.h>
#include <math.h>

int main(){
    float b,h;
    
    scanf("%f", &b);
    scanf("%f", &h);

    float perimetro = 2 * (b + h);
    float area = b * h;
    float diagonal = sqrt(b * b + h * h);
    
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}