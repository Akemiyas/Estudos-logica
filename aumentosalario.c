#include <stdio.h>

int main()
{
    double salario, novoSalario, reajuste;
    int percentual;
    scanf("%lf", &salario);
    
    if(salario >= 0 && salario <= 400.00){
        percentual = 15;
        novoSalario = salario * 1.15;
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);
    } 
    else if(salario > 400.00 && salario <= 800.00){
        percentual = 12;
        novoSalario = salario * 1.12;
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);
    }
    else if(salario > 800.00 && salario <= 1200.00){
        percentual = 10;
        novoSalario = salario * 1.10;
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);    
    }
    else if(salario > 1200.00 && salario <= 2000.00){
        percentual = 7;
        novoSalario = salario * 1.07;
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);
    }
    else {
        percentual = 4;
        novoSalario = salario * 1.04;
        reajuste = novoSalario - salario;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", novoSalario, reajuste, percentual);
    }
    return 0;
}