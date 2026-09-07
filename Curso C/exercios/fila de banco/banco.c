#include <stdio.h>

int main(){
    int nascimento, anoatual=2026;
    printf("\n\nEXOO3>>Fila de banco<<\nEm que ano você nasceu? ");
    scanf("%d", &nascimento);
    int anos = anoatual - nascimento;
    if(anos>=65){
        printf("--------------------------------\nVocê tem %d anos certo?\nSeja bem-vindo(a) ao banco Estudonauta!\n=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL! ===\n--------------------------------", anos);
    } else{
        printf("--------------------------------\nVocê tem %d anos certo?\nSeja bem-vindo(a) ao banco Estudonauta!\n--------------------------------", anos);
    }
    
    return 0;
}