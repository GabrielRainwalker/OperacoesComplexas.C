#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PI "3.141592"


int main(){
	setlocale(LC_ALL, "Portuguese");
	double num1;
	
	printf("Digite um numero para calcular a raiz quadrada");
	scanf("%lf", &num1);
	printf("a raiz quadrada de %.2f é igual a %.2f\n", num1, sqrt(num1));
	
	return 0;
}
