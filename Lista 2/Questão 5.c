#include <stdio.h>
#include <math.h>

/*5. Leia um n�mero real. Se o n�mero for positivo imprima a raiz quadrada. Do contr�rio, imprima o
n�mero ao quadrado.*/

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
