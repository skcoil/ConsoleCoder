#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int hh,ii;
clrscr();
cout<<"\n\nEnter the number for Square Root:";
cin>>hh;
ii=sqrt(hh);
if(hh%ii==0)
{
cout<<"\n\n\tCongratulations! Square Root of "<<"["<<hh<<" = "<<ii<<"*"<<ii<<"]"<<" ("<<ii<<")";
}
else
{
cout<<"\n\n\n\t\tSquare root in decimal that is not accepted!";
}
getch();
}