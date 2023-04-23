#include <stdio.h>

/*39. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/

int main(){

    int dias;
    float salario_liquido, salario_bruto;

        printf("Insira o numero de dias trabalhados: ");
        scanf("%d", &dias);

        salario_bruto = dias * 30.0;
        salario_liquido = salario_bruto * 0.92;


        printf("Valor liquido a ser pago: R$ %.2f\n\n", salario_liquido);

    return 0;
}
