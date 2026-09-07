#include <stdio.h>

int main(){
    float nota1, nota2;
    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);
    float media = (nota1+nota2) /2;
    if (media<=7){
        printf("Parabéns! A sua média final foi: %.1f", media);
    }else{
        printf("A sua média foi %.1f", media);
    }
    return 0;
} 