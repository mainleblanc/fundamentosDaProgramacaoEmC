#include <stdio.h>

/*3. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/

int main(){

    int n1, n2, n3, soma;

        printf("Insira três números: ");
        scanf("%d %d %d", &n1, &n2, &n3);

        soma = n1 + n2 + n3;

        printf("Soma: %d", soma);

    return 0;
}
