#include <stdio.h>

/*2. Faça um programa que leia um número e informe se ele é positivo.*/

int main(){

    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if(num > 0){
        printf("\nNumero positivo");
    }else{
        printf("\nNao e positivo\n\n");
    }

    return 0;

}
