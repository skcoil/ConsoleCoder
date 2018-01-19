#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int driver,mode;
int z;
char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],j[20];
char x;
do{
clrscr();
driver=DETECT;
initgraph(&driver,&mode," ");
setcolor(4);
circle(100,100,50);
floodfill(100,100,4);
circle(120,100,5);
circle(120,300,30);
circle(100,275,15);
circle(135,275,15);
circle(110,300,3);
circle(130,300,3);
circle(120,320,5);
circle(120,361,30);
circle(89,335,13);
circle(150,335,13);
circle(150,393,13);
circle(89,393,13);
circle(127,330,100);
circle(355,310,70);
circle(540,280,60);
circle(530,390,40);
rectangle(630,450,10,10);
rectangle(200,30,600,100);
rectangle(500,190,250,100);
floodfill(540,280,4);
floodfill(530,390,4);
floodfill(110,300,4);
floodfill(130,300,4);
floodfill(120,320,4);
floodfill(127,330,4);
floodfill(355,310,4);
gotoxy(34,5);
setlinestyle(USERBIT_LINE,0,3);
cout<<"***WELCOME TO SAURABH GAMES***";
gotoxy(40,10);
cout<<"Moon Magic Future???";
gotoxy(40,20);
cout<<"!PLAY GAME!!!";
gotoxy(63,18);
cout<<"INSTRUCTIONS";
gotoxy(65,25);
cout<<"EXIT";
cout<<"\n\n\n\n\n\t\tPLAY=<1> /  INSTRUCTION=<2> /   EXIT=<3>";
cin>>z;
switch(z)
{
case 2:
clrscr();
setcolor(3);
for(int i=10;i<250;i-=10)
circle(315,240,i);
gotoxy(35,5);
cout<<"INSTRUCTIONS\n\n\t\t\tWELCOME TO SAURABH GAMES\t\t\t\t\n\n\t\t\t\tMOON MAGIC FUTURE\t\t\t\t\t\n\nTo play this game you have to enter your name: job: rashi: age: state: city: gender: WHEN YOU FILL THIS YOU WILL SEE YOUR FUTURE BY MOON MAGIC FUTURE!!";
break;
case 1:
clrscr();
textmode(BW40);
gotoxy (1,1);cout<<"WELCOME TO MOON MAGIC FUTURE";
gotoxy(1,3);cout<<"*******************************";
gotoxy(1,5);
cout<<"Enter Your first Name:-";
cin>>a;
gotoxy(1,10);
cout<<"AGE:-";
cin>>b;
gotoxy(1,15);
cout<<"job:-";
cin>>c;
gotoxy(1,20);
cout<<"Rashi:-";
cin>>d;
cout<<"\n\nState:-";
cin>>e;
cout<<"\n\nCity:-";
cin>>f;
cout<<"\n\nToday's date(ex-21209):-";
cin>>g;
cout<<"\n\nGender if male press 1 , if female press 2:-";
cin>>h;
cout<<"\n\nPress 1 to continue & then you see your future:-";
cin>>j;
clrscr();
textmode(BW80);
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"\t\t NOW YOU SEE YOUR FUTURE BY Moon Magic Future";
cout<<"\t\t\t\t\t**********************************************";
cout<<"\n\nYou will loss a great opporchunity in this month but you don't have any probleum with this loss. you will pass in any examination in this month & you get your any income in next month you getting very happy in next month & you get low freedom from your any disease & your lucky month is may. moon magic future gives you confidity to pass all strugle of your life & to enjoy your life.                  your LUCKY NUMBER - 5 & LUCKEY COLOR - BROWN";
cout<<"\n\n\n\n\n\nThankyou for playing Saurabh Games & seeing your Future";
cout<<"\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
break;
case 3:
exit(0);
default:
cout<<"Option not found!";
}
cout<<"\n\nGo to main menu(y/n)";
cin>>x;
}while(x=='y');
getch();
}




