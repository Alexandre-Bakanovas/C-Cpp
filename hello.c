#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100];
    printf("Digite o seu nome: ");
    scanf("%99s", nome);
    printf("Nome digitado: %s\n", nome);
    return 0;
}