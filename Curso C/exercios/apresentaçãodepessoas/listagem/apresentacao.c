#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome1[100], nome2[100], nome3[100], sexo1[10], sexo2[10], sexo3[10];
    float nota1, nota2, nota3;

    
    printf("CADASTRE A PRIMEIRA PESSOA:\n-------------------------------------\n");
    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome1);
    printf("Digite seu sexo [M/F]: ");
    scanf("%s", sexo1);
    printf("Digite sua nota: ");
    scanf("%f", &nota1); 

    
    printf("\nCADASTRE A SEGUNDA PESSOA:\n-------------------------------------\n");
    printf("Digite o nome da segunda pessoa: ");
    scanf(" %[^\n]", nome2);
    printf("Digite seu sexo [M/F]: ");
    scanf("%s", sexo2);
    printf("Digite sua nota: ");
    scanf("%f", &nota2); 

    
    printf("\nCADASTRE A TERCEIRA PESSOA:\n-------------------------------------\n");
    printf("Digite o nome da terceira pessoa: ");
    scanf(" %[^\n]", nome3);
    printf("Digite seu sexo [M/F]: ");
    scanf("%s", sexo3);
    printf("Digite sua nota: ");
    scanf("%f", &nota3); 

    
    printf("\nLISTAGEM COMPLETA\n-------------------------------------\n");
    printf("NOME\t\t\tSEXO\tNOTA\n");
    printf("%-20s\t%s\t%.1f\n", nome1, sexo1, nota1);
    printf("%-20s\t%s\t%.1f\n", nome2, sexo2, nota2);
    printf("%-20s\t%s\t%.1f\n", nome3, sexo3, nota3);
    
    return 0;
}