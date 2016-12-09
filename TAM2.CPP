#include<stdio.h>
#include<conio.h>
#define TAM 10
 int valor [TAM];
 int cont=0,i,tempo,maximo;
 float suma=0, prom=0;
 char resp='s';
 void main ()

  {
   do
   {
    if(cont<TAM)
      {
       printf("Ingrese El Dato %d ",cont+1);
       scanf("%d",&valor[cont]);
      }
      else
       {
       printf("\n No Caben Mas Datos");
       break;
       }
       cont++;
       printf("\nDesea Ingresar Mas Datos? ");
       scanf("%c",&resp);
    }
    while (cont < TAM && resp!='n');
       printf("\n Ha Introducido %d Datos",cont);
       printf("\n Los Datos Leidos Son: ");
       for(i=0;i<cont;i++)
	  suma+=valor[i];
	  prom=suma/cont;
       printf("\n El Promedio De Los Numeros Es %.2f",prom);
       for(maximo=valor[0],i=1;i<cont;i++)
       if(valor[i]>maximo)
	  maximo=valor[i];
       printf("\n El Numero Maximo Es %d ",maximo);
getch();

   }
    