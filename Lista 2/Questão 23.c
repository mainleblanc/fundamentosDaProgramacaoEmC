#include <stdio.h>

/*23. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As
condições para aposentadoria são:
○ Ter pelo menos 65 anos;
○ Ou ter trabalhado pelo menos 30 anos;
○ Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

int main(){

    int idade, tempoServico;

    printf("\nInsira a idade e o tempo de servico: ");
    scanf("%d %d", &idade, &tempoServico);

        if(idade >= 65){

            printf("\nPode aposentar\n\n");

        }else if(tempoServico >= 30){

            printf("\nPode aposentar\n\n");

        }else if(idade >= 60 || tempoServico >= 25){

            printf("\nPode aposentar\n\n");

        }else{

            printf("\nNao pode aposentar\n\n");

        }

    return 0;
}
