#include<stdio.h>

int* gerarRandomico() {

    static int r[10];
    int a;

    for(a = 0; a < 10; a++) {
        r[a] = rand() % 100;
        printf("\nr[%d] = %d", a, r[a]);
    }
    return r;
}

int main(){

   int *p;
   int i;

   p = gerarRandomico();

   for ( i = 0; i < 10; i++ ) {
      printf("\np[%d] = %d", i, p[i]);
   }
   return 0;
}


//Uma função pode retornar um número inteiro, um real e um caractere, assim como também pode retornar um vetor. Para isso,
//devemos utilizar ponteiros (ou apontador). A única forma de retornar um vetor é por meio de um ponteiro,
//pois não é possível criar funções como por exemplo, int[10] calcular(), onde int[10] quer dizer que a função retorna um vetor com 10 posições
//um exemplo de uso desse recurso através de uma função, que cria um vetor de dez posições e os preenche com valores aleatórios, imprime os valores, e posteriormente passa esse vetor para “quem” chamar a função.
