#include <stdio.h>

int main(){

    int numero1, numero2;
    printf("PEQUENA CALCULADORA\n");
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    int soma = numero1 + numero2;
    printf("O resultado da soma do numero %d + %d é igual a %d\n", numero1, numero2, soma);
    
    return 0; 
}