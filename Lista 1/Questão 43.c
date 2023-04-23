#include <stdio.h>

/*43. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo a
escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo.*/

int main(){

    float alturaDegrau, alturaDesejada;
    int numDegrau;

        // Leitura das alturas
        printf("Insira a altura do degrau (em metros): ");
        scanf("%f", &alturaDegrau);
        printf("Insira a altura desejada (em metros): ");
        scanf("%f", &alturaDesejada);

        // C�lculo do n�mero de degraus
        numDegrau = (int) (alturaDesejada / alturaDegrau + 0.5); // Adiciona 0.5 para arredondar corretamente

        // Impress�o do resultado
        printf("Quantidade de degraus: %d", numDegrau);

    return 0;
}
