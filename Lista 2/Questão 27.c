#include <stdio.h>

/*27. Fa�a uma prova de matem�tica para crian�as que est�o aprendendo a somar n�meros inteiros
menores do que 100. Escolha n�meros aleat�rios entre 1 e 100, e mostre na tela a pergunta: qual �
a soma de a + b, onde a e b s�o os n�meros aleat�rios. Pe�a a resposta. Fa�a cinco perguntas ao
aluno, e mostre para ele as perguntas e as respostas corretas, al�m de quantas vezes o aluno
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
