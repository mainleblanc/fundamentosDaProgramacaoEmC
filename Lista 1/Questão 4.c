#include <stdio.h>

/*4. Leia um n�mero real e imprima o resultado do quadrado desse n�mero.*/

int main(){

    float quadrado, num;

        printf("Insira um n�mero real: ");
        scanf("%f", &num);

        quadrado = num * num;

        printf("Quadrado: %.2f\n", quadrado);

    return 0;
}
