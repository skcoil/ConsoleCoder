#include<iostream.h>
#include<conio.h>
void sum();
void sub();
void mul();
void div();
void rem();
void main()
{
clrscr();
sum();
sub();
mul();
div();
rem();
getch();
}
void sum()
{
int a,b,*e,*f,g;
cout<<"\nProgram for Addition";
cout<<"\n";

cout<<"\nEnter Value Of A:";
cin>>a;
cout<<"Enter Value Of B:";
cin>>b;
e=&a;
f=&b;
g=*e+*f;
cout<<"\nTotal="<<g;
}
void sub()
{
int a,b,*e,*f,g;
cout<<"\nProgram for Subtraction";
cout<<"\n";

cout<<"\nEnter Value Of A:";
cin>>a;
cout<<"Enter Value Of B:";
cin>>b;
e=&a;
f=&b;
g=*e-*f;
cout<<"\nTotal="<<g;
}
void mul()
{
int a,b,*e,*f,g;
cout<<"\nProgram for Multiply";
cout<<"\n";

cout<<"\nEnter Value Of A:";
cin>>a;
cout<<"Enter Value Of B:";
cin>>b;
e=&a;
f=&b;
g=*e**f;
cout<<"\nTotal="<<g;
}
void div()
{
int a,b,*e,*f,g,y,z;
cout<<"\nProgram for Division";
cout<<"\n";
cout<<"\nEnter Value Of A:";
cin>>a;
cout<<"Enter Value Of B:";
cin>>b;
e=&a;
f=&b;
y=*e;
z=*f;
g=y/z;
cout<<"\nTotal="<<g;
}
void rem()
{
int a,b,*e,*f,g;
cout<<"\nProgram for Remender";
cout<<"\n";
cout<<"\nEnter Value Of A:";
cin>>a;
cout<<"Enter Value Of B:";
cin>>b;
e=&a;
f=&b;
g=*e%*f;
cout<<"\nTotal="<<g;
}



