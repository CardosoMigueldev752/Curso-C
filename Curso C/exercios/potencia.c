#include <stdio.h>

int main(){
    int numero;
    printf("\n>>> Expoente <<<\n");
    printf("Digite um numero; ");
    scanf("%d", &numero);
    int expo = numero*numero;
    printf("O numero %d exponenciado a ele mesmo é igual a %d\n", numero,expo);
    return 0;
}