#include <stdio.h>

/*3. Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.*/

int main(){

    int n1, n2, n3, soma;

        printf("Insira tr�s n�meros: ");
        scanf("%d %d %d", &n1, &n2, &n3);

        soma = n1 + n2 + n3;

        printf("Soma: %d", soma);

    return 0;
}
