#include <stdio.h>

/*26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:*/

int main() {

    float km, l;

        printf("Digite a quantidade de km: ");
        scanf("%f", &km);

        printf("Digite a quantidade de litros: ");
        scanf("%f", &l);

        if(km/l < 8){

            printf("Vendo o carro!!\n");

        }else if(km/l >= 8 && km/l <= 14) {

            printf("Economico!!\n");

        }else{

            printf("Super economico\n");

        }

    return 0;

}
