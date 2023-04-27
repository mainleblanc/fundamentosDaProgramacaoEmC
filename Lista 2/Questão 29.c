#include <stdio.h>

/*29. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia
existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não
bissextos.*/

int main() {

    int dia, mes, ano;

    printf("Insira uma data: ");
    scanf("%d.%d.%d", &dia, &mes, &ano);

    if(ano < 1 || mes < 1 || mes > 12){   //verifica se o ano e os meses sao validos

        printf("Data invalida\n");

    } else if(mes == 2){

        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) { //verifica se os dias sao validos no mes 2 em ano bissexto

            if (dia < 1 || dia > 29) {

                printf("Data invalida\n");

            } else {

                printf("Data valida\n");

            }
        } else {

            if (dia < 1 || dia > 28) { //verifica se os dias sao validos em ano nao bissexto

                printf("Data invalida\n");

            } else {

                printf("Data valida\n");

            }
        }

    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { //verifica dias validos nos meses 4, 6, 9 e 11

        if (dia < 1 || dia > 30) {

            printf("Data invalida\n");

        } else {

            printf("Data valida\n");

        }

    } else {

        if (dia < 1 || dia > 31) {

            printf("Data invalida\n");

        } else {

            printf("Data valida\n");

        }
    }

    return 0;
}
