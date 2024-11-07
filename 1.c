#include<stdio.h>
#include <stdlib.h>

/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e 
o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um 
programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem 
avisando se o número informado pertence ou não a sequência.
*/

int qPf(int a) {

}

int main() {
    int n, a, b, R;

    // Inicializa o vetor com dois elementos {0, 1}
    int *vetor = malloc(2 * sizeof(int));
    if (vetor == NULL) {
        fprintf(stderr, "Erro ao alocar memoria\n");
        return 1;
    }

    vetor[0] = 0;
    vetor[1] = 1;

   
    int tamanho_atual = 2; // O vetor já possui 2 elementos
    int i = 2; // Contador para as posições

    scanf("%d", &n); // Número fornecido pelo usuário

    while (vetor[i-1] < n) {
        i++;
        tamanho_atual++;
        vetor = realloc(vetor, tamanho_atual * sizeof(int)); // Ajustando o tamanho do vetor a cada iteração
        vetor[i-1] = vetor[i-3] + vetor[i - 2];
    }

    // Verificando se o npumero fornecido está na sequência
    for(int i=0; i<tamanho_atual; i++) {
        if(vetor[i] == n) R = 1;
        else R = 0;
    }

    if(R == 1) printf("O numero informado pertence a sequencia!");
    else printf("O numero informado NAO pertence a sequencia!");

    
}