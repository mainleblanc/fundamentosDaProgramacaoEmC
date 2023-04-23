#include <stdio.h>

/*43. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a
escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/

int main(){

    float alturaDegrau, alturaDesejada;
    int numDegrau;

        // Leitura das alturas
        printf("Insira a altura do degrau (em metros): ");
        scanf("%f", &alturaDegrau);
        printf("Insira a altura desejada (em metros): ");
        scanf("%f", &alturaDesejada);

        // Cálculo do número de degraus
        numDegrau = (int) (alturaDesejada / alturaDegrau + 0.5); // Adiciona 0.5 para arredondar corretamente

        // Impressão do resultado
        printf("Quantidade de degraus: %d", numDegrau);

    return 0;
}
