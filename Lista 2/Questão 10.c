#include <stdio.h>
#include <math.h>

/*10. Fa�a um programa que leia duas notas de um aluno, verifique se as notas s�o v�lidas e exiba na
tela a m�dia destas notas. Uma nota v�lida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0,
onde caso a nota n�o possua um valor v�lido, este fato deve ser informado ao usu�rio e o programa termina.*/

int main(){

    float nota1, nota2, media;

        printf("Insira uma nota:  ");
        scanf("%f", &nota1);
        printf("Insira outra nota:  ");
        scanf("%f", &nota2);

        if((nota1 > 0.0 && nota1 <= 10.0) && (nota2 > 0.0 && nota2 <= 10.0)){
            media = (nota1 + nota2) / 2;
            printf("\nMedia: %.2f", media);
        }

    return 0;
}
