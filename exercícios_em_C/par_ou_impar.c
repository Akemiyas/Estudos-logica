#include <stdio.h>

int main()
{
    int numero, verificacao;
    scanf("%d", &numero);
    verificacao = numero%2; 
    if(verificacao == 0){
        printf("O número %d é par\n", numero);
    }
    else {  
    printf("O número %d é ímpar\n", numero);
    }
    return 0;
}