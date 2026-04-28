#include <stdio.h>

int main(){
    char nome[50];
    int idade, ID=0, pacientes, cadastrados;
    float altura;
    printf("SISTEMA DE CADASTRO DE PACIENTES\n");
    printf("Quantos pacientes serão cadastrados?\n");
    int resultado = scanf("%d", &pacientes);
    printf("(Log do Sistema: o scanf retornou %d)\n\n", resultado);
    cadastrados = 0;
    for(cadastrados; pacientes > cadastrados; cadastrados++){
    ID++;
    printf("Por favor preencha alguns dados essenciais.\n Qual é o nome do paciente?\n");
    scanf(" %[^\n]s", nome);
    printf("Idade e altura\n");
    scanf("%d %f", &idade, &altura);
    printf("O paciente %s de %d anos, com %.2f de altura receberá o ID %d\n\n", nome, idade, altura, ID);
    //printf("Digite o seu ID para a verificação dos dados\n");
    //scanf("%d", &ID);
    
    }
    return 0;
}