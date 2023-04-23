#include <stdio.h>

/*31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

int main(){

    int num;

        printf("Insira um numero inteiro:  ");
        scanf("%d", &num);

        printf("\nAntecessor: %d \nNumero inserido: %d \nSucessor: %d\n\n", num-1, num, num+1);

    return 0;
}
