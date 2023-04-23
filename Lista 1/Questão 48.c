#include <stdio.h>
#include <math.h>

/*48. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da
origem (0, 0).*/

int main() {

    float x, y, distancia;

        printf("Digite a coordenada x do ponto: ");
        scanf("%f", &x);
        printf("Digite a coordenada y do ponto: ");
        scanf("%f", &y);

        distancia = sqrt(pow(x, 2) + pow(y, 2));

        printf("A distancia do ponto (%.2f, %.2f) da origem (0, 0) e %.2f", x, y, distancia);

    return 0;
}
