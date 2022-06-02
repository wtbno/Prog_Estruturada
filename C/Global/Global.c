#include<stdio.h>

float t1, t2;

float calcularMedia(){
    return (t1 + t2) / 2;
}
int main() {
    printf("\nDigite as duas temperaturas: ");
    scanf("%f %f", &t1, &t2);
    printf("\nA temperatura média é %.2f ºC", calcularMedia());

    return 0;
}


//Vamos ver um exemplo de utilização do escopo global de uma variável, um programa que calcula a média entre duas temperaturas distintas.
// Na linha 2 foram declaradas duas variáveis. O programa inicia a execução na linha 8. Na 9 é solicitado ao usuário digitar duas temperaturas, as quais são armazenadas dentro das variáveis globais criadas. 
//Na linha 11 a função calcularMedia()é invocada para fazer o cálculo da média usando os valores das variáveis globais.
