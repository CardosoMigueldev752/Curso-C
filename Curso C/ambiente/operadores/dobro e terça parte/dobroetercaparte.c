#include <stdio.h>

int main(){
    int numero;
    printf("\n\n<<< DOBRO e TERÇA PARTE >>>\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    int dobro = numero *2;
    float tercaparte = numero /3;
    printf("\nAnalizando o numero %d, o seu dobro é %d e a sua terça parte é %.2f\n\n\n", numero, dobro, tercaparte);
    return 0;
}