Algoritmo "habilitacao_idade"
// Descrição   : Verifica se, a partir da idade, pode-se tirar habilitação
// Autor(a)    : Yasmim Akemi Estevão Pedrosa
// Data atual  : 07/03/2026
Var
 idade: inteiro

Inicio
  escreva("Digite a sua idade:")
  leia (idade)
  Se(idade >=18) entao    //o "se" sempre precisa do "entao"
  escreval("Pode tirar habilitação")
  senao                   //"senao" é o caminho do "não"
  escreva("Não pode tirar habilitação")
  fimse //no visualg, você precisa avisar onde a decisão termina.

Fimalgoritmo