Algoritmo "salario"
// Descrição   : Calcula o salário do funcionário
// Autor(a)    : Yasmim Akemi Estevão Pedrosa
// Data atual  : 07/03/2026
Var
 numero: inteiro
 salario: real
 horas: inteiro
 valor_hora: real
Inicio
 escreva("Digite o número do funcionário")
 leia(numero)
 escreval("Digite a quantidade de horas trabalhadas")
 leia(horas)
 escreval("Digite o valor acordado por hora")
 leia(valor_hora)
 salario <- horas * valor_hora
 escreva("O salário do funcionário número", numero, " é R$", salario:1:2)

Fimalgoritmo