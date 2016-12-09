#include<iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct elemento1{
			char letra;
			struct elemento1 * sig;
			}nodo;
typedef struct elemento2{
			char letra;
			struct elemento2 * sig;
			}cola;
typedef struct elemento{
			char letra;
			struct elemento * sig;
			}lista;

nodo * insertarr(nodo * primero, char c)
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
nuevo=insertarr(nuevo, exp[i]);
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
nuevo=insertarr(nuevo, exp[i]);
}

for(int j=0;j<strlen(exp);j++){
if(exp[j]=='1' || exp[j]=='2' || exp[j]=='3' || exp[j]=='4'  || exp[j]=='5'  || exp[j]=='6' || exp[j]=='7' || exp[j]=='8' || exp[j]=='9' || exp[j]=='0')
nuevo=insertarr(nuevo, exp[j]);
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
nuevo=insertarr(nuevo, exp[j]);
}


for(int i=0;i<strlen(exp);i++){
if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
nuevo=insertarr(nuevo, exp[i]);
}

return nuevo;
} 


void imprime (nodo * primero)
{
nodo *aux;
printf("\n Imprimo: \n");
	for(aux=primero;aux!=NULL;aux=aux->sig)
	cout<<" "<<aux->letra;
	getch();
}


void pila()
{
int resp;
nodo * primero=NULL;
do
{
clrscr();
cout<<"\n **********PILAS**********";
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
	case 4:imprime(primero);break;
	}
     }	 while(resp!=5);
}

////Pilas

cola * inicio;

cola * inserta(cola * fin)
{
cola * nuevo;
char c;
nuevo=(cola*)malloc(sizeof (cola));
cout<<"\n Dame letra:"; cin>>c;
nuevo->letra=c;
if (inicio==NULL){
inicio=nuevo;
fin=nuevo;
}else{
fin->sig=nuevo;
fin=nuevo;
fin->sig=NULL;
}

return fin;
}

void  elimina (){
inicio=inicio->sig;
cout<<"\n Eliminado: \n ";
getch();
}

void consultar ()
{
cola *aux;
//printf("\n Imprimo %i: \n ",tam);
	for(aux=inicio;aux!=NULL;aux=aux->sig)
	cout <<" "<<aux->letra;
	getch();
}


void colas()
{
int resp=0;
int tam=0;
cola * fin=NULL;
do
{
clrscr();
cout<<"\n **********COLAS**********";
cout<<"\n1. Insertar";
cout<<"\n2. Eliminar";
cout<<"\n3. consultar";
cout<<"\n4. salir";
cout<<"\n opcion:";
cin>>resp;
switch(resp)
	{
	case 1:
	if(tam<15){
	fin=inserta(fin);
	tam++;
	}else{
	cout<<"\n Ya esta llena la lista";
	}
	break;
	case 2:
	if(tam>=1){
	elimina();
	tam--;
	}else{
	cout<<"\n Ya esta vacia la lista";
	}
	break;
	case 3:consultar();break;
	case 4:break;
	default:
	cout<<"\n No hay esa opcion";
	break;
	}
     }	 while(resp!=4);
}
//Colas

lista * ini;

lista * insertar(lista * fin)
{
lista * nuevo;
char c;
nuevo=(lista*)malloc(sizeof (lista));
cout<<"\n Dame letra:"; cin>>c;
nuevo->letra=c;
nuevo->sig=fin;
if (ini==NULL){
ini=nuevo;
}else{
fin=nuevo;
}

return nuevo;
}

lista * eliminar (lista * fin){
fin=fin->sig;
cout<<"\n Eliminado: \n ";
getch();
return fin;
}

void consulta (lista * fin)
{
lista *aux;
//printf("\n Imprimo %i: \n ",tam);
	for(aux=fin;aux!=NULL;aux=aux->sig)
	cout <<"%c- "<<aux->letra;
	getch();
}


void listas()
{
int resp=0;
int tam=0;
lista * fin=NULL;
do
{
clrscr();
cout<<"\n **********LISTAS**********";
cout<<"\n1. Insertar";
cout<<"\n2. Eliminar";
cout<<"\n3. consultar";
cout<<"\n4. salir";
cout<<"\n opcion:"; 
cin>>resp;
switch(resp)
	{
	case 1:
	if(tam<15){
	fin=insertar(fin);
	tam++;
	}else{
	cout<<"\n Ya esta llena la lista";
	}
	break;
	case 2:
	if(tam>=1){
	fin=eliminar(fin);
	tam--;
	}else{
	cout<<"\n Ya esta vacia la lista";
	}
	break;
	case 3:consulta(fin);break;
	case 4:break;
	default:
	cout<<"\n No hay esa opcion";
	break;
	}
     }	 while(resp!=4);
}
//Lista


void main()
{
int resp=0;
do
{
clrscr();
cout<<"\n1.Pilas";
cout<<"\n2. Colas";
cout<<"\n3. Listas";
cout<<"\n4. salir";
cout<<"\n opcion:";
cin>>resp;
switch(resp)
	{
	case 1:pila();
	break;
	case 2:colas();
	break;
	case 3:listas();
	break;
	case 4:break;
	default:
	cout<<"\n No hay esa opcion";
	break;
	}
     }	 while(resp!=4);
}
//Lista