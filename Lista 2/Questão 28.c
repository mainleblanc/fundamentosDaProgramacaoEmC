#include <stdio.h>

/*28. Faça um programa que receba três números e mostre-os em ordem crescente.*/

int main() {

    int num1, num2, num3;

    printf("Digite tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2 && num1 <= num3) {
        if(num2 <= num3) {
            printf("Ordem crescente: %d %d %d", num1, num2, num3);
        }else {
            printf("Ordem crescente: %d %d %d", num1, num3, num2);
        }

    }else if (num2 <= num1 && num2 <= num3) {
        if(num1 <= num3) {
            printf("Ordem crescente: %d %d %d", num2, num1, num3);
        }else {
            printf("Ordem crescente: %d %d %d", num2, num3, num1);
        }

    }else {
        if (num1 <= num2) {
            printf("Ordem crescente: %d %d %d", num3, num1, num2);
        } else {
            printf("Ordem crescente: %d %d %d", num3, num2, num1);
        }
    }
    return 0;
}
