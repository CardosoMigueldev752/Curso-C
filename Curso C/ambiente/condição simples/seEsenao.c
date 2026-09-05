#include <stdio.h>

int main(){
    float velocidade;
    printf("\n\n>>> Multar ou Não? <<<\n");
    printf("Digite a velocidade da corrida: ");
    scanf("%f", &velocidade);
    if(velocidade>80){
        printf("Multado!");
    }
    else{
        printf("Pode seguir viagem");
    }
    printf(", se beber não dirija\n\n");
    return 0;
}