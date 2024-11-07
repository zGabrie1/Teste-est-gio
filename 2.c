#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    
    // Solicita a entrada da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Usa fgets para evitar problemas com o buffer

    // Percorre a string e conta as ocorrências de 'a' e 'A'
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    // Exibe o resultado
    if (count > 0) {
        printf("A letra 'a' aparece %d vez(es).\n", count);
    } else {
        printf("A letra 'a' não foi encontrada.\n");
    }

    return 0;
}
