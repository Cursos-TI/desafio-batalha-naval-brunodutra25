// Desafio Batalha Naval - MateCheck

#include <stdio.h>

int main() {

    //Variáveis do código
    int tabuleiro [10][10];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio1 = 3, navio2 = 3;

    //Mensagem informativa sobre o jogo
    printf("    ** TABULEIRO BATALHA NAVAL **\n");
    printf("\n");
    printf("    ");

    //Atribuição do valor 0 para água na matriz tabuleiro
    for (int y=0; y<10; y++) {
        for (int j=0; j<10; j++) {
            tabuleiro[y][j] = 0;
        }
    }

    //Posicionamento do navio 1 na horizontal
    if (tabuleiro[2][3]==0 && tabuleiro[2][4]==0 && tabuleiro[2][5]==0){
        tabuleiro[2][3] = navio1;
        tabuleiro[2][4] = navio1;
        tabuleiro[2][5] = navio1;
    }

    //Posicionamento do navio 2 na vertical
    if (tabuleiro[6][7]==0 && tabuleiro[7][7]==0 && tabuleiro[8][7]==0){
        tabuleiro[6][7] = navio2;
        tabuleiro[7][7] = navio2;
        tabuleiro[8][7] = navio2;
    }

    //Impressão do tabuleiro com os navios posicionados
    for (int x = 0; x < 10; x++) {
        printf(" %c ", coluna[x]);      //Impressão das colunas de A-J
        }

    for (int y=0; y<10; y++) {
        printf("\n%2d  ", y+1);         //Impressão do número das linhas de 1-10
        for (int j=0; j<10; j++) {
            printf(" %d ", tabuleiro[y][j]);
        }
    }

    printf("\n");
    
    return 0;
}