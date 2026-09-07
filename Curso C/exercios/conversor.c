#include <stdio.h>

int main(){
    float dolar;
    printf("\n---- Conversor de moedas ----\n");
    printf("Digite o valor em dolares para virar reais: ");
    scanf("%f", &dolar);
    float real = dolar * 5.10;
    printf("%.2f dolares em dolares equivale a R$%.2f\n\n", dolar, real);

    return 0;
}