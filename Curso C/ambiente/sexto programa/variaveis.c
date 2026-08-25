#include <stdio.h>

int main(){
    int idade = 10;
    float media = 9.2;
    char nome[] = "mariana";
    
    int idade2 = 13;
    float media2 = 8.7;
    char nome2[] = "gabriel";


    printf("------------------------------------------------------------------\n%s\t=\tNota prova final: %d Media final: %.2f\n\n", nome, idade, media);
    
    printf("-----------------------------------------------------------------\n%s\t=\tNota prova final: %d\tMedia final: %.2f\n\n", nome2, idade2, media2);
    printf("-----------------------------------------------------------------\n\n");
    return 0;
}
