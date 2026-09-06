#include <stdio.h>

int main(){
    int numero;
    printf("\n\nDigite um numero: ");
    fflush(stdin);
    scanf("%d", &numero);
    if(numero%2==0){
        printf("O numero %d é PAR\n",numero);
    } else{
        printf("O numero %d é ÍMPAR",numero);
    }
    printf("ACABOU!\n");
    return 0;
}