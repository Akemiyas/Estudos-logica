#include <stdio.h>
 
int main() {
    int altura, base, area;
    printf("Digite o valor da base\n");
    scanf("%i", &base);
    printf("Digite o valor da altura\n");
    scanf("%i", &altura);
    area = base * altura;
    printf("A=%i\n", area);
    return 0;
}
