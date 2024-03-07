#include <stdio.h>
#include <stdlib.h>
#define TEXTO "MINHAS CARACTERISTICAS"

int main(){
	printf("%s\n\n", TEXTO);
	
	char nome[50];
	float altura;
	int idade;
	
	printf("Digite o seu nome: ");
	scanf("%s", nome);
	
	printf("Digite sua altura (em metros): ");
	scanf("%f", &altura);
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("Nome: %s\n", nome);
	printf("idade: %d\n", idade);
	printf("Altura: %f\n", altura);
	
	return 0;
}
