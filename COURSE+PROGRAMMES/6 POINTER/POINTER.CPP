#include<iostream.h>
#include<conio.h>
void main()
{
int a;
int *b;
clrscr();
a=3;
b=&a;
cout<<"\t\t      +++++++++++POINTER++++++++++";
cout<<"\n\t       ****************************\n\n";
cout<<"VALUE OF A="<<a;
cout<<"\n"<<"ADDRESS OF A="<<&a;
cout<<"\n"<<"ADDRESS OF A STORED IN B="<<b;
cout<<"\n"<<"WITH THE HELP OF ADDRESS VALUE CATCHED="<<*b;
cout<<"\n"<<"ADDRESS OF B="<<&b;
getch();
}