#include <stdio.h>

int main() {
    int numero, hora; //variáveis de números inteiros 
    double valor_hora, salario; //váriaveis de números reais
    scanf("%d", &numero); //tipo: inteiro, no local numero
    scanf("%d", &hora); //tipo: inteiro, no local hora
    scanf("%lf", &valor_hora); //tipo: real, no local valor_hora
    salario = hora * valor_hora; //calculo do salário: horas trabalhadas * valor por hora 
    printf("NUMBER = %d\n", numero); //Number=número, no caso o número do funcionário
    printf("SALARY = U$ %.2f\n", salario); //Salary=salário, no caso em dólar.
     return 0;
}