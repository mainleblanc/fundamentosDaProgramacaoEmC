#include <stdio.h>

/*Leia uma velocidade em km/h (quil�metros por hora) e apresente-a convertida em m/s (metros
por segundo). A f�rmula de convers�o �: M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/

int main(){

    float km_h, m_s;

        printf("Insira a velocidade em km/h: ");
        scanf("%f", &km_h);

        m_s = km_h / 3.6;

        printf("Velocidade convertida: %.2f ms\n", m_s);

    return 0;
}
