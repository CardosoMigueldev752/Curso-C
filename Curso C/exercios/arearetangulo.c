//Objetivo: Calcular a área usando base e altura.

#include <stdio.h>

int main (){
    float base, altura;
    printf("\n\n<<< Área de um retângulo >>>\n");
    printf("Digite a base do seu retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do seu retângulo: ");
    scanf("%f", &altura);
    float area = base * altura;
    printf("\n------ Calculo da area ----- ");
    printf("\nBase inserida: %.2f\nAltura inserida: %.2f\n>> Area: %.2fm\n\n", base, altura, area);
    return 0;
}