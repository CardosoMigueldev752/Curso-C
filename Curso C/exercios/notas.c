#include <stdio.h>

int main(){
    float nota1, nota2;
    printf("\n==== Sistema academico ====\nDigite a sua nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/2;
    printf("A media do aluno foi: %.2f\n\n", media);
    return 0;
}