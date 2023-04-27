#include <stdio.h>

/*22. Dados tr�s valores, A, B, C, verificar se eles podem ser valores dos lados de um tri�ngulo e, se
forem, se � um tri�ngulo escaleno, equil�tero ou is�scele.*/

int main(){

    float ladoA, ladoB, ladoC;

    printf("Insira os lados do triangulo: ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    if(ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB){

        if(ladoA == ladoB && ladoB == ladoC){

            printf("Triangulo equilatero");

        }else if(ladoA == ladoB || ladoB == ladoC || ladoC == ladoA){

            printf("Triangulo isoceles");

        }else{

            printf("Triangulo escaleno");

        }
    }else{

        printf("Nao e possivel formar um triangulo!!");

    }

    return 0;
}
