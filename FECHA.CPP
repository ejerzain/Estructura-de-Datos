#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
clrscr();
int mes[12];
mes[1]=30;
mes[2]=28;
mes[3]=31;
mes[4]=30;
mes[5]=29;
mes[6]=30;
mes[7]=31;
mes[8]=31;
mes[9]=30;
mes[10]=31;
mes[11]=30;
mes[12]=31;

int year, month, day;
int year2, month2, day2;
time_t t;
time(&t);
struct tm* petm = localtime(&t);
cout << "Procesando: " << asctime(petm) << endl;
 
year2=petm->tm_year+1900;
month2=petm->tm_mon+1;
day2=petm->tm_mday;

cout<<"\n\t***************Calcular dias y horas desde tu nacimiento******************";
cout<<"\n Dame tu año de nacimiento:";cin>>year;
cout<<"\n Dame tu mes de nacimiento:";cin>>month;
cout<<"\n Dame tu dia de nacimiento:"; cin>>day;

int sumodia1=0;
for(int i=1;i<=month-1;i++){
sumodia1+=mes[i];
if(i==2 && year%4==0){
sumodia1+=1;
}
}
sumodia1+=day;

int sumodia2=365-sumodia1;
int sumoyear=year2-year-1;

sumodia2+=(sumoyear*365);

for(int i1=1;i1<=month2-1;i1++){
sumodia2+=mes[i1];
if(i1==2 && year2%4==0){
sumodia2+=1;
}
}
sumodia2+=day2;

for(int i2=year+1;i2<=year2-1;i2++){
if(i2%4==0){
sumodia2+=1;
}
}

//8258
cout<<"\n Has vivido "<<sumodia2<<" dias";
long int horas=sumodia2*24;
cout<<"\n Has vivido "<<horas<<" horas";
getch();
return 0;
}
