#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
float iyb,sn,a,b,c,d,e,cc=7,rr=8,zz,gt=0,dis,na;
clrscr();
gotoxy(2,4);
cout<<"Item You buy:";
gotoxy(2,5);
cout<<"^^^^^^^^^^^^^^^^^";
gotoxy(20,2);
cout<<"WELCOME TO OM MAHAMAYA MEDICAL STORE";
gotoxy(20,3);
cout<<"************************************";
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
gotoxy(63,24);
cout<<"Grand Total =";
gotoxy(3,24);
cout<<"Discount=";
gotoxy(27,24);
cout<<"Your Net Amount:-";
gotoxy(15,4);
cin>>iyb;
for(zz=0;zz<iyb;zz++)
{
gotoxy(cc,rr);
cin>>sn;
cc=cc+8;
gotoxy(cc,rr);
cin>>sn;
cc=cc+12;
gotoxy(cc,rr);
cin>>a;
cc=cc+10;
gotoxy(cc,rr);
cin>>b;
cc=cc+12;
gotoxy(cc,rr);
c=a*b;
cout<<c;
cc=cc-42;
rr=rr+2;
gt=gt+c;
}
gotoxy(76,24);
cout<<gt;
gotoxy(13,24);
cin>>dis;
na=gt*dis/100;
gotoxy(45,24);
cout<<na;
getch();
}