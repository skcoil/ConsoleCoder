#include<iostream.h>
#include<conio.h>
void main()
{
int aa,bb,cc,dd,ee,ff,gg;
clrscr();
cout<<"\n\t\tVerification for Pythagoral Triplet";
cout<<"\n\t\t***********************************";
cout<<"\n\n Q1)- (5,12,13)";
cout<<"\n Q2)- (8,12,17)";
cout<<"\n Q3)- (10,15,25)";
cout<<"\nQ4)- (04,07,11)";
cout<<"\n\nNow:- you can solve any questions by entering the numbers";
cout<<"\n\nEnter the Value of A:";
cin>>aa;
cout<<"\nEnter the Value of B:";
cin>>bb;
cout<<"\nEnter the Value of C:";
cin>>cc;
dd=aa*aa;
ee=bb*bb;
ff=cc*cc;
gg=dd+ee;
if(ff==gg)
{
cout<<"\n\n\t\t\t[L.H.S=R.H.S]\n\n\t\tCongratulations! Pythagoral Triplet";
}
else
{
cout<<"\n\t\t\tSORRY! Not Pythagoral Triplet";
}
getch();
}