#include <stdio.h>

/*50. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o
preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/

int main(){

    float comprimento, largura, precoMetro, custoTotal;

    printf("Insira o comprimento: ");
    scanf("%f", &comprimento);
    printf("Insira a largura: ");
    scanf("%f", &largura);
    printf("Insira o preco do metro de tela: ");
    scanf("%f", &precoMetro);

    custoTotal = 2 * (largura + comprimento) * precoMetro;

    printf("Custo para cercar o terreno: R$ %.2f", custoTotal);

    return 0;

}
