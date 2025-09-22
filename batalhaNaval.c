
// Desafio Batalha Naval - MateCheck

#include <stdio.h>

int main() {

    //Variáveis do código
    int tabuleiro [10][10];
    int habcone[3][5], habcruz[3][5], haboctaedro[3][3];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio1 = 3, navio2 = 3, navio3 = 3, navio4 = 3;

    //Mensagem informativa sobre o jogo
    printf(" =============================================\n");
    printf("|        BEM-VINDO AO JOGO BATALHA NAVAL!     |\n");
    printf(" =============================================\n");
    printf("O tabuleiro está sendo montado com 4 navios.\n");
    printf("Os navios estão representados pelo numeral '3' e a água pelo numeral '0'.\n");
    printf("As habilidades CONE, CRUZ e OCTAEDRO estão sendo representadas pelo numeral '5'.\n");
    printf("Os navios estão ocupando 3 posições: horizontal, vertical e diagonal.\n");
    printf("\n");
    printf("\n    ** TABULEIRO BATALHA NAVAL **\n");
    printf("\n");
    printf("    ");  //Espaçamento para alinhar as colunas (letras) com o tabuleiro

    //Atribuição do valor 0 para água na matriz tabuleiro
    for (int y=0; y<10; y++) {
        for (int j=0; j<10; j++) {
            tabuleiro[y][j] = 0;
        }
    }

    //Posicionamento do navio 1 na horizontal começando na linha 1 e finalizando na coluna 4
    for (int y=1; y<2; y++) {
        for (int j=1; j<4; j++) {
            tabuleiro[y][j] = navio1;
        }
    }

    //Posicionamento do navio 2 na vertical começando na linha 6 coluna 8 e finalizando na linha 8 coluna 8
    for (int y=6; y<9; y++) {
        for (int j=8; j<9; j++) {
            tabuleiro[y][j] = navio2;
        }
    }

    //Posicionamento do navio 3 na diagonal começando na linha 6 coluna 1 e finalizando na linha 4 coluna 4
    for (int y=4; y<7; y++) {
        for (int j=1; j<4; j++) {
            if (y+j==7) {
                tabuleiro[y][j] = navio3;
            }
        }
    }

    //Posicionamento do navio 4 na diagonal na linha 1 coluna 6 e finalizando na linha 3 coluna 8
    for (int y=0; y<8; y++) {
        for (int j=6; j<9; j++) {
            if (y-j==-5) {
                tabuleiro[y][j] = navio4;
            }
        }
    }

    //Aplicação da habilidade cone começando a partir da linha 6 coluna 3
    for (int y=0; y<3; y++) {
        for (int j=0; j<5; j++) {
            if (j>=2-y && j<=2+y) {
                habcone[y][j] = 5;
                tabuleiro[6+y][1+j] = habcone[y][j]; 
            }
        }
    }

    //Aplicação da habilidade cruz começando a partir da linha 4 coluna 6
    for (int y=0; y<3; y++) {
        for (int j=0; j<5; j++) {
            if (y==1 || j==2) {
                habcruz[y][j] = 5;
                tabuleiro[4+y][4+j] = habcruz[y][j];
            }
        }
    }

    //Aplicação da habilidade octaedro (losango) começando a partir da linha 1 coluna 4
    for (int y=0; y<3; y++) {
        for (int j=0; j<3; j++) {
            if (y==1 || j==1) {
                haboctaedro[y][j] = 5;
                tabuleiro[1+y][3+j] = haboctaedro[y][j];
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