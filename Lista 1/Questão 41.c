#include <stdio.h>

/*41. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que
esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de
imposto sobre o salário-base.*/

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
