//um algoritmo que leia uma variável inteira X e imprima seu sucessore seu antecessor.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int val, suc, ant;
    
    scanf("%d", &val);
    
    suc = val + 1;
    ant = val - 1;

    printf("Valor digitado: %d\n", val);
    printf("Sucessor: %d\n", suc);
    printf("Antecessor: %d\n", ant);

    return 0;
}