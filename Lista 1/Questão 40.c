#include <stdio.h>

/*40. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas
no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

int main(){

    float hora_trabalho, hora_mes, salario;

        printf("Insira o valor da hora de trabalho: ");
        scanf("%f", &hora_trabalho);
        printf("Insira o valor das horas trabalhadas no mes: ");
        scanf("%f", &hora_mes);

        salario = (hora_mes * hora_trabalho) * 1.1;

        printf("Salario: R$ %.2f", salario);

    return 0;
}
