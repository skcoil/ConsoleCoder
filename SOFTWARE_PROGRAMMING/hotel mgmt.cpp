/*
Language: C\C++
Category: Database\Files
Description:              LIBRARY MANAGEMENT
This is actually a library management software.it uses
files to store
data.it uses files to store data for later use.
-----------------FEATURES----------------------------------
*a student cannot borrow more than 5 books
*student number can contain alphabets(eg.02it65)
*issued book cannot be reissued
*fine is automatically calculated after 15 days.
(each day 50paise per day after the due date)
*book and student deatails can be viewed seperately.
*books which are issued/not issued can be viewed seperately.
*student and book details are stored in *.rrn files.
*there are two .rrn files(student.rrn and book.rrn the
*program uses)
*books and students can be added or removed.
*rrn is my own personal extension
*/

#include<stdio.h>
#include<conio.h>
#include<io.h>
#include<graphics.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
#include<alloc.h>
#include<dos.h>
int display();
long int getsize(char[]);
void editb();
void edits();
void bkst();
void stst();
void issue();
typedef struct date DATE;
DATE dt,is,rt;
int dtest;
typedef struct
{
char sno[6];
char name[20];
float fine;
char dept[3];
int token;
}student;
typedef struct
{
char bno[5];
char bname[50];
char aname[20];
DATE iss;
DATE ret;
char status[1];
char isto[6];
int cost;
char descpt[200];
}book;
int id,im,iy,rd,rm,ry;
void assign(book *b)
{
b->iss.da_year=iy;
b->iss.da_mon=im;
b->iss.da_day=id;
b->ret.da_day=rd;
b->ret.da_mon=rm;
b->ret.da_year=ry;
return;
}
void main()
{
int opt;
clrscr();
while(1)
{
if(dtest!=1)
{
getdate(&dt);
is=dt;
rt=dt;
iy=is.da_year;
im=is.da_mon;
id=is.da_day;
rt.da_day+=15;
if(rt.da_day>31)
{
rt.da_day-=31;
rt.da_mon+=1;
}
rd=rt.da_day;
rm=rt.da_mon;
ry=rt.da_year;
dtest=1;
}
opt=display();
switch(opt)
{
case 1:
editb();
continue;
case 2:
edits();
continue;
case 3:
stst();
continue;
case 4:
bkst();
continue;
case 0:
exit(0);
break;
case 5:
issue();
continue;
default:
continue;
}
}
}
long int getsize(char a[])
{
int file,size;
file = open(a,O_RDONLY);
size=filelength(file);
close(file);
if (size<0)
return 0;
else
return size;
}
void editb()
{
FILE *fp;
int opt,size,n,i,flag=0;
long int bsize;
char bn[6];
book *bk;
bsize=getsize("book.rrn");
size=(bsize)/sizeof(book);
bk=(book*)malloc((size)*sizeof(book));
printf("\nOPTIONS\n1.Add Book(s)\n2.Remove book\n \
Your choice:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("How many books do you want to add? ");
scanf("%d",&n);
bk=(book*)malloc((n+size)*sizeof(book));
if(size==0)
fp=fopen("book.rrn","w+");
else
{
fp=fopen("book.rrn","r+");
fread(bk,sizeof(book),size,fp);
fcloseall();
}
for(i=size;i<=(n+size)-1;i++)
{
int temp,flag=0;
printf("No. of the book:");
scanf("%s",(bk+i)->bno);
for(temp=0;temp<size;temp++)
{
int cmp;
cmp=strcmp((bk+temp)->bno,(bk+i)->bno);
if((int)cmp==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\nBook is aldready present!\n");
i--;
continue;
}
printf("Name of the book:");
scanf("%s",(bk+i)->bname);
printf("Author Name:");
scanf("%s",(bk+i)->aname);
printf("Enter the cost of the book:");
scanf("%d",&(bk+i)->cost);
(bk+i)->status[0]='N';
printf("Enter a short description :");
scanf("%s",(bk+i)->descpt);
}
fp=fopen("book.rrn","w+");
fwrite(bk,sizeof(book),(n+size),fp);
printf("%d book(s) added succesfully!",n);
fcloseall();
getch();
clrscr();
return;
case 2:
printf("\nEnter the number of the book:");
scanf("%s",bn);
if(size==0)
{
printf("Book list does not exist!");
getch();
clrscr();
return;
}
fp=fopen("book.rrn","r+");
fread(bk,sizeof(book),size,fp);
fcloseall();
for(i=0;i<size;i++)
{
if(strncmp(bn,(bk+i)->bno,strlen(bn))==0)
{
flag=1;
break;
}
}
if(flag!=1)
{
printf("\nThe entered book id is invalid.");
getch();
clrscr();
return;
}
if((bk+i)->status[0]=='Y')
{
printf("\nCannot delete the book.The book has \
been issued!");
getch();
return;
}
for(;i<size-1;i++,n++)
{
*(bk+i)=*(bk+i+1);
}
size=size-1;
fp=fopen("book.rrn","w+");
fwrite(bk,sizeof(book),size,fp);
printf("Book removed succesfully!");
fcloseall();
getch();
clrscr();
return;
}
}
void edits()
{
FILE *fp;
int opt,size,n,i,flag=0;
long int bsize;
char bn[6];
student *st;
bsize=getsize("student.rrn");
size=(bsize)/sizeof(student);
st=(student*)malloc((size)*sizeof(student));
printf("\nOPTIONS\n1.Add Student(s)\n2.Remove \
student\nYour choice :");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("How many students do you want to add? ");
scanf("%d",&n);
st=(student*)malloc((n+size)*sizeof(student));
if(size==0)
fp=fopen("student.rrn","w+");
else
{
fp=fopen("student.rrn","r+");
fread(st,sizeof(student),size,fp);
fcloseall();
}
for(i=size;i<=(n+size)-1;i++)
{
int temp,flag=0;
printf("No. of the student:");
scanf("%s",(st+i)->sno);
for(temp=0;temp<size;temp++)
{
int cmp;
cmp=strncmp((st+i)->sno,(st+temp)->sno,6);
if((int)cmp==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("\nStudent aldready present in the list!\n");
i--;
continue;
}
printf("Name of the student:");
scanf("%s",(st+i)->name);
printf("Department:");
scanf("%s",(st+i)->dept);
(st+i)->token=0;
(st+i)->fine=0;
}
fp=fopen("student.rrn","w+");
fwrite(st,sizeof(student),(n+size),fp);
printf("%d student(s) added succesfully!",n);
fcloseall();
getch();
clrscr();
return;
case 2:
printf("\nEnter the number of the student:");
scanf("%s",bn);
if(size==0)
{
printf("Student list does not exist!");
getch();
clrscr();
return;
}
fp=fopen("student.rrn","r+");
fread(st,sizeof(student),size,fp);
fcloseall();
for(i=0;i<size;i++)
{
if(strncmp(bn,(st+i)->sno,strlen(bn))==0)
{
flag=1;
break;
}
}

if(flag!=1)
{
printf("\nThe entered student id is invalid.");
getch();
clrscr();
return;
}
if((st+i)->token>0)
{
printf("\nCannot delete the student.The student has borrowed\
 books from library!");
getch();
return;
}
for(;i<size-1;i++,n++)
{
*(st+i)=*(st+i+1);
}
size=size-1;
fp=fopen("student.rrn","w+");
fwrite(st,sizeof(student),size,fp);
printf("Student removed succesfully!");
fcloseall();
getch();
clrscr();
return;
}
}
void stst()
{
int size,i,flag=0,bsize,size1,bsize1;
student *st;
book *bk;
FILE *fp;
char bn[6];
bsize=getsize("student.rrn");
size=(bsize)/sizeof(student);
bk=(book*)malloc((size)*sizeof(book));
printf("\nEnter the number of the student:");
scanf("%s",bn);
if(size==0)
{
printf("Student list does not exist!");
getch();
clrscr();
return;
}
fp=fopen("student.rrn","r+");
fread(st,sizeof(student),size,fp);
fcloseall();
for(i=0;i<size;i++)
{
int cmp;
cmp=strncmp((st+i)->sno,bn,6);
if((int)cmp==0)
{
flag=1;
break;
}
}
if(flag!=1)
{
printf("\nThe entered student id is invalid.");
getch();
clrscr();
return;
}
clrscr();
printf("\t\t\t\tSTUDENT DETAILS");
printf("\n\nStudent name:%s",(st+i)->name);
printf("\nDepartment:%s",(st+i)->dept);
printf("\nTokens Used: %d",(st+i)->token);
printf("\nFine:%.2f",(st+i)->fine);
if((st+i)->token==0)
{
getch();
clrscr();
return;
}
else if((st+i)->token!=0)
{
bsize1=getsize("book.rrn");
size1=(bsize1)/sizeof(book);
fp=fopen("book.rrn","r");
bk=(book*)malloc((size1)*sizeof(book));
fread(bk,sizeof(book),size1,fp);
fcloseall();
printf("\n\nBOOK(S) BORROWED FROM THE LIBRARY:\n");
for(i=0;i<size1;i++)
{
int chk;
chk=strncmp(bn,(bk+i)->isto,6);
if((int)chk==0&&(bk+i)->status[0]=='Y')
printf("\nBook.No:%s\tBook Name:%s\t\nIssue:%d-%d-%d\t \
Expected Return:%d-%d-%d\n",
(bk+i)->bno,(bk+i)->bname,(bk+i)->iss.da_day,\
(bk+i)->iss.da_mon,(bk+i)->iss.da_year,

(bk+i)->ret.da_day,(bk+i)->ret.da_mon,(bk+i)->ret.da_year);
}
printf("\nPress any key........");
getch();
clrscr();
return;
}
}
void bkst()
{
int size,i,flag=0,bsize;
student *st;
book *bk;
FILE *fp;
char bn[6];
bsize=getsize("book.rrn");
size=(bsize)/sizeof(book);
bk=(book*)malloc((size)*sizeof(book));
printf("\nEnter the number of the book:");
scanf("%s",bn);
if(size==0)
{
printf("Book list does not exist!");
getch();
clrscr();
return;
}
fp=fopen("book.rrn","r+");
fread(bk,sizeof(book),size,fp);
fcloseall();
for(i=0;i<size;i++)
{
int cmp;
cmp=strncmp((bk+i)->bno,bn,6);
if((int)cmp==0)
{
flag=1;
break;
}
}
if(flag!=1)
{
printf("\nThe entered book id is invalid.");
getch();
clrscr();
return;
}
clrscr();
printf("\n\n\t\t\t\tBOOK DETAILS");
printf("\n\nBook name:%s",(bk+i)->bname);
printf("\n\nAuthor Name:%s",(bk+i)->aname);
printf("\n\nCost:Rs %d.00",(bk+i)->cost);
printf("\n\nDesciption:%s",(bk+i)->descpt);
if((bk+i)->status[0]=='Y')
{
char temp[6];
strncpy(temp,(bk+i)->isto,6);
printf("\n\nStatus:Issued");
printf("\n\nIssued to: %.6s",temp);
printf("\n\nDate of issue:%d/%d/%d",(bk+i)->iss.da_day, \
(bk+i)->iss.da_mon,(bk+i)->iss.da_year);

printf("\n\nExpected date of return:%d/%d/%d", \
(bk+i)->ret.da_day,(bk+i)->ret.da_mon,(bk+i)->ret.da_year);

}
else
printf("\n\nStatus:Not Issued");
getch();
clrscr();
return;
}
int display()
{
int op;
char msg[26];
clrscr();
printf("\t\t\tLIBMAN-A Library Management Software\n");
printf("\n\nDate :%d/%d/%d\n",dt.da_day,dt.da_mon,dt.da_year);
printf("\n1.Edit book list");
printf("\n2.Edit Student list");
printf("\n3.Student status");
printf("\n4.Book status");
printf("\n5.Issue");
printf("\n6.View books");
printf("\n7.Return Books");
printf("\n8.View book list");
printf("\n9.View student list");
strcpy(msg,"0.Exit\nEnter your choice:");
printf("\n%s",msg);
scanf("%d",&op);
return op;
}
void issue()
{
char bno[6],sno[6];
int size,bsize,i,flag=0,size1,bsize1,j,flag1=0,flag2=0,flag3=0;
char msg[22];
FILE *fp;
book *bk;
student *st;
flag1=flag2=flag=flag3=0;
strcpy(msg,"Enter the book number:");
printf("\n%s",msg);
scanf("%s",bno);
bsize=getsize("book.rrn");
size=bsize/sizeof(book);
if(size==0)
{
printf("\nBooklist does not exist!");
getch();
return;
}
fp=fopen("book.rrn","r+");
bk=(book*)malloc(size*sizeof(book));
fread(bk,sizeof(book),size,fp);
fcloseall();
for(i=0;i<size;i++)
{
int temp;
temp=strncmp(bno,(bk+i)->bno,strlen(bno));
if((int)temp==0)
{
flag=1;
break;
}
}
if((bk+i)->status[0]=='N')
flag3=1;
if(flag==1 && flag3==1)
{
printf("Enter the student no:");
scanf("%s",sno);
bsize1=getsize("student.rrn");
size1=bsize1/sizeof(student);
fp=fopen("student.rrn","r+");
st=(student*)malloc(size1*sizeof(student));
fread(st,sizeof(student),size1,fp);
fcloseall();
for(j=0;j<size1;j++)
{
int temp;
temp=strncmp(sno,(st+j)->sno,strlen(sno));
if(temp==0)
{
flag1=1;
break;
}
}
if(flag1==1&&flag==1)
{
if((st+j)->token<5)
{
int price;
flag2=1;
fp=fopen("book.rrn","w+");
price=(bk+i)->cost;
strcpy((bk+i)->isto,sno);
(bk+i)->status[0]='Y';
(bk+i)->cost=price;
assign(bk+i);
fwrite(bk,sizeof(book),size,fp);
fcloseall();
fp=fopen("student.rrn","w+");
(st+j)->token+=1;
fwrite(st,sizeof(student),size1,fp);
fcloseall();
getch();
}
}
}
if(flag!=1)
printf("\nInvalid Book Number!");
else if(flag3!=1)
printf("\nBook has aldready been issued!");
else if(flag1!=1)
printf("\nInvalid student number!");
else if(flag2!=1)
printf("\nTokens Exhausted!");
else;
}