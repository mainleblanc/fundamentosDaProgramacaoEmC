#include <stdio.h>

/*19. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
○ A = (basemaior + basemenor) * altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

int main(){

    float area, baseMaior, baseMenor, altura;

    printf("Insira as bases do trapezio: ");
    scanf("%f %f %f",&baseMaior, &baseMenor, &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    if(baseMaior > 0 && baseMenor > 0){

        printf("\nArea do trapezio: %.1f\n", area);

    }else{

        printf("\nOs valores da base devem ser maiores que 0\n");

    }

    return 0;
}
