#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>
void main()
{
float a,b,c;
clrscr();
cout<<"Enter the n.o to find area of the parallelogram\n\nBASE OF THE PARALLELOGRAM:";
cin>>a;
cout<<"\n\nHEIGHT OF THE PARALLELOGRAM:";
cin>>b;
c=a*b;
cout<<"\n\nValue Successfully! Entered! Area of the Parallelogram = Base*Height";
cout<<"\n\t\t\t     Area of the Parallelogram = "<<a<<"*"<<b;
cout<<"\n\t\t\t\t\t\t       ="<<c;
cout<<"\n\t\t\t\t\t\t       --------------";
getch();
}