#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, media;
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    if(media >= 5){
        printf("Média final = %d\nAprovado!\n", media);
    }
    else {  
    printf("Média final = %d\nRecuperação.\n", media);
    }
    return 0;
}