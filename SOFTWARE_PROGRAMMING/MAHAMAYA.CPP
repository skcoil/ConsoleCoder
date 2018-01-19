#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int driver,mode;
int i,z,a,b,c,d,e,row,col;
clrscr();
driver=DETECT;
initgraph(&driver,&mode," ");
setcolor(2);
for(int x=5;x<250;x+=1)
circle(315,240,x);
cout<<"********************************************************************************";
cout<<"\n\t\t\t WELCOME TO OM MAHAMAYA MEDICAL STORE";
cout<<"\n\t\t\t**************************************";
gotoxy(3,3);
cout<<"Entries You Want..?";
gotoxy(2,25);
cout<<"\n\n\n\n\n*******************************************************************************";
line(10,60,700,60);
line(10,100,700,100);
line(10,403,700,403);
line(550,60,550,403);
line(80,60,80,403);
line(200,60,200,403);
line(250,60,250,403);
line(360,60,360,403);
line(450,60,450,403);
rectangle(639,470,10,5);
gotoxy(4,6);
cout<<"Sl.No.";
gotoxy(13,6);
cout<<"Item code";
gotoxy(27,6);
cout<<"Qty";
gotoxy(35,6);
cout<<"Rate";
gotoxy(47,6);
cout<<"Total";
gotoxy(59,6);
cout<<"Discount";
gotoxy(71,6);
cout<<"Y.N.A";
gotoxy(23,3);
cin>>z;
for(i=0;i<'\n';i++)
{
cin>>a;
gotoxy(row,col);
row=row+9;
cin>>b;
gotoxy(row,col);
row=row+13;
cin>>c;
gotoxy(row,col);
row=row+14;
cin>>d;
gotoxy(row,col);
row=row+8;
cin>>e;
gotoxy(row,col);
row=row+12;
row=row-56;
col=col+2;
}




getch();
}