#include <stdio.h>

int main()
{
    float altura, base, area;
    printf("Qual é a altura do triângulo?");
    scanf("%f", &altura);
    printf("Qual é a base do triângulo?");
    scanf("%f", &base);
    area = (altura * base)/2;
    printf("Area: %.2f\n", area);
    return 0;
}