#include <stdio.h>

/*22. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, se
forem, se é um triângulo escaleno, equilátero ou isóscele.*/

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
