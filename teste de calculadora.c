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
	
	printf("Digite o primeiro n�mero da conta: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo n�mero da conta: ");
	scanf("%d", &n2);
	
	printf("Digite um n�mero para a base da pot�ncia: ");
	scanf("%d", &n3);
	
	printf("Digite um n�mero para o expoente da pot�ncia: ");
	scanf("%d", &n4);
	
	printf("Digite um n�mero para achar a raiz quadrada: ");
	scanf("1f", &n5);
	
	aux1 = n1 + n2;
	
	printf("O resultado da soma �: ", aux1);
	
	aux2 = n1 - n2;
	
	printf("O resultado da diferen�a �: ", aux2);
	
	aux3 = (n1 * n2);
	
	printf("O resultado da multiplica��o �: ", aux3);
	
	aux4 = (n1 / n2);
	
	printf("O resultado da divis�o �: ", aux4);
	
	printf("O resultado da pot�ncia �: ", pow(n3, n4));
	
	printf("A raiz quadrada de %.2f � igual a %.2f\n: ", n5, sqrt (n5));
	
	return 0;
}
