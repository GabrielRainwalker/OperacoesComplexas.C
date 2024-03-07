#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI "3.14"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	double n3;
	double n4;
	double n5;
	int aux1;
	int aux2;
	int aux3;
	int aux4;
	double aux5;
	
	printf("Digite o primeiro número da conta: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número da conta: ");
	scanf("%d", &n2);
	
	printf("Digite um número para a base da potência: ");
	scanf("%d", &n3);
	
	printf("Digite um número para o expoente da potência: ");
	scanf("%d", &n4);
	
	printf("Digite um número para achar a raiz quadrada: ");
	scanf("1f", &n5);
	
	aux1 = n1 + n2;
	
	printf("O resultado da soma é: ", aux1);
	
	aux2 = n1 - n2;
	
	printf("O resultado da diferença é: ", aux2);
	
	aux3 = (n1 * n2);
	
	printf("O resultado da multiplicação é: ", aux3);
	
	aux4 = (n1 / n2);
	
	printf("O resultado da divisão é: ", aux4);
	
	printf("O resultado da potência é: ", pow(n3, n4));
	
	printf("A raiz quadrada de %.2f é igual a %.2f\n: ", n5, sqrt (n5));
	
	return 0;
}
