#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
char f;
void main()
{
do{
int a,b,c,d,e;

clrscr();
cout<<"Welcome to loop";
cout<<"\n1)While-loop";
cout<<"\n2)For-loop";
cout<<"\n3)Exit";
cout<<"\n\n\nEnter your choice:";
cin>>a;
switch(a)
{
case 1:
clrscr();
cout<<"Welcome to while Loop";
cout<<"\n1)Simple While Loop";
cout<<"\n2)Do-While Loop";
cout<<"\n3)Exit";
cout<<"\n\n\nEnter your choice:";
cin>>b;
switch(b)
{
case 1:
clrscr();
cout<<"Welcome to Simple While Loop";
cout<<"\n\nEnter the number which you want to calculate LOOP:";
cin>>c;
while(c<10)
{
cout<<c<<")\n";c++;
}
break;
case 2:
cout<<"Welcome to Do-While Loop";
cout<<"\n\nEnter the number which you want to calculate LOOP:";
cin>>d;
do{
cout<<d;
d++;
}while(d<10);
break;
case 3:
exit(0);
default:
cout<<"INVALID CHOICE!";
}
break;
case 2:
clrscr();
cout<<"Welcome to For loop";
cout<<"\n\nEnter the number which you want to calculate LOOP:";
cin>>e;
for(e;e<10;e++)
{
cout<<e;
}
break;
case 3:
exit(0);
break;
default:
cout<<"Invalid choice";
}
cout<<"\n\n\nGo to main menu (y/n)";
cin>>f;
}while(f=='y');
getch();
}
