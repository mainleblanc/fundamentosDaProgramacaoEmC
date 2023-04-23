#include <stdio.h>

/*32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

int main(){

    int num;

        printf("Insira um numero inteiro:  ");
        scanf("%d", &num);

        printf("\nSoma do sucessor de seu triplo com o antecessor de seu dobro e: %d\n\n", (num*3+1)+(num*2-1));

    return 0;
}
