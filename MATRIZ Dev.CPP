//Generar una matriz
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void imprimir(int a[][3])
{

	for(int f=0;f<3;f++)
	   {
	    for(int c=0;c<3;c++){
		printf("\t %d",a[f][c]);
	       } 
	    printf("\n");
	   }
}

void mayor(int a[][3])
{
int m=-1;
	for(int f=0;f<3;f++)
	  for(int c=0;c<3;c++)
	    if(a[f][c]>m)
		m=a[f][c];

 printf("\n Mayor: %d",m);
}

void generar(int a[][3])
{
	for(int f=0;f<3;f++)
	  for(int c=0;c<3;c++){
	    printf("Ingrese Valor: "); scanf("%d",&a[f][c]);  }
	    printf("\n"); 
}

void ordenar(int a[][3]){
int aux=0;
	for(int i=0;i<8;i++){
		for(int r=0;r<=2;r++){
		for(int c=0;c<=1;c++){
			if(a[r][c]<a[r][c+1]){
				aux=a[r][c];
				a[r][c]=a[r][c+1];
				a[r][c+1]=aux;
			}
		}
		if(r<2){
			if(a[r][2]<a[r+1][0]){
			aux=a[r][2];
			a[r][2]=a[r+1][0];
			a[r+1][0]=aux;
			}
		}
		}
	}
}

int main()
{
	int a[3][3];
	system("cls");
	printf("\n");
	generar(a);
	imprimir(a);
	mayor(a);
	printf("\n\n");
	ordenar(a);
	imprimir(a);
	getch();
}
