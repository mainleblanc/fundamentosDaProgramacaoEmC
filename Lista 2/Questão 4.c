#include <stdio.h>
#include <math.h>

/*4. Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for positivo, calcule a raiz quadrada do
n�mero. Se o n�mero for negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.*/

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
