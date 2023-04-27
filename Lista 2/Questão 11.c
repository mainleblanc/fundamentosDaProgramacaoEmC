#include <stdio.h>
#include <math.h>

/*11. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: Emprestimo não concedido, caso contrário imprima: Emprestimo concedido.*/

int main(){

    float salario, prestacao;

        printf("Insira o salario:  ");
        scanf("%f", &salario);
        printf("Insira o valor da prestacao:  ");
        scanf("%f", &prestacao);

        if(prestacao > salario * 0.20){
            printf("\nEmprestimo nao concedido...\n");
        }else{
            printf("\nEmprestimo concedido.\n");
        }

    return 0;
}
