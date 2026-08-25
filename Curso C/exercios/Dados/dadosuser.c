#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[100];
    int idade;
    float peso;

    printf("Qual é o seu nome? ");
    scanf("%[^\n]", nome); 
    
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual é o seu peso(Kg)? ");
    scanf("%f", &peso);
    
    printf("-------------<<<PROCESSANDO>>>-------------\n");
    printf("Muito prazer %s! Você tem %d anos e %.2f kilos, correto?\n\n\n", nome, idade, peso);

    return 0;
}