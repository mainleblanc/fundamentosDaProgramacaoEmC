#include <stdio.h>
#include <math.h>

/*13. Escreva um programa que leia um n�mero inteiro de tr�s algarismos maior do que zero e devolva, na tela, a soma de
todos os seus algarismos. Por exemplo, ao n�mero 251 corresponder� ao valor 8 (2 + 5 + 1). Se o n�mero lido n�o for
maior do que zero, o programa terminar� com a mensagem: n�mero invalido.*/

int main(){

    int num, digito1, digito2, digito3, soma;

        printf("Insira um numero de 3 algarismos: ");
        scanf( "%d", &num);

        if(num > 0){

            digito1 = num / 100;        // Pega o primeiro n�mero do quociente da divis�o;

            digito2 = (num % 100) / 10; // Pega o resto da divis�o por 100 e divide por 10;

            digito3 = num % 10;         // Pega o resto da divis�o do n�mero inserido e divide por 10;

            soma = digito1 + digito2 + digito3;

            printf("\nA soma dos algarismos e: %d\n", soma);

        }else{
            printf("\nNumero invalido...\n\n");
        }

    return 0;
}
