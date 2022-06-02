//Na linguagem C, para conseguirmos acessar o valor de uma variável global, dentro de uma função que possui uma variável local com mesmo nome,
//devemos usar a instrução extern (MANZANO, 2015). Veja no exemplo, que foi necessário criar uma nova variável chamada “b”,
//com um bloco de instruções (linhas 8 – 11), que atribui a nova variável o valor “externo” de x.

#include<stdio.h>

int x = 10;

int main(){
  int x = -1;
  int b;
  {
    extern int x;
    b = x;
  }
  printf("\n Valor de x = %d",x);
  printf("\n Valor de b (x global) = %d",b);
  return 0;
}
