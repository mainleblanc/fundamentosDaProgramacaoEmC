#include <stdio.h>
#include <math.h>

/*11. Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta��o for
maior que 20% do sal�rio imprima: Emprestimo n�o concedido, caso contr�rio imprima: Emprestimo concedido.*/

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
