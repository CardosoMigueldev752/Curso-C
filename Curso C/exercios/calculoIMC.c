#include <stdio.h>

int main(){
    float altura, peso;
    printf("\n\nDados do paciente\n");
    printf("Peso: ");
    scanf("%f", &peso);
    printf("Altura: ");
    scanf("%f", &altura);
    float IMC = peso / (altura * altura);
    printf("====================\n");
    printf("Peso\t%.2f\nAltura\t%.2f\n====================\nSeu IMC é %.2f\n\n", peso, altura, IMC);
    return 0;
}