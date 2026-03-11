#include <stdio.h>

int main()
{
    int anos, dias, meses_restantes, resto, dias_restantes;
    scanf("%d", &dias);
    anos = dias/365;
    resto = dias%365;
    meses_restantes = resto/30;
    dias_restantes = resto%30;
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses_restantes);
    printf("%d dia(s)\n", dias_restantes);
    return 0;
}