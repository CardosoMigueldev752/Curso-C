#include <stdio.h>

int main(){
    char nome[10], amigo[10];
    printf("Digite um nome: ");
    scanf("%s", &nome);

    printf("Digite o nome do seu amigo: ");
    scanf("%s", &amigo);
    printf("O seu nome é %s e o nome do seu amigo é %s\n\n", nome, amigo);
    return 0;
}