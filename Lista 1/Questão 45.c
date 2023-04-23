#include <stdio.h>

/*46. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

int main() {

    int num, digito1, digito2, digito3;

        printf("Digite um numero inteiro positivo de tres digitos (de 100 a 999): ");
        scanf("%d", &num);

        digito1 = num / 100;        // Pega o primeiro número do quociente da divisão

        digito2 = (num % 100) / 10; // Pega o resto da divisão por 100 e divide por 10

        digito3 = num % 10;         // Pega o resto da divisão do número por 10

        printf("NumeroGerado = %d%d%d\n", digito3, digito2, digito1);

    return 0;
}
