#include <stdio.h>

/*36. Fa�a um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
vista que o desconto foi de 12%. */

int main() {

    float valorProduto, valorComDesconto;

        printf("Digite o valor do produto: ");
        scanf("%f", &valorProduto);

        valorComDesconto = valorProduto - (valorProduto * 0.12);

        printf("\nProduto com desconto e R$%.2f\n", valorComDesconto);

    return 0;
}
