#include <stdio.h>

/*44. Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela ASCII
para resolver o problema.*/

int main() {

    char letraMaiuscula, letraMinuscula;

        // Leitura da letra mai�scula
        printf("Digite uma letra maiuscula: ");
        scanf("%c", &letraMaiuscula);

        // Convers�o para letra min�scula usando a tabela ASCII
        letraMinuscula = letraMaiuscula + 32;

        // Impress�o do resultado
        printf("A letra minuscula correspondente e: %c\n", letraMinuscula);

    return 0;
}
