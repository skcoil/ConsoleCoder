#include<iostream.h>
#include<conio.h>
void main()
{
float a,b,c,d,e,z;
clrscr();
cout<<"***AREA OF TRAPEZIUM FINDIER BY 2 PARALLEL SIDES LENGTH &DISTANCE BETWWN THEM***";
cout<<"\nEnter Parallel Side Upper Length:";
cin>>a;
cout<<"Enter Parallel Side Lower Length:";
cin>>b;
cout<<"Enter Distance Between Them:";
cin>>c;
z=a+b;
e=c*1/2*z;
cout<<"Formula: Area of Trapezium=1/2*h(b1+b2)";
cout<<"\n         Area of Trapezium=1/2"<<"*"<<c<<"("<<a<<"+"<<b<<")";
cout<<"\n                          ="<<e<<" m square";
cout<<"\n--------------------------------------------------";
getch();
}