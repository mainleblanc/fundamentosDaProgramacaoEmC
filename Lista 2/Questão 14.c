#include <stdio.h>
#include <math.h>

/*14. Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva a mensagem: n�mero invalido. Se
o n�mero for positivo, calcular o logaritmo na base 10 deste n�mero.*/

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
