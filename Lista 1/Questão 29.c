#include <stdio.h>

/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

int main(){

    int n1, n2, n3, n4, media = 0;

        printf("Insira tres valores: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        media = (n1 + n2 + n3 + n4) / 4;

        printf("Media das 4 notas: %d\n", media);

    return 0;
}
