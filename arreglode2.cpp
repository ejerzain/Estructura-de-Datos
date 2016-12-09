#include<iostream.h>
#include<conio.h>
//using namespace std;

int main()
{
    int matriz[3][2];
    int valor;
    clrscr();
    for(int i=0;i<3;i++)
    {
	    for(int j=0;j<2;j++)
	    {
	cout<<"Ingrese el valor de la matriz en la posición["<<i<<","<<j<<"]"<<endl;
		    cin>>valor;
		    matriz[i][j]=valor;
		    }
		    }
		   for(int i1=0;i1<3;i1++)
		    {
			    for(int j=0;j<2;j++)
			    {
				    cout<<matriz[i1][j]<<"\t";
				    }
				    }
				    getch();
				    return 0;
				    }
