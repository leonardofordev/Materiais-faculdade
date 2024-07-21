/*Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada 
entre os valores, sabendo-se que os pesos são respectivamente 1, 2, 3 e 4. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float Va, Vb, Vc, Vd;
    
    scanf("%f", &Va);
    scanf("%f", &Vb);
    scanf("%f", &Vc);
    scanf("%f", &Vd);

    float media = (Va * 1 + Vb * 2 + Vc * 3 + Vd * 4)/10.0;

    printf("Media: %.2f", media);


    return 0;
}