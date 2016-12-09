/*Programa Realizado Por: RATZEL
Fecha: 25-oct-10
Proposito: Mostra La Estructura Basica De Un Programa En C++
*/
#include <iostream.h> //libreria E/S
#include <conio.h>//con: consol i: input o: output
int main() // modulo principal
{
float fprecio1 =0.0;
float fprecio2 =0.0;
float fprecio3 =0.0;
float fcantidad1 =0.0;
float fcantidad2 =0.0;
float fcantidad3 =0.0;
float fsubtotal1 = 0.0;
float fsubtotal2 = 0.0;
float fsubtotal3 = 0.0;
float fsubtotal = 0.0;
float fiva = 0.0;
float ftotal = 0.0;
float fdesc = 0.0;
//recibe datos del usuario
clrscr(); //limpia pantalla
cout<<"Entra El Precio Del Articulo1: ";
cin>>fprecio1;
cout<<"Entra La Cantidad Del Articulo1: ";
cin>>fcantidad1;
cout<<"Entra El Precio Del Articulo2: ";
cin>>fprecio2;
cout<<"Entra La Cantidad Del Articulo2: ";
cin>>fcantidad2;
cout<<"Entra El Precio Del Articulo3: ";
cin>>fprecio3;
cout<<"Entra La Cantidad Del Articulo3: ";
cin>>fcantidad3;
fsubtotal1 = fprecio1*fcantidad1;
fsubtotal2 = fprecio2*fcantidad2;
fsubtotal3 = fprecio3*fcantidad3;
fsubtotal = fsubtotal1+fsubtotal2+fsubtotal3;
cout<<"Subtotal: "<<"$"<<fsubtotal <<endl;
if(fsubtotal>900)
{
fdesc=fsubtotal*0.10;
fsubtotal-=fdesc;
cout<<"Se Aplicara Un 10% De Descuento: "<<"$"<<fdesc<<endl;
}

fiva = fsubtotal * 0.16;
ftotal = fsubtotal;//+ fiva;
//cout<<"I.V.A (16%): "<<"$"<<fiva <<endl;
cout<<"Total a Pagar: "<<"$"<<ftotal <<endl;
getch ();
return 0;
}
