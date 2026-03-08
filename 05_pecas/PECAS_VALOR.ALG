Algoritmo "pecas_valor"
// Descrição   : Calcula o valor a pagar em duas peças
// Autor(a)    : Yasmim Akemi Estevão Pedrosa
// Data atual  : 08/03/2026
Var
   cod1, q1, cod2, q2: inteiro
   v1, v2, total: real
Inicio
   leia(cod1, q1, v1)
   leia(cod2, q2, v2)
   total <- (q1 * v1) + (q2 * v2)
   escreval("VALOR A PAGAR: R$ ", total:1:2)
Fimalgoritmo