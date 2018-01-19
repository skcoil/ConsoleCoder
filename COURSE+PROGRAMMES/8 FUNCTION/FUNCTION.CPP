#include<iostream.h>
#include<conio.h>
void nkp();
void arti();
void skp();
void sinint();
void sout();
void stop();
void scls();
void main()
{
clrscr();
nkp();
skp();
arti();
sinint();
sout();
stop();
scls();
getch();
}
void nkp()
{
cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
}
void skp()
{
cout<<"\n********************************************************************************";
}
void arti()
{
cout<<"\n-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o";
}
void sinint()
{
int a;
cin>>a;
}
void sout()
{
int a;
cin>>a;
cout<<a;
}
void stop()
{
getch();
}
void scls()
{
clrscr();
}