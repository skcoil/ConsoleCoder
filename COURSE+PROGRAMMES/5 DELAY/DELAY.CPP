#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
char a[7]="Saurabh";
char b[9]="   Kavita";
int i,c;
clrscr();
for(i=0;i<7;i++)
{
delay(100);
cout<<a[i];
}
for(c=0;c<9;c++)
{
delay(100);
cout<<b[c];
}
getch();
}
