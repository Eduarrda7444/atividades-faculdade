#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 

    char *frase;
    char buffer[30];

    frase = (char *) malloc(101 * sizeof(char));
    printf("Digite uma frase (máximo 100 caracteres): ");
    scanf("%[^\n]", frase);

    if (strlen(frase) <= sizeof(buffer)) {
        printf("Mensagem enviada!\n");
        strcpy(buffer, frase);
        printf("Mensagem alocada no buffer: %s\n", buffer);
        free(frase);
        frase = NULL;
        buffer[0] = '\0';
    } else {
        printf("A frase não foi enviada!\n");
        free(frase);
        frase = NULL;
        buffer[0] = '\0';
    }


    return 0; 
}


