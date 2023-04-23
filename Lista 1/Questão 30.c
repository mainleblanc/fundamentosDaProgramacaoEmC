#include <stdio.h>

/*30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.*/

int main() {

    float real, cotacao_dolar, dolar;

        printf("Digite o valor em reais: ");
        scanf("%f", &real);
        printf("Digite a cotação do dolar: ");
        scanf("%f", &cotacao_dolar);

        dolar = real / cotacao_dolar;

        printf("O valor em dolares e: %.2f\n", dolar);

    return 0;
}





