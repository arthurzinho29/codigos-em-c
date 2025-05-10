#include <stdio.h>

int main(){

char nome[100];

printf("Digite o seu nome: ");
scanf("%99s",&nome);

printf("Seu nome e: %s",nome);

printf("Seu nickname no jogo vai ser: %s",nome);

return 0;
}
