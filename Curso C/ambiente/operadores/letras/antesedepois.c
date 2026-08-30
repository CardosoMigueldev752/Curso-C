#include <stdio.h>

int main(){
    char letra;
    
    printf("\n\n\n<<<<< ANTECESSOR e SUCESSOR >>>>>\n");
    printf("Digite uma letra: ");
    scanf(" %c", &letra); 
    
    char antecessor = letra - 1;
    char sucessor = letra + 1;
    
    printf("Analisando a letra '%c', seu antecessor é '%c' e o seu sucessor é '%c'\n\n\n", letra, antecessor, sucessor);
    
    return 0;
}