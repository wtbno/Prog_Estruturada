#include <stdio.h>
#include <stdlib.h>

//nomeda função (aqui é as var e seguido de seu nome)
//seguido essa var pode ser utilizado no corpo da função

void converterDolar(float dolar);//prototipo da função
//é possível passar mais parametros dentro da função, separando por virg. e indicar o tipo de dado seguido da var
void converterDolar(float dolar) {
  float real = dolar*4.73;
  printf("%.1f dolares é igual a %1.f reais \n\n", dolar, real );

}

//Função principal
int main() {
  converterDolar(900);//varialvel(parametros)
  return 0;
}







//Ao definir uma função, pode-se também estabelecer que ela receberá informações “de quem” a invocou, ou seja, “quem chamar” a função deve informar os valores, sobre os quais o cálculo será efetuado.
// Ao criar uma função que recebe parâmetros é preciso especificar qual o tipo de valor que será recebido.
// Uma função pode receber parâmetros na forma de valor ou de referência

// Veja a seguir, a sintaxe utilizada:
//
// <tipo de retorno> <nome> (<parâmetros>) {
//    <Comandos da função>
//    <Retorno> (não obrigatório)
// }
