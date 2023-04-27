    #include <stdio.h>
#include <math.h>

/*16. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas
mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/

int main(){

    float mediaPonderada, nota1, nota2, nota3;

        printf("Insira a primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira a segunda nota: ");
        scanf("%f", &nota2);
        printf("Insira a terceira nota: ");
        scanf("%f", &nota3);

        mediaPonderada = (2*nota1 + 3*nota2 + 5*nota3) / 10;

        if(mediaPonderada >= 0 && mediaPonderada < 3){
            printf("\nReprovado --- Media: %.2f...\n\n", mediaPonderada);
        }else if(mediaPonderada >= 3 && mediaPonderada < 5){
            printf("\nRecuperacao --- Media: %.2f...\n\n", mediaPonderada);
        }else if(mediaPonderada >= 5 && mediaPonderada <= 10){
            printf("\nAprovado --- Media: %.2f...\n\n", mediaPonderada);
        }
    return 0;
}
