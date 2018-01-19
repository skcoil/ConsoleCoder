#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,d,x,y,z,w;
clrscr();
cout<<"Length of Picture:";
cin>>a;
cout<<"Breadth of Picture:";
cin>>b;
cout<<"Picture Surrounded by the frame of:";
cin>>c;
cout<<"\n------------------------------------------------------";
cout<<"\n\t\t\tAnswer (Solution)";
cout<<"\n\t\t\t^^^^^^^^^^^^^^^^^";
d=a*b;
cout<<"\n\nLength of Picture="<<a;
cout<<"\nBreadth of Picture="<<b;
cout<<"\nArea of Picture=l*b";
cout<<"\nArea of Picture="<<a<<"*"<<b;
cout<<"\nArea of Picture="<<d<<"cm square";
z=a+c+c;
x=b+c+c;
y=z*x;
cout<<"\nThe Picture Is Surrounded By The Frame Of "<<c<<"cm";
cout<<"\nSo, The Length of The Picture With Frame="<<a<<"+"<<c<<"+"<<c;
cout<<"\n                                        ="<<z<<"cm";
cout<<"\nThe Picture Is Surrounded By The Frame Of "<<c<<"cm";
cout<<"\nSo, The Breadth of The Picture With Frame="<<b<<"+"<<c<<"+"<<c;
cout<<"\n                                        ="<<x<<"cm";
cout<<"\nArea of Picture With Frame="<<z<<"x"<<x;
cout<<"\n                          ="<<y<<"cm square";
cout<<"\nArea of Frame ="<<y<<"-"<<d;
w=y-d;
cout<<"\n              ="<<w<<"cm square";
getch();
}