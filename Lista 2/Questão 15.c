#include <stdio.h>
#include <math.h>

/*15. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a segunda prova têm peso 1 e
a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado.
A nota para aprovação deve ser igual ou superior a 60 pontos.*/

int main() {

    float nota1, nota2, nota3, media;

        // Entrada das notas
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        // Cálculo da média ponderada
        media = (nota1 + nota2 + 2*nota3) / 4;

        // Verificação de aprovação/reprovação
        if (media >= 60) {
            printf("Aluno aprovado com média %.2f\n", media);
        } else {
            printf("Aluno reprovado com média %.2f\n", media);
        }

   return 0;
}






