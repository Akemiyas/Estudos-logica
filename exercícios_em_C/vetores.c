#include <stdio.h>

int main()
{
    int v[5];
    int i, contador=0;
    float m, soma;
    for(i=0; i<5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
        contador++;
    }
    m = soma/contador;
    printf("Média: %.2f\n", m);
    return 0;