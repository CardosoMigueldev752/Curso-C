#include <stdio.h>

int main(){
    int valor;
    printf("\n\nEX002>>> Consumidor ganha desconto >>>\n Qual foi o valor total das compras? ");
    scanf("%d", &valor);
    int desconto = valor - 80.0;
    if(valor<=500){
        printf("-----------------------\nVocê comprou R$ %d no nosso mercado.", valor);
    } else{
        printf("O cliente comprou R$ %d no nosso mercado, como o preço ultrapassou 500 reais ele receberá um desconto de R$ 80.00!\n O preço total foi de %d",valor, desconto);
    }
    printf("\nVolte sempre!\n\n");
    return 0;
}