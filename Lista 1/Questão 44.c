#include <stdio.h>

/*44. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII
para resolver o problema.*/

int main() {

    char letraMaiuscula, letraMinuscula;

        // Leitura da letra maiúscula
        printf("Digite uma letra maiuscula: ");
        scanf("%c", &letraMaiuscula);

        // Conversão para letra minúscula usando a tabela ASCII
        letraMinuscula = letraMaiuscula + 32;

        // Impressão do resultado
        printf("A letra minuscula correspondente e: %c\n", letraMinuscula);

    return 0;
}
