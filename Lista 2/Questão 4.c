#include <stdio.h>
#include <math.h>

/*4. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do
número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.*/

int main(){

    float num;

        printf("Insira um numero:  ");
        scanf("%f", &num);

        if(num > 0){
            printf("\nRaiz quadrada: %.2f...\n", sqrt(num));
        }else{
            printf("Numero invalido.\n");
        }

    return 0;
}
