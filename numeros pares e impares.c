#include <stdio.h>

int main(){
	int num1;
	printf("Digite um numero inteiro nao negativo");
	scanf("%d", &num1);
	if (num1 %2 ==0){
		printf("numero eh par");
	}else{
		printf("numero eh impar");
	}
}
