#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iomanip.h>
#include <iostream.h>


class Alumno

{

private:

int Pila[10],Top,Max;
char Pila1[10][10];

public:

Alumno()
{
int i,j;
char Nulo[2]=" ";
Max=9;
Top=-1;
for(i=1;i<9;i++)
{
Pila[i]=0;
strcpy(Pila1[i],Nulo);
}
}

void Push(char Elem[10])
{
if(Top!=Max)
{
Top++;
strcpy(Pila1[Top],Elem);
}
else
cout<<"Pila Llena"<<endl;
}

void Push(int Elem)
{
if(Top!=Max)
{
Top++;
Pila[Top]=Elem;
}
else
cout<<"Pila Llena"<<endl;
}

void Push(float Elem)
{
if(Top!=Max)
{
Top++;
Pila[Top]=Elem;
}
else
cout<<"Pila Llena"<<endl;
}

void Push(double Elem)
{
if(Top!=Max)
{
Top++;
Pila[Top]=Elem;
}
else
cout<<"Pila Llena"<<endl;
}

void Pop(void)
{
if(Top!=-1)
{
cout<<"Sacando el Dato: "<<Pila[Top];
Top--;
}
else
cout<<"Pila Vacia... Imposible Eliminar"<<endl;
}

void Recorrido(void)
{
if(Top!=-1)
for(int i=Top;i!=-1;i--)
cout<<Pila[i]<<endl;
else
cout<<"Pila Vacia...";
}

void Busqueda(char Elem[10])
{
for(int i=Top;i!=-1;i--)
if((strcmp(Elem,Pila1[i]))==0)
{
cout<<"Dato "<<Pila1[i]<<" encontrado..."<<endl;
return;
}
cout<<"Dato no encontrado..."<<endl;
}

void Busqueda(int Elem)
{
for(int i=Top;i!=-1;i--)
if(Elem==Pila[i])
{
cout<<"Dato "<<Pila[i]<<" encontrado..."<<endl;
return;
}

cout<<"Dato no encontrado..."<<endl;
}
void Busqueda(float Elem)
{
for(int i=Top;i!=-1;i--)
if(Elem==Pila[i])
{
cout<<"Dato "<<Pila[i]<<" encontrado..."<<endl;
return;
}
cout<<"Dato no encontrado..."<<endl;
}

void Busqueda(double Elem)
{
for(int i=Top;i!=-1;i--)
if(Elem==Pila[i])
{
cout<<"Dato "<<Pila[i]<<" encontrado..."<<endl;
return;
}
cout<<"Dato no encontrado..."<<endl;
}

void Borrar(char Elem[10])
{
char Temp[10][10];
int i=0,j=Top;
if(Top==-1)
{
cout<<"Pila Vacia... Imposible Eliminar...";
return;
}
while(j!=-1)
{
if((strcmp(Elem,Pila1[j]))==0)
{
cout<<"Dato Eliminado...";
for(i--;i!=-1;j++,i--)
strcpy(Pila1[j],Temp[i]);
Top--;
return;
}
else
{
strcpy(Temp[i],Pila1[j]);
i++;
j--;
}
}
cout<<"Dato no encontrado... Imposible Eliminar...";
return;
}

void Borrar(int Elem)
{
int Temp[10],i=0,j=Top;
if(Top==-1)
{
cout<<"Pila Vacia... Imposible Eliminar...";
return;
}
while(j!=-1)
{
if(Elem==Pila[j])
{
cout<<"Dato Eliminado...";
for(i--;i!=-1;j++,i--)
Pila[j]=Temp[i];
Top--;
return;
}
else
{
Temp[i]=Pila[j];
i++;
j--;
}
}
cout<<"Dato no encontrado... Imposible Eliminar...";
return;
}
void Borrar(float Elem)
{
int Temp[10],i=0,j=Top;
if(Top==-1)
{
cout<<"Pila Vacia... Imposible Eliminar...";
return;
}
while(j!=-1)
{
if(Elem==Pila[j])
{
cout<<"Dato Eliminado...";
for(i--;i!=-1;j++,i--)
Pila[j]=Temp[i];
Top--;
return;
}
else
{
Temp[i]=Pila[j];
i++;
j--;
}
}
cout<<"Dato no encontrado... Imposible Eliminar...";
return;
}

void Borrar(double Elem)
{
int Temp[10],i=0,j=Top;
if(Top==-1)
{
cout<<"Pila Vacia... Imposible Eliminar...";
return;
}
while(j!=-1)
{
if(Elem==Pila[j])
{
cout<<"Dato Eliminado...";
for(i--;i!=-1;j++,i--)
Pila[j]=Temp[i];
Top--;
return;
}
else
{
Temp[i]=Pila[j];
i++;
j--;
}
}
cout<<"Dato no encontrado... Imposible Eliminar...";
return;
}
}tec;

main()
{
int res,op=0;
while(op!=6)
{
clrscr();
cout<<"\n1) Recorrido\n2) Busqueda\n3) Push\n4) Pop\n5) Eliminar un Dato\n6) Salir"<<endl;
gotoxy(1,1);
cout<<"Que deseas hacer?: ";
cin>>op;
gotoxy(1,10);
switch (op)
{
case 1:
tec.Recorrido();
break;
case 2:
cout<<"Que Numero deseas buscar?"<<endl;
cin>>res;
tec.Busqueda(res);
break;
case 3:
cout<<"Que Numero quieres Insertar?"<<endl;
cin>>res;
tec.Push(res);
break;
case 4:
tec.Pop();
break;
case 5:
cout<<"Que Numero deseas eliminar?"<<endl;
cin>>res;
tec.Borrar(res);
break;
case 6:
cout<<"Salida...";
break;
default:
cout<<"Opcion Erronea"<<endl;
break;
}
getch();
return 0;
}
}
