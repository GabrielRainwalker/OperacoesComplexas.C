#include <stdio.h>

int main(){
	int nota1, nota2, nota3,resultado;
	printf("Digite a primeira nota");
	scanf("%d", &nota1);
	printf("Digite a segunda nota");
	scanf("%d", &nota2);
	printf("Digite a terceira nota");
	scanf("%d", &nota3);
	resultado=(nota1+nota2+nota3)/3;
	printf("a media aritmetica eh: %d\n", resultado);
	if (resultado && resultado >7){
		printf("APROVADO");
		}else{
			printf("REPROVADO");
		}
	}
