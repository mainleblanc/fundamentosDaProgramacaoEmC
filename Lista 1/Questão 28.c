#include <stdio.h>

/*28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

int main(){

    int n1, n2, n3, soma = 0;

        printf("Insira tres valores: ");
        scanf("%d %d %d", &n1, &n2, &n3);

        soma = (n1*n1) + (n2*n2) + (n3*n3);

        printf("Soma dos 3 valores: %d\n", soma);

    return 0;
}
