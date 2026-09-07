#include <stdio.h>

int main(){
    char nome[10];
    float nota1, nota2;
    printf("\nEX001>>>Parabens aos alunos<<<\n");
    printf("Digite o seu nome: ");
    scanf("%29s", nome);
    printf("Digite sua primeira media: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/ 2;
    if (media>=7.0){
        printf("MEUS PARABÉNS! Você passou %s com media %.1f\n",nome, media);
    }else{
        printf("Infelizmente você não passou %s... sua média foi %.1f\n", nome, media);
    }
    return 0;
}