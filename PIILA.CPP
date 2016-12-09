#include<iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct elemento{
			char letra;
			struct elemento * sig;
			}nodo;


nodo * insertar(nodo * primero, char c)
{
nodo * nuevo;
nuevo=(nodo*)malloc(sizeof (nodo));
nuevo->letra=c;
if (nuevo!=NULL)
{
	if (primero==NULL)
		nuevo->sig=NULL;
	else
		nuevo->sig=primero;
}
return nuevo;
}

nodo * infija(nodo * primero){
nodo * nuevo;
nuevo=primero;
char exp[15];
cout<<"\n Escribe la expresion:";
cin>>exp;
for(int i=0;i<strlen(exp);i++){
nuevo=insertar(nuevo, exp[i]);
}

return nuevo;
}

nodo * prefija(nodo * primero){
nodo * nuevo;
nuevo=primero;
char exp[15];
cout<<"\n Escribe la expresion:";
cin>>exp;
for(int i=0;i<strlen(exp);i++){
if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
nuevo=insertar(nuevo, exp[i]);
}

for(int j=0;j<strlen(exp);j++){
if(exp[j]=='1' || exp[j]=='2' || exp[j]=='3' || exp[j]=='4'  || exp[j]=='5'  || exp[j]=='6' || exp[j]=='7' || exp[j]=='8' || exp[j]=='9' || exp[j]=='0')
nuevo=insertar(nuevo, exp[j]);
}

return nuevo;
}

nodo * posfija(nodo * primero){
nodo * nuevo;
nuevo=primero;
char exp[15];
cout<<"\n Escribe la expresion:";
cin>>exp;
for(int j=0;j<strlen(exp);j++){
if(exp[j]=='1' || exp[j]=='2' || exp[j]=='3' || exp[j]=='4'  || exp[j]=='5'  || exp[j]=='6' || exp[j]=='7' || exp[j]=='8' || exp[j]=='9' || exp[j]=='0')
nuevo=insertar(nuevo, exp[j]);
}


for(int i=0;i<strlen(exp);i++){
if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
nuevo=insertar(nuevo, exp[i]);
}

return nuevo;
}


void consulta (nodo * primero)
{
nodo *aux;
printf("\n Imprimo: \n");
	for(aux=primero;aux!=NULL;aux=aux->sig)
	cout<<" "<<aux->letra;
	getch();
}


void main()
{
int resp;
nodo * primero=NULL;
do
{
clrscr();
cout<<"\n1. Notacion Infija";
cout<<"\n2. Notacion Prefija";
cout<<"\n3. Notacion Posfija";
cout<<"\n4. consultar";
cout<<"\n5. salir";
cout<<"\nopcion:";

cin>>resp;
switch(resp)
	{

	case 1:
	primero=NULL;
	primero=infija(primero);break;
	case 2:
	primero=NULL;
	primero=prefija(primero);break;
	case 3:
	primero=NULL;
	primero=posfija(primero);break;
	case 4:consulta(primero);break;
	}
     }	 while(resp!=5);
}