#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorteiaLetra(int *letra){
    //Considera que de 65 a 90, estão as letras A a Z, e é feito um sorteio de um
    //número pseudoaleatório para poder representar uma destas letras.
    srand(time(NULL));
    *letra = (rand() % 25)+65;
}
int main(void){

    int letra=65;// Pela tabela ASCII 65 equivale a "A"
    int novaRodada = 1, i =1;
        printf("\nVamos jogar adedanha?");
    do{
        printf("\nEscolha 1 para jogar a %d ° rodada, ou escolha 2 para encerrar o jogo:\n", i);
        printf("\nEscolha: ");
        scanf("%i", &novaRodada);
        switch(novaRodada){
            case 1: sorteiaLetra(&letra);
            break;
            case 2:
            default:
            break;
        }

        printf("%d ° Letra sorteada: %c", i, letra );
        i++;

    }while(novaRodada == 1);

    printf("\nJogo encerrado! Volte sempre!");
    return 0;
}
