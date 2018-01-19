#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
struct books
{
char name;
int page;
float rate;
}d1,d2,d3;
gotoxy(5,8);
cout<<"Name     Page     Rate";
gotoxy(5,10);
cin>>d1.name>>d1.page>>d1.rate;
gotoxy(5,12);
cin>>d2.name>>d2.page>>d2.rate;
gotoxy(5,14);
cin>>d3.name>>d3.page>>d3.rate;
gotoxy(5,16);
cout<<"Name    Page     Rate";
gotoxy(5,18);
cout<<d1.name<<d1.page<<d1.rate;
gotoxy(5,20);
cout<<d2.name<<d2.page<<d2.rate;
gotoxy(5,22);
cout<<d3.name<<d3.page<<d3.rate;
getch();
}
