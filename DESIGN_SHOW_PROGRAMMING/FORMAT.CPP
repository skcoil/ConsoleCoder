#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
clrscr();
long int a,b,c,d,e,f,g,h,i,j,k,l,n,o,p,q,r,s,t,u,v,w,x;
char y,z,m;
int driver=DETECT,mode;
initgraph(&driver,&mode,"");
setlinestyle(DOTTED_LINE,0,3);
rectangle(637,463,10,10);
setlinestyle(SOLID_LINE,0,3);
rectangle(620,450,25,25);
gotoxy(20,5);
cout<<"Welcome to (SAURABH) class 8th C.G BOARD BOOKS";
gotoxy(20,6);
cout<<"**********************************************";
rectangle(130,40,540,100);
rectangle(360,190,500,240);
rectangle(90,190,230,243);
rectangle(90,380,490,340);
circle(280,295,30);
setlinestyle(DASHED_LINE,0,1);
rectangle(160,405,400,440);
getch();
}