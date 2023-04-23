#include <stdio.h>

/*47. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e
do ano atual.*/

int main(){

    int anoAtual, idade, anoNasc;

        printf("insira a idade: ");
        scanf("%d", &idade);
        printf("insira o ano atual: ");
        scanf("%d", &anoAtual);

        anoNasc = anoAtual - idade;

        printf("O ano de nascimento e: %d", anoNasc);

    return 0;
}
