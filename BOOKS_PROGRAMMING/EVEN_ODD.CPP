#include<iostream.h>
#include<conio.h>
void main()
{
int c=1,a;
clrscr();
char y;
do{
cout<<c<<":";
c++;
cin>>a;
cout<<"\n\nEnter More Numbers (y/n):";
cin>>y;
}while(y=='y');
}