#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int a;
char ch;
do{
clrscr();
gotoxy(20,2);
cout<<"*** Welcome to book of history of C ***";
gotoxy(17,3);
cout<<" +++++++++++++++++++++++++++++++++++++++++++";
gotoxy(6,5);
cout<<"1)Who invented C & by which trick & in which operating system?";
gotoxy(6,7);
cout<<"2)Which is old language of C?";
gotoxy(6,9);
cout<<"3)In which year C was devloped?";
gotoxy(6,11);
cout<<"4)How many years the standarisation process of C took?";
gotoxy(6,13);
cout<<"5)DETAILS OF ANSI C?";
gotoxy(6,15);
cout<<"6)Exit";
gotoxy(10,20);
cout<<"              Enter your choice:";
cin>>a;
switch(a)

{
case 1:
clrscr();
gotoxy(7,2);
cout<<"*** Who invented C & by which trick & in which operating system ***";
gotoxy(5,3);
cout<<" +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";

cout<<"\n\n\C was invented & first implemented by DENNIS RITCHIE on a DEC PDP-11 that used the unix operating system.";
break;
case 2:
clrscr();
gotoxy(20,2);
cout<<"*** Which is the old language of C ? ***";
gotoxy(17,3);
cout<<" +++++++++++++++++++++++++++++++++++++++++++";

cout<<"\n\n\t\t\tC old language is BCPL";
break;
case 3:
clrscr();
gotoxy(20,2);
cout<<"*** In which year C was devloped ? ***";
gotoxy(17,3);
cout<<" +++++++++++++++++++++++++++++++++++++++++";

cout<<"\n\n\t\t\tC was devloped in 1970";
break;
case 4:
clrscr();
gotoxy(10,2);
cout<<"*** How many years the standardisation process of C took ? ***";
gotoxy(8,3);
cout<<" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\n\n\t\tTo standarisation this process took 6 years";
break;
case 5:
clrscr();
gotoxy(20,2);
cout<<"*** Details of ANSI C ? ***";
gotoxy(17,3);
cout<<" +++++++++++++++++++++++++++++++";
cout<<"\n\n\n\nIn the summer of 1983 a committee was established to create an ANSI (American National Standards Institute)to define C language. The ANSI C standard was finally adopted in december 1989, with the first copies becoming available in early 1990. It is finaly adopted by ISO (International Standards Organization) & is now reffered to as the (ANSI/ISO C) standard.";
break;
default:
cout<<"Invalid choice";
}
if(a==6)
{
exit(0);
}
cout<<"\n\n\n\nGo to main menu press (y/n)......";
cin>>ch;
}while(ch=='y');
exit(0);
getch();
}

