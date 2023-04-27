#include <stdio.h>
#include <locale.h>

/*1. Faça um programa que leia um número inteiro e o imprima.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num;

        printf("Insira um inteiro: ");
        scanf("%d", &num);
        printf("Inteiro: %d", num);

    return 0;
}
