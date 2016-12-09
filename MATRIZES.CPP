//Generar una matriz
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[3][3];
	system("cls");
	printf("\n");
	//generar;
	for(int f=0;f<3;f++)
	  for(int c=0;c<3;c++){
	    printf("\n Dame numero:"); scanf("%d",&a[f][c]);
	 }
	//imprimir;
	for(int f1=0;f1<3;f1++)
	   {
	    for(int c=0;c<3;c++){
		printf("\t %d",a[f1][c]);
	       }
	    printf("\n");
	   }

	//mayor
	int m=-1;
	for(int f2=0;f2<3;f2++)
	  for(int c1=0;c1<3;c1++)
	    if(a[f2][c1]>m)
		m=a[f2][c1];
	printf("\n El mayor es:%d",m);

	printf("\n\n");
	//ordenar
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

	//imprimir
	for(int f0=0;f0<3;f0++)
	   {
	    for(int c=0;c<3;c++){
		printf("\t %d",a[f0][c]);
	       }
	    printf("\n");
	   }
	getch();
}
