#include <stdio.h>

/*4. Leia um número real e imprima o resultado do quadrado desse número.*/

int main(){

    float quadrado, num;

        printf("Insira um número real: ");
        scanf("%f", &num);

        quadrado = num * num;

        printf("Quadrado: %.2f\n", quadrado);

    return 0;
}
