#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[]="SAURABH";
char b[]="KAVITA";
int y,z;
y=strcmp(a,"SAURABH");
z=strcmp(a,b);
cout<<"STRING MACHED SO "<<a<<" VALUE="<<y<<"\n"<<"SORRY! STRING NOT MACHED SO VALUE OF "<<b<<"="<<z;
getch();
}