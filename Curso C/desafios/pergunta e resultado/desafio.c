#include <stdio.h>

int main(){
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("------------------------\nNOME: %s\tIdade: %d\n-----------------------\n\n", nome, idade);

    return 0;
}