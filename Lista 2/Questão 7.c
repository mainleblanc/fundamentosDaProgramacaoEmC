#include <stdio.h>
#include <math.h>

/*7. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou �mpar.*/

int main(){

    int num;

        printf("Insira um numero:  ");
        scanf("%d", &num);

        if(num % 2 == 0){
            printf("\nNumero e par\n");
        }else{
            printf("\nNumero impar\n");
        }

    return 0;
}
