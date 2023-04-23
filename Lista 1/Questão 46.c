#include <stdio.h>

int main(){

    float segundos, minutos, horas;

        printf("Insira o valor em segundos: ");
        scanf("%f", &segundos);

        minutos = segundos / 60;
        horas = segundos / 3600;

        printf("%.1fh, %.1fmin, %.1fs", horas, minutos, segundos);

    return 0;
}
