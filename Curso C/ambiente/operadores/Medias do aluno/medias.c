#include <stdio.h>

int main(){
    float nota1, nota2;
    char nome[100];
    printf("\n<<< MEDIA DO ALUNO >>>\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/2;
    printf("O aluno %s tirou notas %.1f e %.1f e sua média foi: %.1f\n\n",nome,nota1,nota2,media);
    return 0;
}