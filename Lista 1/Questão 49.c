#include <stdio.h>

/*49. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia
quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio
com base no valor investido.*/

int main() {

    float investimento1, investimento2, investimento3, premio, total_investido, parte1, parte2, parte3;

        printf("Digite o valor investido pelo primeiro amigo: ");
        scanf("%f", &investimento1);
        printf("Digite o valor investido pelo segundo amigo: ");
        scanf("%f", &investimento2);
        printf("Digite o valor investido pelo terceiro amigo: ");
        scanf("%f", &investimento3);

        printf("Digite o valor do premio: ");
        scanf("%f", &premio);

        total_investido = investimento1 + investimento2 + investimento3;

        parte1 = investimento1 / total_investido * premio;
        parte2 = investimento2 / total_investido * premio;
        parte3 = investimento3 / total_investido * premio;

        printf("\nO primeiro amigo ganharia R$ %.2f do premio\n", parte1);
        printf("O segundo amigo ganharia R$ %.2f do premio\n", parte2);
        printf("O terceiro amigo ganharia R$ %.2f do premio\n", parte3);

    return 0;
}
