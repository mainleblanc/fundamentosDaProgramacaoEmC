#include <stdio.h>

/*Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quil�metros por hora). A f�rmula de convers�o �: K = M * 3.6, sendo K a velocidade em km/h e M em m/s.*/

int main(){

    float km_h, m_s;

        printf("Insira a velocidade em m/s: ");
        scanf("%f", &m_s);

        km_h = m_s * 3.6;

        printf("Velocidade convertida: %.2f km/h\n", km_h);

    return 0;
}
