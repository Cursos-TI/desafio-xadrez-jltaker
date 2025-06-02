#include <stdio.h>

// Função recursiva para executar o movimento da Torre
void mov_torre(int casas){
    if (casas == 0){
        printf("\nTorre moveu todas as casas\n\n");
        return;
    } 
    printf("Direita\t");
    mov_torre(casas - 1);
}

// Função recursiva para executar o movimento do Bispo
void mov_bispo(int casas){
    if (casas == 0) {
        printf("\nBispo moveu todas as casas em diagonal\n\n");
        return;
    }
    printf("Cima, Direita\t");
    mov_bispo(casas - 1);
}

// Função recursiva para executar o movimento da Rainha
void mov_rainha(int casas){
    if (casas == 0){
        printf("\nRainha movimentou todas as casas\n\n");
        return;
    }
    printf("Esquerda\t");
    mov_rainha(casas - 1);
}

// Função ajustada para o movimento do Cavalo usando loops aninhados
void mov_cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\t");
    }
    printf("Direita\t");
    printf("\nCavalo moveu 2 casas para cima e 1 para a direita\n\n");
}

int main(){
    mov_torre(5);  // Chama movimento da Torre
    mov_bispo(5);  // Movimenta o Bispo recursivamente
    mov_rainha(8); // Chama movimento da Rainha
    mov_cavalo();  // Chama movimento do Cavalo
    return 0;
}