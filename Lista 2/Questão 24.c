#include <stdio.h>

/*24. Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se for divis�vel
por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100. Por exemplo: 1988, 1992, 1996*/

int main(){

    int ano;

    printf("Insira um valor para ano: ");
    scanf("%d", &ano);

        if((ano % 4 == 0 && !(ano % 100 == 0)) || ano % 400 == 0){

            printf("\nAno bissexto\n\n");

        }else{

            printf("\nNao e bissexto\n\n");

        }

    return 0;
}
