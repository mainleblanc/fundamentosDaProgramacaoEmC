#include <stdio.h>

int main() {

    float valor_total, valor_desconto, valor_parcela;
    float comissao_vista, comissao_parcelada;

        printf("Digite o valor total da venda: ");
        scanf("%f", &valor_total);

        // a. o total a pagar com desconto de 10%;
        valor_desconto = valor_total * 0.9;
        printf("Valor a pagar com desconto de 10%%: R$ %.2f\n", valor_desconto);

        // b. o valor de cada parcela, 3x sem juros;
        valor_parcela = valor_total / 3;
        printf("Valor de cada parcela (3x sem juros): R$ %.2f\n", valor_parcela);

        // c. a comissao do vendedor caso a venda ser a vista (5% sobre o valor com desconto);
        comissao_vista = valor_desconto * 0.05;
        printf("Comissao do vendedor (venda a vista): R$ %.2f\n", comissao_vista);

        // d. a comissao do vendedor caso a venda for parcelada (5% sobre o valor total)
        comissao_parcelada = valor_total * 0.05;
        printf("Comissao do vendedor (venda parcelada): R$ %.2f\n", comissao_parcelada);

    return 0;
}
