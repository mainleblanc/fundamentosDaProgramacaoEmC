#include <stdio.h>

/*37. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.*/

int main(){

    float salario, aumento;

        printf("Insira o salario: ");
        scanf("%f", &salario);

        aumento = salario + (salario * 0.25);

        printf("\nNovo salario: R$ %.2f\n\n", aumento);

    return 0;
}
