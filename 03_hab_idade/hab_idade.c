#include <stdio.h>

int main()
{
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade >=18) {
        //"caminho do verdadeiro"
        printf("Pode tirar a habilitação\n");
    }
    else { 
        //"caminho do falso"
        printf("Não pode tirar a habilitação\n");
    }
    return 0;
}