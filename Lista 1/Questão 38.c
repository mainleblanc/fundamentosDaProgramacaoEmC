#include <stdio.h>

/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

int main(){

    float primeiro, segundo, terceiro, dinheiro;

        printf("Insira o valor em dinheiro: ");
        scanf("%f", &dinheiro);

        primeiro = dinheiro * 0.46;
        segundo = dinheiro * 0.32;
        terceiro = dinheiro - primeiro - segundo;

        printf("Primeiro: R$ %.3f \nSegundo: R$ %.3f \nTerceiro: R$ %.3f", primeiro, segundo, terceiro);

    return 0;
}
