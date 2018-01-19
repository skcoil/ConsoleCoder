#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
char v,w;
do{
clrscr();
cout<<"\t\t\tWELCOME TO GRADE CALCULATOR\n\t\t\t******************************";
gotoxy(4,6);
cout<<"MATHS.";
gotoxy(13,6);
cout<<"SCIENCE";
gotoxy(27,6);
cout<<"ENGLISH";
gotoxy(40,6);
cout<<"SST";
gotoxy(47,6);
cout<<"HINDI";
do{
gotoxy(4,8);
cin>>a;
if(a>101)
{
cout<<"\n\nINVALID INPUT TRY ENTERING AGAIN PRESS E TO CONTINUE:";
}
if(a<101)
{
gotoxy(13,8);
cin>>b;
}
if(b>101)
{
cout<<"INVALID INPUT";
}
if(a<101)
if(b<101)
{


gotoxy(27,8);
cin>>c;
}
if(c>101)
{
cout<<"INVALID INPUT";
}
if(a<101)
if(b<101)
if(c<101)
{

gotoxy(40,8);
cin>>d;
}
if(d>101)
{
cout<<"INVALID INPUT";
}
if(a<101)
if(b<101)
if(c<101)
if(d<101)
{


gotoxy(47,8);
cin>>e;
}
if(e>101)
{
cout<<"INVALID INPUT";
}
if(a<101)
if(b<101)
if(c<101)
if(d<101)
if(e<101)
{
cout<<"\n\nYOUR TOTAL MARKS IS:"<<a+b+c+d+e;
if(a<33)
{
cout<<"\n\nYOU HAVE FAILED IN MATHS";
}
if(b<33)
{
cout<<"\n\nYOU HAVE FAILED IN SCIENCE";
}
if(c<33)
{
cout<<"\n\nYOU HAVE FAILED IN ENGLISH";
}
if(d<33)
{
cout<<"\n\nYOU HAVE FAILED IN SST";
}
if(e<33)
{
cout<<"\n\nYOU HAVE FAILED IN HINDI";
}
if(a<33||b<33||c<33||d<33||e<33)
{
cout<<"\n\nRESULT STATUS: FAIL";
}
else
cout<<"\n\nRESULT STATUS:PASS";
}
cout<<"\n\nDO YO WANT TO CALCUATE GRADE ONCE MORE (Y/N):";
cin>>v;
}while(v=='y');
getch();
}
