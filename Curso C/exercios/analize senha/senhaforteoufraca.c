#include <stdio.h>

int main(){
    int senha;
    printf("\n<<< Analisador de senha forte >>>\nDigite a sua senha: ");
    scanf("%d", &senha);
    if(senha<=12){
        printf("Senha forte!\n");
    } else {
        printf("Atenção, sua senha está fraca! Ela tem menos de 12 caracteres!\n ");
    }


    return 0;
}