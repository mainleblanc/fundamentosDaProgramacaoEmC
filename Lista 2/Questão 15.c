#include <stdio.h>
#include <math.h>

/*15. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a segunda prova t�m peso 1 e
a terceira tem peso 2. Ao final, mostrar a m�dia do aluno e indicar se o aluno foi aprovado ou reprovado.
A nota para aprova��o deve ser igual ou superior a 60 pontos.*/

int main() {

    float nota1, nota2, nota3, media;

        // Entrada das notas
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        // C�lculo da m�dia ponderada
        media = (nota1 + nota2 + 2*nota3) / 4;

        // Verifica��o de aprova��o/reprova��o
        if (media >= 60) {
            printf("Aluno aprovado com m�dia %.2f\n", media);
        } else {
            printf("Aluno reprovado com m�dia %.2f\n", media);
        }

   return 0;
}






