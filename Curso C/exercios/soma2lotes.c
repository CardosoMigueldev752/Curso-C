#include <stdio.h>

int main(){
    int loteA, loteB;
    printf("\n==== Sistema de estoque ====\n");
    printf("Digite a quantidade do lote A: ");
    scanf("%d", &loteA);
    printf("Digite a quantidade do lote B: ");
    scanf("%d", &loteB);
    int estoque = loteA + loteB;
    printf("------------------\n>>Total de itens em estoque: %d componentes\n", estoque);
    return 0;
}