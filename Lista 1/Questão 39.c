#include <stdio.h>

/*39. Uma empresa contrata um encanador a R$ 30,00 por dia. Fa�a um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.*/

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
