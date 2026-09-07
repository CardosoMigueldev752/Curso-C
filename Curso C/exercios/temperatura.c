#include <stdio.h>

int main(){
    float celcius;
    printf("\n=== convertor de temperatura ===\nDigite a temperatura em Celsius :");
    scanf("%f", &celcius);
    float fahr = (celcius * 9/5) +32;
    printf("Temperatura equivalente em Fahrenheit: %.2f °F\n", fahr);

    return 0;
}