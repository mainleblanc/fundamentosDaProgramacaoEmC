#include <stdio.h>

/*3. Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.*/

int main(){

    float numero1, numero2;

        printf("Insira dois numeros:  ");
        scanf("%f %f", &numero1, &numero2);

        if(numero1 > numero2){
            printf("Numero 1(%.2f) e maior.\n", numero1);
        }else{
            printf("Numero 2(%.2f) e maior.\n", numero2);
        }

    return 0;
}
