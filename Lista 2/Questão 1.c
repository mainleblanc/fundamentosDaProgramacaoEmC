#include <stdio.h>

/*1. Faça um programa que leia um número e informe se ele é igual a zero.*/

int main(){

    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num == 0){
        printf("E igual a 0");
    }else{
        printf("Nao e igual a 0\n\n");
    }

    return 0;

}
