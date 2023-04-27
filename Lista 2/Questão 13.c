#include <stdio.h>
#include <math.h>

/*13. Escreva um programa que leia um número inteiro de três algarismos maior do que zero e devolva, na tela, a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá ao valor 8 (2 + 5 + 1). Se o número lido não for
maior do que zero, o programa terminará com a mensagem: número invalido.*/

int main(){

    int num, digito1, digito2, digito3, soma;

        printf("Insira um numero de 3 algarismos: ");
        scanf( "%d", &num);

        if(num > 0){

            digito1 = num / 100;        // Pega o primeiro número do quociente da divisão;

            digito2 = (num % 100) / 10; // Pega o resto da divisão por 100 e divide por 10;

            digito3 = num % 10;         // Pega o resto da divisão do número inserido e divide por 10;

            soma = digito1 + digito2 + digito3;

            printf("\nA soma dos algarismos e: %d\n", soma);

        }else{
            printf("\nNumero invalido...\n\n");
        }

    return 0;
}
