#include<stdio.h>

int testar(){
    int x = 10;
    return x;
}
int main(){
    int x = 20;
    printf("\n Valor de x na função main() = %d", x);
    printf("\n Valor de x na função testar() = %d", testar());

    return 0;
}


//No exemplo, há duas variáveis chamadas “x”, mas isso não acarreta erro, pois mesmo as variáveis tendo o mesmo nome elas são definidas em lugares diferentes, uma está dentro da função main() e outra dentro da testar()
//e cada função terá seu espaço na memória de forma independente.
//Na memória, as variáveis são localizadas pelo seu endereço,
//portanto mesmo sendo declaradas com o mesmo nome, seus endereços são distintos.

//No exemplo anterior, ambas as variáveis são locais.


//Sua inclusão é feita após a biblioteca de entrada e saída padrão. Na função principal não foi definida nenhuma variável com o nome de “x” e mesmo assim pode ser impresso seu valor na linha 10, pois é acessado o valor da variável global.
//Já na linha 12 é impresso o valor da variável global modificado pela função testar(), que retorna o dobro do valor.
