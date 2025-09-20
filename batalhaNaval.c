
// Desafio Batalha Naval - MateCheck

#include <stdio.h>

int main() {

    //Variáveis do código
    int tabuleiro [10][10];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio1 = 3, navio2 = 3, navio3 = 3, navio4 = 3;

    //Mensagem informativa sobre o jogo
    printf(" =============================================\n");
    printf("|        BEM-VINDO AO JOGO BATALHA NAVAL!     |\n");
    printf(" =============================================\n");
    printf("Seu tabuleiro está sendo montado com 4 navios.\n");
    printf("Os navios estão representados pelo numeral '3' e a água pelo numeral '0'.\n");
    printf("Os navios estão ocupando 3 posições: horizontal, vertical e diagonal.\n");
    printf("\n");
    printf("\n    ** TABULEIRO BATALHA NAVAL **\n");
    printf("\n");
    printf("    ");

    //Atribuição do valor 0 para água na matriz tabuleiro
    for (int y=0; y<10; y++) {
        for (int j=0; j<10; j++) {
            tabuleiro[y][j] = 0;
        }
    }

    //Posicionamento do navio 1 na horizontal
    for (int y=1; y<2; y++) {
        for (int j=1; j<4; j++) {
            tabuleiro[y][j] = navio1;
        }
    }

    //Posicionamento do navio 2 na vertical
    for (int y=6; y<9; y++) {
        for (int j=8; j<9; j++) {
            tabuleiro[y][j] = navio2;
        }
    }

    //Posicionamento do navio 3 na diagonal
    for (int y=4; y<7; y++) {
        for (int j=1; j<4; j++) {
            if (y+j==7) {
                tabuleiro[y][j] = navio3;
            }
        }
    }

    //Posicionamento do navio 4 na diagonal
    for (int y=0; y<8; y++) {
        for (int j=6; j<9; j++) {
            if (y-j==-5) {
                tabuleiro[y][j] = navio4;
            }
        }
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