#include <stdio.h>

int main(){
    int numero;
    printf("\n\n\n<<<<< ANTECESSOR e SUCESSOR >>>>>\n");
    printf("Digite um numero(sem ser com virgulas): ");
    scanf("%d", &numero);
    int antecessor = numero - 1;
    int sucessor = numero + 1;
    printf("Analisando o numero %d, seu antecessor é %d e o seu sucessor é %d\n\n\n", numero, antecessor, sucessor);
    return 0;
}