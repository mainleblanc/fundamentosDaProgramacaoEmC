    #include <stdio.h>
#include <math.h>

/*16. A nota final de um estudante � calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas
mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o Semestral: 3; Exame Final: 5. De acordo
com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi
aprovado. Fa�a todas as verifica��es necess�rias.*/

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
