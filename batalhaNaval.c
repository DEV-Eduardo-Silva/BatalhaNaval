#include <stdio.h>

#define TAM 10

int main() {

    int i, j;

    // =================================================
    // 🏅 NIVEL NOVATO
    // =================================================
    printf("=== BATALHA NAVAL - NIVEL NOVATO ===\n\n");

    int navioVertical[3][2] = { {2,3}, {3,3}, {4,3} };
    int navioHorizontal[3][2] = { {6,5}, {6,6}, {6,7} };

    printf("Navio Vertical:\n");
    for (i = 0; i < 3; i++) {
        printf("Coordenada: (%d, %d)\n",
               navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\nNavio Horizontal:\n");
    for (i = 0; i < 3; i++) {
        printf("Coordenada: (%d, %d)\n",
               navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    // =================================================
    // 🛡️ NIVEL AVENTUREIRO
    // =================================================
    printf("\n=== BATALHA NAVAL - NIVEL AVENTUREIRO ===\n\n");

    int tabuleiro[TAM][TAM] = {0};

    // Navio horizontal
    for (j = 1; j <= 3; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical
    for (i = 4; i <= 6; i++) {
        tabuleiro[i][5] = 3;
    }

    // Navio diagonal principal
    for (i = 0; i < 3; i++) {
        tabuleiro[6 + i][1 + i] = 3;
    }

    // Navio diagonal secundaria
    for (i = 0; i < 3; i++) {
        tabuleiro[1 + i][8 - i] = 3;
    }

    // Exibição do tabuleiro
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // =================================================
    // 🏆 NIVEL MESTRE
    // =================================================
    printf("\n=== BATALHA NAVAL - NIVEL MESTRE ===\n");

    // ---------- HABILIDADE CONE ----------
    int cone[3][5] = {0};

    for (i = 0; i < 3; i++) {
        for (j = 2 - i; j <= 2 + i; j++) {
            cone[i][j] = 1;
        }
    }

    printf("\nHabilidade CONE:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // ---------- HABILIDADE CRUZ ----------
    int cruz[3][5] = {0};

    for (i = 0; i < 3; i++) {
        cruz[i][2] = 1;
    }

    for (j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }

    printf("\nHabilidade CRUZ:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // ---------- HABILIDADE OCTAEDRO ----------
    int octaedro[3][5] = {0};

    octaedro[0][2] = 1;
    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("\nHabilidade OCTAEDRO:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
