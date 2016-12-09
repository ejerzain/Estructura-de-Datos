//Generar una matriz
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
	int a[6][6];
	clrscr();
	printf("\n");
	//generar;
	for(int f=0;f<6;f++)
	  for(int c=0;c<6;c++){
	    a[f][c]=random(100);
	 }
	//imprimir;
	for(int f1=0;f1<6;f1++)
	   {
	    for(int c=0;c<6;c++){
		printf("\t %d",a[f1][c]);
	       }
	    printf("\n");
	   }

	

double promd=0;
	//Promedio diagonal
	for(int d=0;d<6;d++){
	promd+=a[d][5-d];
	}
promd=promd/6;

int mayor=0;
if(a[0][0]>mayor){
mayor=a[0][0];
}
if(a[0][5]>mayor){
mayor=a[0][5];
}
if(a[5][0]>mayor){
mayor=a[5][0];
}
if(a[5][5]>mayor){
mayor=a[5][5];
}
	//imprimir

	    printf("\n El promedio de la diagonal es:%f",promd);
	    printf("\n El mayor es:%i",mayor);

	getch();
}