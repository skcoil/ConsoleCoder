#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
char a[40],b[40],c[40],d[40],e[40],f[40],g[40];
int i;
int driver,mode;
initgraph(&driver,&mode,"");
 textattr(i + ((i+1) << 1));
 cout<<"                +++Welcome to IDENTY-CARD Maker+++";
cout<<"\n\t\t**********************************";
cout<<"\n\nName:";
cin>>a;
cout<<"\nFather Name:";
cin>>b;
cout<<"\nAddress:";
cin>>c;
cout<<"\nRoll:";
cin>>d;
cout<<"\nHouse:";
cin>>e;
cout<<"\nPh.Number:";
cin>>f;
cout<<"\nSchool Name:";
cin>>g;
cout<<"\n\nCONGRATESS! YOUR IDENTY-CARD IS READY PRESS ANY KEY TO SEE!!!";
getch();
clrscr();
rectangle(637,477,1,2);
rectangle(150,330,470,160);
gotoxy(21,13);
cout<<"Photo";
gotoxy(21,14);
cout<<"is";
gotoxy(21,15);
cout<<"UNKNOWN";
gotoxy(30,12);
cout<<g;
gotoxy(30,14);
cout<<"Name:"<<a;
gotoxy(30,15);
cout<<"Father Name:"<<b;
gotoxy(30,16);
cout<<"Address:"<<c;
gotoxy(30,17);
cout<<"Roll.no:"<<d;
gotoxy(30,18);
cout<<"House:"<<e;
gotoxy(30,19);
cout<<"Ph.no:"<<f;
getch();
}