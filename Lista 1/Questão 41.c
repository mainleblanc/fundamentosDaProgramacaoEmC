#include <stdio.h>

/*41. Receba o sal�rio-base de um funcion�rio. Calcule e imprima o sal�rio a receber, sabendo-se que
esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, ele paga 7% de
imposto sobre o sal�rio-base.*/

int main(){

    float salario_base, gratificacao, imposto, salario_final;

        printf("Insira o salario base: ");
        scanf("%f", &salario_base);

        imposto = salario_base * 0.07;
        gratificacao = salario_base * 0.05;
        salario_final = salario_base + gratificacao - imposto;

        printf("Salario: R$ %.2f\n\n", salario_final);

    return 0;
}
