    #include <iostream.h>
    #include <stdlib.h>
    #include <conio.h>
    int main()
    {
      int a,b,x,c,l;
      a=1; b=1; x=0; c=0;
      cout<<"Introduce el limite de la serie: "; cin>>l;
      if (l>0) {
        if (l==1) cout<<"1"<<endl;
        else
          {
          cout<<endl<<a<<", "<<b<<", ";
          while (c<l-2)
            {
             c++;
	     x=a+b;
             cout<<x<<", ";
             a=b;
             b=x;
            }
          }
      }
	getch ();
 return 0; //system("PAUSE");
    }

