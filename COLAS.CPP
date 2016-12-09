#include <stdio.h>
#include <string.h>


class Alumno
{
private:
int Cola[10],Frente,Final,Max;
char Cola1[10][10];
public:
Alumno()
{
int i,j;
char Nulo[2]=" ";
Frente=-1;
Final=-1;
Max=9;
for(i=1;i<9;i++)
{
Cola[i]=0;
strcpy(Cola1[i],Nulo);
}
}

void Push(char Elem[10])
{
if((Frente==0&&Final==9)||(Frente==(Final+1)))
{
cout<<"Cola Llena"<<endl;
return;
}
if(Frente==-1)
{
Frente=0;
Final=0;
}
else if(Final==Max)
Final=0;
else
Final++;
strcpy(Cola1[Final],Elem);
}

void Push(int Elem)
{
if((Frente==0&&Final==9)||(Frente==(Final+1)))
{
cout<<"Cola Llena"<<endl;
return;
}
if(Frente==-1)
{
Frente=0;
Final=0;
}
else if(Final==Max)
Final=0;
else
Final++;
Cola[Final]=Elem;
}

void Push(float Elem)
{
if((Frente==0&&Final==9)||(Frente==(Final+1)))
{
cout<<"Cola Llena"<<endl;
return;
}
if(Frente==-1)
{
Frente=0;
Final=0;
}
else if(Final==Max)
Final=0;
else
Final++;
Cola[Final]=Elem;
}

void Push(double Elem)
{
if((Frente==0&&Final==9)||(Frente==(Final+1)))
{
cout<<"Cola Llena"<<endl;
return;
}
if(Frente==-1)
{
Frente=0;
Final=0;
}
else if(Final==Max)
Final=0;
else
Final++;
Cola[Final]=Elem;
}

void Pop(void)
{
if(Frente!=-1)
{
cout<<"Elmininado el Dato: "<<Cola[Frente];
if(Frente==Final)
{
Frente=-1;
Final=-1;
}
else if(Frente==Max)
Frente=0;
else
Frente++;
}
else
cout<<"Cola Vacia... Imposible Eliminar"<<endl;
}

void Recorrido(void)
{
int i;
if(Frente!=-1)
{
if(Frente<=Final)
for(i=Frente;i<=Final;i++)
cout<<Cola[i]<<endl;
else if(Frente>Final)
for(i=Frente;i!=Final;i++)
{
if(i>Max)
i=0;
cout<<Cola[i]<<endl;
}
}
else
cout<<"Cola Vacia...";
}

void Busqueda(char Elem[10])
{
int i;
if(Frente!=-1)
{
if(Frente<=Final)
for(i=Frente;i<=Final;i++)
if((strcmp(Elem,Cola1[i]))==0)
{
cout<<"Dato "<<Cola1[i]<<" encontrado..."<<endl;
return;
}
else if(Frente>Final)
for(i=Frente;i!=Final;i++)
{
if(i>Max)
i=0;
if((strcmp(Elem,Cola1[i]))==0)
{
cout<<"Dato "<<Cola1[i]<<" encontrado..."<<endl;
return;
}
}
}
else
cout<<"Dato no encontrado...";
}

void Busqueda(int Elem)
{
int i;
if(Frente!=-1)
{
if(Frente<=Final)
for(i=Frente;i<=Final;i++)
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
else if(Frente>Final)
for(i=Frente;i!=Final;i++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
}
}
else
cout<<"Dato no encontrado...";
}

void Busqueda(float Elem)
{
int i;
if(Frente!=-1)
{
if(Frente<=Final)
for(i=Frente;i<=Final;i++)
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
else if(Frente>Final)
for(i=Frente;i!=Final;i++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
}
}
else
cout<<"Dato no encontrado...";
}

void Busqueda(double Elem)
{
int i;
if(Frente!=-1)
{
if(Frente<=Final)
for(i=Frente;i<=Final;i++)
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
else if(Frente>Final)
for(i=Frente;i!=Final;i++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Dato "<<Cola[i]<<" encontrado..."<<endl;
return;
}
}
}
else
cout<<"Dato no encontrado...";
}

void Borrar(char Elem[10])
{
char Temp[10][10];
int i,j;
if(Frente!=-1)
{
if(Frente<=Final)
for(j=0,i=Frente;i<=Final;i++,j++)
{
if((strcmp(Elem,Cola1[i]))==0)
{
cout<<"Eliminado el Dato "<<Cola1[i]<<endl;
if(Frente==Final)
{
Frente=-1;
Final=-1;
return;
}
else if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
strcpy(Cola1[i],Temp[j]);
return;
}
strcpy(Temp[j],Cola1[i]);
}
else if(Frente>Final)
for(j=0,i=Frente;i!=Final;i++,j++)
{
if(i>Max)
i=0;
if((strcmp(Elem,Cola1[i]))==0)
{
cout<<"Eliminado el Dato "<<Cola1[i]<<endl;
if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
{
if(i>Max)
i=0;
strcpy(Cola1[i],Temp[j]);
}
return;
}
strcpy(Temp[j],Cola1[i]);
}
cout<<"Dato no Encontrado...";
}
else
cout<<"Cola Vacia... Imposible Eliminar...";
}

void Borrar(int Elem)
{
int Temp[10],i,j;
if(Frente!=-1)
{
if(Frente<=Final)
for(j=0,i=Frente;i<=Final;i++,j++)
{
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Final)
{
Frente=-1;
Final=-1;
return;
}
else if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
Cola[i]=Temp[j];
return;
}
Temp[j]=Cola[i];
}
else if(Frente>Final)
for(j=0,i=Frente;i!=Final;i++,j++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
{
if(i>Max)
i=0;
Cola[i]=Temp[j];
}
return;
}
Temp[j]=Cola[i];
}
cout<<"Dato no Encontrado...";
}
else
cout<<"Cola Vacia... Imposible Eliminar...";
}
void Borrar(float Elem)
{
int Temp[10],i,j;
if(Frente!=-1)
{
if(Frente<=Final)
for(j=0,i=Frente;i<=Final;i++,j++)
{
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Final)
{
Frente=-1;
Final=-1;
return;
}
else if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
Cola[i]=Temp[j];
return;
}
Temp[j]=Cola[i];
}
else if(Frente>Final)
for(j=0,i=Frente;i!=Final;i++,j++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
{
if(i>Max)
i=0;
Cola[i]=Temp[j];
}
return;
}
Temp[j]=Cola[i];
}
cout<<"Dato no Encontrado...";
}
else
cout<<"Cola Vacia... Imposible Eliminar...";
}

void Borrar(double Elem)
{
int Temp[10],i,j;
if(Frente!=-1)
{
if(Frente<=Final)
for(j=0,i=Frente;i<=Final;i++,j++)
{
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Final)
{
Frente=-1;
Final=-1;
return;
}
else if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
Cola[i]=Temp[j];
return;
}
Temp[j]=Cola[i];
}
else if(Frente>Final)
for(j=0,i=Frente;i!=Final;i++,j++)
{
if(i>Max)
i=0;
if(Elem==Cola[i])
{
cout<<"Eliminado el Dato "<<Cola[i]<<endl;
if(Frente==Max)
Frente=0;
else
Frente++;
for(j--,i=Frente;j!=-1;i++,j--)
{
if(i>Max)
i=0;
Cola[i]=Temp[j];
}
return;
}
Temp[j]=Cola[i];
}
cout<<"Dato no Encontrado...";
}
else
cout<<"Cola Vacia... Imposible Eliminar...";
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

