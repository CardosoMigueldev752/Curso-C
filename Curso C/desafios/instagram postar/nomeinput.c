#include <stdio.h>

int main(){
    char nome[10];
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("\nSeu nome é %s\n\n", nome);
    return 0;
}