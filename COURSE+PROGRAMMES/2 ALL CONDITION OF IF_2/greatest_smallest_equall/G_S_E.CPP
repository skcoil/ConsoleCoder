#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
cout<<"enter the value of c=";
cin>>c;
if(a==b&&a==c)
{
cout<<"A,B,C ARE ALL EQUAL";
}
	if(a>b)
	{
	if(a>c)
	{
		cout<<"a is greatest";
	}
	else
	{
cout<<"c is greatest";
}
}
else
{
if(b>c)
{
cout<<"b is greatest";
}
else
{
cout<<"c is greatest";
}
}
getch();
}
