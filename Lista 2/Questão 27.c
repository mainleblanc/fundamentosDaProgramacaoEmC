#include <stdio.h>

/*27. Faça uma prova de matemática para crianças que estão aprendendo a somar números inteiros
menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na tela a pergunta: qual é
a soma de a + b, onde a e b são os números aleatórios. Peça a resposta. Faça cinco perguntas ao
aluno, e mostre para ele as perguntas e as respostas corretas, além de quantas vezes o aluno
acertou.*/

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
