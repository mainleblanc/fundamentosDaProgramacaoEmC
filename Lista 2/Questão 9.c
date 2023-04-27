#include <stdio.h>
#include <math.h>

/*9. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: números iguais.*/

int main(){

    int num1, num2;

        printf("Insira um numero:  ");
        scanf("%d", &num1);
        printf("Insira outro numero:  ");
        scanf("%d", &num2);

        if(num1 > num2){
            printf("\nNumero maior: %d", num1);
        }else if(num2 > num1){
            printf("\nNumero maior: %d"), num2;
        }else{
            printf("\nNumeros iguais. \n");
        }

    return 0;
}
