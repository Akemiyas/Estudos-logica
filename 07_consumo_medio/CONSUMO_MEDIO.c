
#include <stdio.h>

int main()
{
    int km;
    double litros, valor;
    scanf("%d", &km);
    scanf("%lf", &litros);
    valor = km/litros;
    printf("%.3lf km/l\n", valor);
    return 0;
}
