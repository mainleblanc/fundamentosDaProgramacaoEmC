#include <stdio.h>
#include <math.h>

/*5. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o
número ao quadrado.*/

int main(){

    float num;

        printf("Insira um numero:  ");
        scanf("%f", &num);

        if(num > 0){
            printf("Raiz quadrada: %.2f", sqrt(num));
        }else{
            printf("Numero ao quadrado: %.2f\n", pow(num, 2));
        }

    return 0;
}
