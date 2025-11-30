#include <stdio.h>

int main() {


    int tabuleiro[10][10];
    int i, j;

    // 1) Preenche todo o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
   
    // ===== POSICIONAMENTO DOS NAVIOS =====
    // Navio horizontal tamanho 3 começando na posição (2,1)
    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    // Navio vertical tamanho 3 começando na posição (5,7)
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;


    printf("Tabuleiro:\n\n");

    printf("    ");
    for (j = 0; j < 10; j++){
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // 3) Mostrar o tabuleiro na tela
    
    for (i = 0; i < 10; i++) {
        printf("%2d. ", i);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
  