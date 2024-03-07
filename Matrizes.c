#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 10
#define titulo "Manipulacao de Matrizes\n\n"




int main(){
    int a[10][10],b[10][10];
    int c[10][10];
    int i,j,k,n,choice;
    void read_matrix(int a[N][N],int b[N][N],int n); // Função para ler as matrizes
    void menu(int a[N][N],int b[N][N],int c[N][N],int n); //Função para o menu
    
    printf(titulo);
    printf("Entre o tamanho da matriz quadrada: ");
    scanf("%d",&n);
    
    read_matrix(a,b,n);
    i=0;
    while(choice != 6) {
        menu(a,b,c,n);
        i++;
    }
    system("PAUSE");
    return 0;
}

void menu(int a[N][N],int b[N][N],int c[N][N],int n) {
	int i,j,k,choice;
    
	printf("Escolha uma das opcoes:\n");
    for(i=0;i<30;i++)
    printf("_");printf("\n\n");
        printf("1.ADICAO\n");
        printf("2.SUBTRACAO\n");
        printf("3.MULTIPLICACAO\n");
        printf("4.TRANSPOSTA DE A\n");
        printf("4.TRANSPOSTA DE B\n");
        printf("6.SAIR\n");
        
    for(i=0;i<30;i++)
    printf("_");printf("\n\n");
    
    scanf("%d",&choice);
    i=0;
    switch(choice) 
    {
        case 1:
			for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }

            system("cls");
            printf("A + B:\n");
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    printf("%d\t",c[i][j]);
                }
            printf("\n");
            }
            for(i=0;i<30;i++)
            printf("_");printf("\n\n");
            break;
            
        case 2:
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }

            system("cls");
            printf("A - B:\n");
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    printf("%d\t",c[i][j]);
                }
            printf("\n");
            }
            for(i=0;i<30;i++)
            printf("_");printf("\n\n");
            break;
            
        case 3:
            for(i=0;i<n;i++) {
                for( j=0;j<n;j++) {
                    for( k=0;k<n;k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    }                 
                }
            }

            system("cls");
            printf("A x B:\n");
            for( i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    printf("%d\t",c[i][j]);
                }
            printf("\n");
            }
            for(i=0;i<30;i++)
            printf("_");printf("\n\n");
            break;
            
        case 4:
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    c[i][j] = a[j][i];
                }
            }

            system("cls");
            printf("Transposta de A:\n");
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    printf("%d\t",c[i][j]);
                }
            printf("\n\n");
            }     	         
        
            break;
        
        case 5:
        	for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    c[i][j] = b[j][i];
                }
            }

            system("cls");
            printf("Transposta de B:\n");
            for(i=0;i<n;i++) {
                for(j=0;j<n;j++) {
                    printf("%d\t",c[i][j]);
                }
            printf("\n\n");
            }     	         
        
            break;
        default: exit(0);
        
        }
    }
    
void read_matrix(int a[N][N],int b[N][N],int n) {
    int i,j;
    printf("\nMatriz A:\n");
    printf("Insira os Valores:\n\n");
    
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatriz A\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    for(i=0;i<30;i++)
    printf("*");printf("\n\n");
    
    printf("\nMatriz B:\n");
    printf("Insira os Valores:\n\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMatriz B\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",b[i][j]);
            }
    printf("\n");
    }
    
    for(i=0;i<30;i++)
    printf("*");printf("\n\n");
    
}
