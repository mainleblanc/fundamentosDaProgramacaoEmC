#include <stdio.h>
#include <math.h>

/*14. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem: número invalido. Se
o número for positivo, calcular o logaritmo na base 10 deste número.*/

int main(){

    float num;

        printf("Insira um numero: ");
        scanf("%f", &num);

        if(num > 0){

            printf("\nLogaritmo: %f\n", log10(num));

        }else{

            printf("\nNumero invalido...\n\n");

        }

    return 0;
}
