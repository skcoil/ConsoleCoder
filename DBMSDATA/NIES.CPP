#include <errno.h>
#include<conio.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include<fstream.h>
#include<time.h>
#include<bios.h>
#include<iomanip.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<math.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

#define DELAY 1
#define SOUND 3500

int ext,screensaver,games;
//upper statement mera hai/
float pt[5][3]={-100,0,0, 0,0,45,100,0,0,0,0-45,0,130,0};
//3d ball ka hai neche//
int i;
void state(int x,int y);

void *ptr1[4],*ptr2[4];
/* 3d Ball */
char ball[20][20]=
{
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,12,12,12,12,12,12,12,12,0,0,0,0,0,0},
{0,0,0,0,12,12,12,12,12,12,12,12,12,12,12,12,0,0},
{0,0,0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,0,0},
{0,0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,0},
{0,0,12,12,12,12,12,15,15,12,12,12,12,12,12,12,12,12,0,0},
{0,12,12,12,12,12,15,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,12,15,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,15,15,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,15,15,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,15,15,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,12,15,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0},
{0,0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,0},
{0,0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,0},
{0,0,0,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,0,0},
{0,0,0,0,12,12,12,12,12,12,12,12,12,12,12,12,0,0,0,0},
{0,0,0,0,0,0,12,12,12,12,12,12,12,12,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
/* Condition to check out of range */
int COND(int x,int y)
{
	if (x>10 && x<getmaxx()-10 && y>10 && y<getmaxy()-10)
		return 1;
	else
		return 0;
}

/* This sub-routine will check which path to follow on stiking the wall
of
the container */
void state(int x,int y,int mode)
{
	while(COND(x,y)&&!kbhit())
	{
		putimage(x,y,ptr1[4],COPY_PUT);
		putimage(getmaxx()-x,getmaxy()-y,ptr1[4],COPY_PUT);
		switch(mode)
		{
			case 0:
				x++;
				y++;
				break;
			case 1:
				x++;
				y--;
				break;
			case 2:
				x--;
				y++;
				break;
			case 3:
				x--;
				y--;
				break;
		}
		delay(DELAY);
		nosound();
		putimage(x,y,ptr2[4],COPY_PUT);
		putimage(getmaxx()-x,getmaxy()-y,ptr2[4],COPY_PUT);
	}
	cleardevice();
	if(x>=(getmaxx()-10)||x<=10)
	{
		sound(SOUND);
		switch(mode)
		{
			case 0:
				state(--x,--y,2);
				break;
			case 1:
				state(--x,++y,3);
				break;
			case 2:
				state(++x,--y,0);
				break;
			case 3:
				state(++x,++y,1);
				break;
		}
	}
	else
	if(y>=getmaxy()-10||y<=10)
	{
		sound(SOUND);
		switch(mode)
		{
			case 0:
				state(--x,--y,1);
				break;
			case 1:
				state(--x,++y,0);
				break;
			case 2:
				state(++x,--y,3);
				break;
			case 3:
				state(++x,++y,2);
				break;
		}
	}
	else
		exit(0);
}
//neche snakeman game ka func hai//
unsigned key;
int len=0,count=0,foodtype=0,d,m,food_flag=0,j=0,ii=0,display_count=10,
hscore_pos=0,x_index=0,y_index=0,mx,my,maze=1,speed=100;
long score=0,ti_elap=0,ti_rem=15,tot_ti=15,ti_init;
char *main_menu[]={{"1. Play"},{"2. Options"},{"3. Instruction"},
				   {"4. Hi-Score"},{"5. Exit"}};
char *game_menu[]={{"1. Mazes"},{"2. Level"},{"3. Back to Main menu"}};
char *maze_menu[]={{"1. Open"},{"2. Box"},{"3. Twisted"},
				   {"4. Return to Main menu"}};
char *level_menu[]={{"1. Beginner"},{"2. Intermediate"},{"3. Expert"},
					{"4. Return to Main menu"}};
char *m_m[]={"P","O","I","H","E"};
char *g_m[]={"M","L","B"};
char *mm[]={"O","B","T","R"};
char *lm[]={"B","I","E","R"};

int maze3_x[][14]={{2,3,4,5,6,7,8,9,10,11,12,13,14,15},
				   {25},
				   {30},
				   {37,38,39,40,41,42,43,44,45,46,47,48,49,50}};
int maze3_y[][14]={{30},
				   {2,3,4,5,6,7,8,9,10,11,12,13,14,15},
				   {27,28,29,30,31,32,33,34,35,36,37,38,39,40},
				   {20}};


  void showfood();
  void end();
  void show_game_menu();
  void show_main_menu();

enum{UP=1,RIGHT=2,DOWN=3,LEFT=4}DIRECTION,Pre_Dir;

struct
{
 unsigned x:7 ;
 unsigned y:7 ;
}coordinate[1000],tail,head,food;

inline void initialise()
{
  d=DETECT;
  initgraph(&d,&m,"e:\tc\bgi");
  cleardevice();
  mx=getmaxx();
  my=getmaxy();
}

void RESET()
{
  len=count=foodtype=food_flag=i=j=hscore_pos=x_index=y_index=0;
  display_count=10,
  speed=100;
  score=ti_elap=0;ti_rem=tot_ti=15;
  head.x=head.y=tail.x=tail.y=food.x=food.y=0;
  for(i=0;i<1000;i++)
   coordinate[i].x=coordinate[i].y=0;
}

 void showoff_food()
  {
   gotoxy(food.x,food.y);
   cout<<" ";
   food.x=food.y=0;
   showfood();
  }


int showfoodtimer(int fo_fl)
{
 if(fo_fl==1)
 {
  if(ti_rem<=0)
   {
	 showoff_food();
	 ti_rem=15;
	 food_flag=0;
   }
  else
  {
   ti_elap=((biostime(0,0L)-ti_init)/(speed/16));
   ti_rem=(tot_ti-(ti_elap));
   gotoxy(7,46);
   if(ti_rem<10)
	cout<<"0"<<ti_rem;
   else
	cout<<ti_rem;
  }
 }
 else
  {
   gotoxy(7,46);
   cout<<"  ";
  }
  return 0;
}

void showfood()
{
 int flag=0;
 re:
 food.x=random(49)+2;
 food.y=random(39)+2;
 for(i=0;i<len;i++)
 {
  if(food.x==coordinate[i].x && food.y==coordinate[i].y)
	goto re;
 }
 if(maze==3)
  {
   for(i=0;i<4;i++)
   {
	for(j=0;j<14;j++)
	{
	 if(food.x==maze3_x[i][j])
	  flag=1;
	}
	for(j=0;j<14;j++)
	{
	 if(food.y==maze3_y[i][j] && flag==1)
		goto re;
	}
   }
  }
 gotoxy(food.x,food.y);
 textcolor(RED);
 cprintf("@");
}

void showbigfood()
{
 re1:
 food.x=random(49)+2;
 food.y=random(39)+2;
 for(int j=0;j<len;j++)
 {
  if(food.x==coordinate[j].x && food.y==coordinate[j].y)
   goto re1;
 }
  textcolor(YELLOW);
  gotoxy(food.x,food.y);
  cprintf("é");
}

void exit()
{
	 delay(50);
	 textmode(4);
	 gotoxy(10,8);
	 cout<<"Exiting the program";
	 delay(2000);
	 exit(0);
}

void border()
{
  setcolor(GREEN);
  rectangle(2,2,mx-2,my-2);
  setcolor(RED);
  rectangle(4,4,mx-4,my-4);
  setcolor(GREEN);
  rectangle(6,6,mx-6,my-6);
  settextstyle(4,0,5);
  outtextxy(180,40,"SNAKEMAN");
  setcolor(YELLOW);
  line(165,88,440,88);
  setcolor(RED);
  line(165,90,440,90);
}


void intro_graphics()
{
  clrscr();
  initialise();

  border();
  settextstyle(3,0,3);
  setcolor(RED);
  outtextxy(130,200,"Programmed By:");
  settextstyle(1,0,3);
  setcolor(WHITE);
  outtextxy(330,200,"Manish Jain");
  outtextxy(150,235,"mkj_manishjain@yahoo.co.in");
  outtextxy(150,275,"         +91 9896455735");
  settextstyle(1,0,4);
  setcolor(RED);
  outtextxy(120,360,"Press any key to play");

  getch();
}

void showtime()
{
  char datebuf[9];
  char timebuf[9];

  _strdate(datebuf);
  _strtime(timebuf);
  gotoxy(30,45);
  cout<<" DATE       TIME";
  gotoxy(30,46);
  cout<<datebuf<<" "<<timebuf;
}

inline void showscore()
{
  gotoxy(15,45);
  cout<<"SCORE";
  gotoxy(16,46);
  cout<<score;
}

char *return_maze()
{
 switch(maze)
 {
  case 1: return ("OPEN");
  case 2: return ("BOX");
  case 3: return ("TWISTED");
 }
 return "OPEN";
}

void init()
{
  DIRECTION=Pre_Dir=RIGHT;

  gotoxy(60,30);
  cout<<"M A Z E";
  gotoxy(60,32);
  cout<<return_maze();
  gotoxy(5,45);
  cout<<"Timer";

  randomize();
  _setcursortype(_NOCURSOR);
  showtime();
  showscore();

  tail.x=10;
  tail.y=10;
  for(int i=10;i<15;i++)
  {
   coordinate[len].x=i;
   coordinate[len].y=10;
   gotoxy(coordinate[len].x,coordinate[len].y);
   cout<<char(223);
   len++;
  }
  head.x=14;
  head.y=10;

  textcolor(BLUE);
  for(i=1;i<=50;i++)
   {
	  j=1;
	  gotoxy(i,j);
	   cprintf("");
	  gotoxy(i,j+40);
	   cprintf("");
   }
  for(i=1;i<=41;i++)
   {
	  j=1;
	  gotoxy(j,i);
	   cprintf("");
	  gotoxy(j+50,i);
	   cprintf("");
   }

  showfood();
}

void show_snake(int DIRECTION)
{
   gotoxy(head.x,head.y);
   textcolor(GREEN);

   switch(DIRECTION)
   {
	case UP   :
		if(Pre_Dir==LEFT)
		  cprintf("Ý");
		else
		  cprintf("Þ");
		break;
	case RIGHT:
		if(Pre_Dir==DOWN)
		  cprintf("Ü");
		else
		  cprintf("ß");
		break;
	case DOWN :
		if(Pre_Dir==RIGHT)
		  cprintf("Þ");
		else
		  cprintf("Ý");
		break;
	case LEFT :
		if(Pre_Dir==UP)
		  cprintf("ß");
		else
		  cprintf("Ü");
		break;
   }
}

inline void showoff()
{
 gotoxy(tail.x,tail.y);
 cout<<" ";
}

inline void SOUND2()
{
 sound(1500);
 delay(55);
 nosound();
}

void gameover()
{
 sound(1220);
 delay(500);
 nosound();

 initialise();
 border();
 settextstyle(1,0,5);
 setcolor(RED);
 outtextxy(130,180,"GAME  OVER");

 settextstyle(1,0,5);
 setcolor(BLUE);
 outtextxy(140,250,"SCORE");

 gotoxy(48,16);
 char *s;
 ltoa(score,s,10);
 outtextxy(325,250,s);

 settextstyle(4,0,5);
 setcolor(WHITE);
 outtextxy(65,350,"Wish to continue:(Y/N):");
 char ch=getche();

 if(ch=='y'||ch=='Y')
 {
  outtextxy(510,350,"Y");
  getch();
  RESET();
  initialise();
  show_main_menu();
 }
 else if(ch=='n'||ch=='N')
  {
   outtextxy(510,350,"N");
   free(maze_menu);
   free(main_menu);
   free(level_menu);
   free(game_menu);
   free(m_m);
   free(mm);
   free(lm);
   free(g_m);
   exit();
  }
}


void loadmaze()
{
 if(maze==3)
 {
  textcolor(WHITE);
  for(i=1;i<15;i++)
  {
   gotoxy(i+1,30);
   cprintf("²");
   gotoxy(25,i+1);
   cprintf("²");
   gotoxy(36+i,20);
   cprintf("²");
   gotoxy(30,26+i);
   cprintf("²");
  }
 }
}

void game()
{
  init();
  loadmaze();
  sleep(2);
  while(1)
  {
   if(bioskey(1))
   {
	 key=bioskey(0);
	 int s=key>>8;
	 if(s==1)
	  exit();
	 else
	 if(s==72)      //If UP arrow key is pressed
	 {
	  if(DIRECTION==4 || DIRECTION==2)
	   {
		 Pre_Dir=DIRECTION;
		 DIRECTION=UP;
	   }
	 }
	 else if(s==80)  //If DOWN arrow key is pressed
	 {
	  if(DIRECTION==4 || DIRECTION==2)
	   {
		 Pre_Dir=DIRECTION;
		 DIRECTION=DOWN;
	   }
	 }
	 else if(s==77)   ////If RIGHT arrow key is pressed
	 {
	  if(DIRECTION==1 || DIRECTION==3)
	   {
		 Pre_Dir=DIRECTION;
		 DIRECTION=RIGHT;
	   }
	 }
	 else if(s==75)   ////If LEFT arrow key is pressed
	 {
	  if(DIRECTION==1 || DIRECTION==3)
	   {
		 Pre_Dir=DIRECTION;
		 DIRECTION=LEFT;
	   }
	 }
   }

   if(DIRECTION==2)         //Right Key
	 head.x++;
   else if(DIRECTION==1)    //Up Key
	 head.y--;
   else if(DIRECTION==4)    //Left Key
	 head.x--;
   else if(DIRECTION==3)    //Down Key
	 head.y++;

   if(maze==1)              //OPEN maze
   {
	if(head.x>50)
	   head.x=2;
	else if(head.x<=1)
	   head.x=50;
	if(tail.x>50)
	   tail.x=2;
	else if(tail.x<=1)
	   tail.x=50;
	if(head.y>40)
	   head.y=2;
	else if(head.y<=1)
	   head.y=40;
	if(tail.y>40)
	   tail.y=2;
	else if(tail.y<=1)
	   tail.y=40;
   }

   else if(maze==2)         //BOX Maze
   {
	 if(head.x>50 ||head.y>40 ||head.x<2 ||head.y<2)
	  gameover();
   }
   else if(maze==3)        //TWISTED or SPIRAL Maze
   {
	for(i=2;i<16;i++)
	{
	 if((head.x==25 && head.y==i)||(head.x==i && head.y==30)
		||(head.x==35+i && head.y==20)||(head.x==30 && head.y==25+i))
	  {
			gameover();
	  }
	}
   if(head.x>50)
	   head.x=2;
   else if(head.x<=1)
	   head.x=50;
   if(tail.x>50)
	   tail.x=2;
   else if(tail.x<=1)
	   tail.x=50;
   if(head.y>40)
	   head.y=2;
   else if(head.y<=1)
	   head.y=40;
   if(tail.y>40)
	   tail.y=2;
   else if(tail.y<=1)
	   tail.y=40;
 }


   for(int i=0;i<len;i++)
	 {
	  if(head.x==coordinate[i].x && head.y==coordinate[i].y)
		{
		  gameover();
		}
	 }

	show_snake(DIRECTION);

	if(head.x==food.x && head.y==food.y)
	 {
		 count++;
		 if(ti_rem>5)
		   score+=(foodtype*8)+2+(foodtype*((ti_rem*3)/2));
		 else
		   score+=(foodtype*8)+2;

	  ti_rem=15;
	  SOUND2();
	  food.x=food.y=0;

	  if(count==5)
	   {
		 showbigfood();
		 food_flag=1;
		 ti_init=biostime(0,0);
		 showfoodtimer(1);
		 foodtype=1;
		 count=0;
	   }
	  else
	   {
		 showfood();
		 food_flag=0;
		 foodtype=0;
	   }
	  len++;
	 }
	else
	 {
	  tail.x=coordinate[0].x;
	  tail.y=coordinate[0].y;

	  showoff();

		for(int k=0;k<len-1;k++)
		 {
			coordinate[k].x=coordinate[k+1].x;
			coordinate[k].y=coordinate[k+1].y;
		 }
	 }

	coordinate[len-1].x=head.x;
	coordinate[len-1].y=head.y;

	delay(speed);
	showtime();
	showscore();
	showfoodtimer(food_flag);

	gotoxy(64,14);
	cout<<"X-Cor Y-Cor";

	gotoxy(65,15);
	cout<<head.x<<"    "<<head.y;
  }
}

void get_level_choice()
{
 get:
 int cho=bioskey(0);
 cho=cho>>8;
 switch(cho)
 {
  case 2:
  case 48:
  case 28:
  case 79: speed=125;
		   show_main_menu();
		   break;
  case 3:
  case 23:
  case 80: speed=90;
		   show_main_menu();
		   break;
  case 4:
  case 18:
  case 81: speed=55;
		   show_main_menu();
		   break;
  case 5:
  case 19:
  case 75: show_game_menu();
		   break;
  default: goto get;
 }
}

void get_maze_choice()
{
 get:
 int cho=bioskey(0);
 cho=cho>>8;
 switch(cho)
 {
  case 2:
  case 28:
  case 24:
  case 79: maze=1;
		   show_main_menu();
		   break;
  case 3:
  case 48:
  case 80: maze=2;
		   show_main_menu();
		   break;
  case 4:
  case 20:
  case 81: maze=3;
		   show_main_menu();
		   break;
  case 5:
  case 19:
  case 75:         show_game_menu();
		   break;
  default: goto get;
 }
}

void getlevel()
{
  cleardevice();
  border();

  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(50,140,"L E V E L");

  settextstyle(3,0,5);
  for(i=0;i<4;i++)
  {
   setcolor(WHITE);
   outtextxy(67,190+(45*i),level_menu[i]);
   setcolor(RED);
   outtextxy(130,190+(45*i),lm[i]);
  }
  get_level_choice();
}


void getmaze()
{
  cleardevice();
  border();

  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(50,140,"M A Z E S");
  settextstyle(3,0,5);

  for(i=0;i<4;i++)
  {
   setcolor(WHITE);
   outtextxy(67,190+(45*i),maze_menu[i]);
   setcolor(RED);
   outtextxy(130,190+(45*i),mm[i]);
  }
  get_maze_choice();
}

void get_gm_choice()
{
 get:
 int cho=bioskey(0);
 cho=cho>>8;
 switch(cho)
 {
  case 2:
  case 50:
  case 28:
  case 79: getmaze();
		   break;
  case 3:
  case 38:
  case 80: getlevel();
		   break;
  case 4:
  case 48:
  case 81: show_main_menu();
		   break;
  default: goto get;
 }
}

void show_game_menu()
 {
  cleardevice();
  border();
  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(50,140,"G A M E  M E N U");

  settextstyle(3,0,5);

  for(i=0;i<3;i++)
  {
   setcolor(WHITE);
   outtextxy(67,190+(45*i),game_menu[i]);
   setcolor(RED);
   outtextxy(130,190+(45*i),g_m[i]);
  }
   get_gm_choice();
 }

void play()
{
 cleardevice();
 restorecrtmode();
 textmode(64);
 game();
}

void options()
{
 show_game_menu();
}

void instruction()
{
 cleardevice();
 border();
 setcolor(RED);
 settextstyle(1,0,5);
 outtextxy(50,140,"I N S T R U C T I O N S");
 settextstyle(3,0,3);
 setcolor(WHITE);
 outtextxy(60,190,"1. Move the snake using Arrow Keys -> ");
 outtextxy(60,230,"   UP, DOWN, LEFT, RIGHT");
 outtextxy(60,270,"2. Eat food (@,é) and make snake grow longer.");
 outtextxy(60,300,"3. You will get 2 points for (@) and");
 outtextxy(60,330,"   more points for Bonus food(é)");
 outtextxy(60,365,"4. Don't let it hit the walls or its tail");
 settextstyle(4,0,4);
 setcolor(RED);
 outtextxy(140,425,"Press any key to Continue");
 getch();
 show_main_menu();
}

void hiscore()
{
 cleardevice();
 border();
 setcolor(RED);
 settextstyle(1,0,5);
 outtextxy(50,140,"    H I   S C O R E");
 settextstyle(3,0,3);
 setcolor(WHITE);
 outtextxy(60,220,"Sorry! This feature is not available in this version");
 outtextxy(60,270,"For further details, Contact  :  ");
 setcolor(GREEN);
 outtextxy(60,310,"        mkj_manishjain@yahoo.co.in");
 outtextxy(60,345,"        Mobile no.: +91 9896455735 ");
 settextstyle(4,0,4);
 setcolor(RED);
 outtextxy(140,425,"Press any key to Continue");
 getch();
 show_main_menu();
}


void get_mm_choice()
{
 get:
 int cho=bioskey(0);
 cho=cho>>8;
 switch(cho)
 {
  case 2:
  case 25:
  case 28:
  case 79: play();
	   break;

  case 3:
  case 24:
  case 80: options();
	   break;

  case 4:
  case 23:
  case 81: instruction();
	   break;

  case 5:
  case 35:
  case 75: hiscore();
	   break;

  case 6:
  case 18:
  case 76: exit();
	   break;
  default: goto get;
 }
}

void show_main_menu()
{
 cleardevice();
 border();
 settextstyle(1,0,5);
 setcolor(GREEN);
 outtextxy(60,130,"M A I N  M E N U");

 settextstyle(3,0,5);

 for(i=0;i<5;i++)
 {
 setcolor(WHITE);
 outtextxy(67,180+(35*i),main_menu[i]);
 setcolor(RED);
 outtextxy(130,180+(35*i),m_m[i]);
 }

 get_mm_choice();
}

void end()
{
  initialise();

  for(j=0;j<=2;j++)
  {
   setcolor(RED+j);
   circle(mx/2,my/2,150+j*2);
  }
  settextstyle(4,0,5);
  outtextxy(mx/2-65,my/2-20,"The End");
  getch();
  closegraph();
  restorecrtmode();
  exit(0);
}
//ye neche alag hai snake man ka nahi hai//
void render(float,float,float, float,float,float,
float,float,float,float,float,float);
void initialize(void);
void firstpage(void);
void call_first(void);
float intensity,alpha,thita,tempy,tempz,tempx;
char ch='4';
char ch1='1';
char ch2='1';
int pts1[5][3];
float tx,ty,tz,dd=.5;
void assign(float,float,float,float,float,float,float,float,float);
void scan_line(float,float,float,float,float,float,float,float,float);
void drawpyramid(float,float,float,float,float,float);
void call_assign(void);
void display(void);
void tranform(void);
void draw(void);
void drawscale(void);
float pts[5][3]={-100,0,0, 0,0,45, 100,0,0, 0,0,-45, 0,130,0};
float pts2[5][3]={228,273,0, 305,295,0, 428,273,0, 350,250,0
,328,143,0};
//clock ka func neche hai//

void as();
void ss();
void ssbd();
void ds();
void das();
void esd();
void momd();
void domd();
void help();
void aboutus();
void ts();
void os();
void ren();
void directry();
void styleball();
void triangle3D();
void styletaj();
void stylecar3D();
void GKQUIZ();
void SNAKEMAN();
void mmf();
void clock3d();
void circle3d();
void dms();
void main()

{
char a;
clrscr();
gotoxy(9,1);
cout<<" Welcome To IT-Solution Accounting Software ";
gotoxy(8,2);

cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n1) Add Students";
cout<<"\n2) View Students Details";
cout<<"\n3) Search Students Details Manually";
cout<<"\n4) Delete Students";
cout<<"\n5) Delete All Students";
cout<<"\n6) Edit Students Details";
cout<<"\n7) Rename Account Name";
cout<<"\n8) Make Own Menu Details";
cout<<"\n9) Delete Menu Details";
cout<<"\n0) Delete Multiple Students";
cout<<"\nx) Extras";
cout<<"\nh) Help";
cout<<"\ne) Exit";
cout<<"\na) About Us";
cout<<"\nt) Technical Support";
cout<<"\no) Our Other Products";
cout<<"\n\nEnter Your Choice:";
a=getche() ;
switch(a)
{
case '1':
as();
break;
case '2':
ss();
break;
case '3':
ssbd();
break;
case '4':
ds();
break;
case '5':
das();
break;
case '6':
esd();
break;
case '7':
ren();
break;
case '8':
momd();
break;
case '9':
domd();
break;
case '0':
dms();
break;
case 'h':
help();
case 'e':
exit(0);
break;
case 'a':
aboutus();
break;
case 't':
ts();
break;
case 'o':
os();
break;
case 'x':
clrscr();
cout<<"\t*************** Extras (Fun) *****************";
cout<<"\n\t++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n1. Screen Saver";
cout<<"\n2. Games";
cout<<"\n3. Clock";
cout<<"\n4. Switch to main menu";
cout<<"\n\nEnter your Choice:";
ext=getche();
switch(ext)
{
case 1:
clrscr();
cout<<"\t   Screen Savers    ";
cout<<"\n\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n1. 3D Ball";
cout<<"\n2. Taj Mahal";
cout<<"\n3. 3D Car";
cout<<"\n4. IN-OUT";
cout<<"\n0. Go to main menu";
cout<<"\n\nEnter your Choice:";
screensaver=getche();
switch(screensaver)
{
case 1:
styleball();
getch();
main();
break;
case 2:
styletaj();
getch();
main();
break;
case 3:
stylecar3D();
getch();
main();
break;
case 4:
circle3d();
break;
case 0:
main();
break;

default:
cout<<"\n\nInvalid choice!";
}
break;
case 2:
clrscr();
cout<<"\t   ! Games !   ";
cout<<"\n\n1. Ludo";
cout<<"\n2. Moon magic future";
cout<<"\n3. Snake Man 5.0";
cout<<"\n4. Go to main menu";
games=getche();
switch(games)
{
case 1:
cout<<"UNDER CONSTRUCTION!";
break;
case 2:
mmf();
break;
case 3:
SNAKEMAN();
break;
case 4:
main();
break;

default:
cout<<"\n\nInvalid choice!";
}
break;
case 3:
cout<<"UNDER CONSTRUCTION!";
break;
case 4:
main();
break;
default:
cout<<"\n\nInvalid choice!";
}
default:
gotoxy(5,23);
cout<<"Sorry! Unable To Open Invalid Choice!";
gotoxy(5,24);
cout<<"***************************************";
getch();
main();
}
getch();
}
void as()
{
char mass;
char yn='y';
do{
clrscr();
FILE *fp;
struct emp
{
int m;
char h[100],a[100],b[100],c[100],d[100],i[100],j[100],k[100],e[100],f[100],g[100];
}eE;
char a1[100];
cout<<"\nEnter First File Name To Save Account:";
cin>>a1;
fp=fopen(a1,"w");
cout<<"\t\t++++++++++ Adding New Student Details ++++++++++";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
gotoxy(1,6);
cout<<"Name:";
gotoxy(1,7);
cout<<"Father's Name:";
gotoxy(1,8);
cout<<"Address:";
gotoxy(1,9);
cout<<"Caste:";
gotoxy(1,10);
cout<<"Ph.no:";
gotoxy(1,11);
cout<<"Email-Id:";
gotoxy(1,12);
cout<<"Course:";
gotoxy(1,13);
cout<<"Course Started Date:";
gotoxy(1,14);
cout<<"Fees of Course:";
gotoxy(1,15);
cout<<"Date Of Birth:";
gotoxy(1,16);
cout<<"Occupation:";
gotoxy(6,6);
cin>>eE.a;
gotoxy(15,7);
cin>>eE.b;
gotoxy(9,8);
cin>>eE.c;
gotoxy(7,9);
cin>>eE.d;
gotoxy(7,10);
cin>>eE.e;
gotoxy(10,11);
cin>>eE.f;
gotoxy(8,12);
cin>>eE.g;
gotoxy(21,13);
cin>>eE.h;
gotoxy(16,14);
cin>>eE.i;
gotoxy(15,15);
cin>>eE.j;
gotoxy(13,16);
cin>>eE.k;
gotoxy(6,6);
fprintf(fp,"\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",eE.a,eE.b,eE.c,eE.d,eE.e,eE.f,eE.g,eE.h,eE.i,eE.j,eE.k);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nCongratulations! Record Successfully Saved!";
cout<<"\n********************************************";
cout<<"\n\nAdd More Record (y/n):";
yn=getche() ;
}while(yn=='y');
while(yn=='n')
{
cout<<"\n\nGo To Main Menu (y/n):";
mass=getche() ;
if(mass=='y')
{
main();
}
else
{
exit(0);
}
}
}
void ss()
{
char a99[100],i,que[100];
clrscr();
cout<<"\t\t============== Search Students ===============";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\nEnter Name To Search:";
cin>>a99;
for(i=0;i<'\0';i++);
clrscr();
cout<<"\t\t\t    Search Results";
cout<<"\n\t\t\t   ~~~~~~~~~~~~~~~~";
directry();
cout<<"\nWhich Accounting File You Want To Open Enter (Name/S.no):";
cin>>que;
clrscr();
cout<<"****************Your "<<que<<" Accounting File is Opened **************\n\n";
FILE *fp;
struct emp
{
int m;
char a[100],b[100],c[100],d[100],i[100],j[100],k[100],e[100],f[100],g[100],h[100];
}eE;
fp=fopen(que,"r");
if(fp==NULL)
{
clrscr();
cout<<"n\n\n\n\n\n\n\n\n\n\t\t\tSorry! File Cannot Exist\n\t\t\t++++++++++++++++++++++++\n\n\n\n\n";
}
else
{
while(fscanf(fp,"\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s",eE.a,eE.b,eE.c,eE.d,eE.e,eE.f,eE.g,eE.h,eE.i,eE.j,eE.k)!=EOF);
{
gotoxy(1,6);
cout<<"Name:";
gotoxy(1,7);
cout<<"Father's Name:";
gotoxy(1,8);
cout<<"Address:";
gotoxy(1,9);
cout<<"Caste:";
gotoxy(1,10);
cout<<"Ph.no:";
gotoxy(1,11);
cout<<"Email-Id:";
gotoxy(1,12);
cout<<"Course:";
gotoxy(1,13);
cout<<"Course Started Date:";
gotoxy(1,14);
cout<<"Fees of Course:";
gotoxy(1,15);
cout<<"Date Of Birth:";
gotoxy(1,16);
cout<<"Occupation:";

gotoxy(6,6);
cout<<eE.a;
gotoxy(15,7);
cout<<eE.b;
gotoxy(9,8);
cout<<eE.c;
gotoxy(7,9);
cout<<eE.d;
gotoxy(7,10);
cout<<eE.e;
gotoxy(10,11);
cout<<eE.f;
gotoxy(8,12);
cout<<eE.g;
gotoxy(21,13);
cout<<eE.h;
gotoxy(16,14);
cout<<eE.i;
gotoxy(15,15);
cout<<eE.j;
gotoxy(13,16);
cout<<eE.k;
fflush(stdin);
}
}
cout<<"\n\t\t\t\tPress Any Key to go to Main Menu.....";
getch();
main();
}
void ssbd()
{
int a;
clrscr();
cout<<"\t\t*********** Search Students Details Manualy ************";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n1) Search By Name\n2)Father's Name\n3)Date-of-birth\n4)Address\n5)Caste\n6)Ph-no\n7)Email-Id\n8)Course\n9)Course Started Date\n10)Occupation\n11)Qualification";
cout<<"\n\n\n\n\n\t\t\t\tSearch:";
cout<<"\n\t\t\t\t~~~~~~~~~";
gotoxy(40,19);
cin>>a;
}
void ds()
{
FILE *fp;
clrscr();
char del[100];
cout<<"\t\t----------------- Delete Students --------------------";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\t\t\t\tStudent Names";
cout<<"\n\t\t\t\t^^^^^^^^^^^^^";
gotoxy(2,23);
cout<<"Enter Name/S.no of Student To Delete:";
cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++";
gotoxy(40,23);
cin>>del;
fp=fopen(del,"r");
if(fp==NULL)
{
clrscr();
cout<<"\n\n\n\n\nEntered File Cannot Exist So, Cannot Delete!,  ACCESS DENIED!\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n\n\n";
}
else
{
remove(del);
cout<<"\n\n\n\n\n\n\n\t\t\tSuccessfully Deleted!";
}
cout<<"\n\t\t\tPress Any Key To Go To Main Menu....";
getch();
main();
}
void das()
{
char a='y';
gotoxy(2,24);
cout<<"Are You Sure To Lost All Details of Students (y/n):";
cin>>a;
if(a=='y')
{
cout<<"\n\n\nAll Data Successfully Deleted!";
cout<<"\nPress Any Key To Go To Main Menu";
getch();
main();
}
else
{
cout<<"\n\n\nNot Deleted Any Data OK!";
getch();
main();
}
}
void esd()
{
char a[100],i;
clrscr();
cout<<"\t     Edit Student Details ";
cout<<"\n\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\t\t\t   Student Names";
cout<<"\n\t\t\t   ^^^^^^^^^^^^^";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tEnter S.no/Name To Edit:";
cin>>a;
for(i=0;i<'\0';i++);
main();
}
void momd()
{
int i,a;
char a1[100],a2[100],a3,a4,yy[100],zz[100],k1[100],k2[100],k3[100],s1[100],s2[100],s3[100];
clrscr();
cout<<"\t\t****** Make Own Menu Details ******";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n1) Create New Directry";
cout<<"\n2) Create New Quistle";
cout<<"\n3) Create New Switching File (Attachment)";
cout<<"\n4) View Directries";
cout<<"\n5) View Quistle";
cout<<"\n6) View Switching File (Attachment)";
cout<<"\n7) Rename Directry";
cout<<"\n8) Edit Quistle";
cout<<"\n9) Edit in Swiching File (Attachment)";
cout<<"\n10) Rename Switching File (Attachment)";
cout<<"\n11) Go Back To Main Menu";
cout<<"\n12) Exit (Quit)";
cout<<"\n\n\nEnter Your Choice:";
a=getche();
switch(a)
{

case 1:
clrscr();
cout<<"\t\t************* Creating Directry **************";
cout<<"\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\nEnter Directry Name:";
cin>>a1;
for(i=0;i<'\0';i++);
cout<<"\nEnter More Directry (y/n):";
cin>>a2;
for(i=0;i<'\0';i++);
cout<<"\n\nBrowse Any Accounting file to Merge (y/n):";
cin>>a3;
if(a3=='y')
{
cout<<"\n\nEnter File Name/S.no:";
cin>>yy;
for(i=0;i<'\0';i++);
}
else
{
cout<<"OK!";
}
cout<<"\nBrowse Any Switching File To Mearge (y/n):";
cin>>a4;
if(a4=='y')
{
cout<<"\n\nEnter File Name/S.no:";
cin>>zz;
for(i=0;i<'\0';i++);
}
else
{
cout<<"\nOK!";
}
cout<<"\n\n\n\nFile Successfully Merged!";
cout<<"\nDirectry Name Successfully Entered!";
cout<<"\nDirectry Successfully Created!";
cout<<"\n\nPress Any Key to go to Main Menu....";
main();
break;
case 2:
clrscr();
cout<<"\t\t*************** Creating New Quistle *****************";
cout<<"\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\nEnter Quistle Name:";
cin>>k1;
for(i=0;i<'\0';i++);
cout<<"\nEnter Quistle Type (if charter press 'c') (if integer press 'i'):";
cin>>k2;
for(i=0;i<'\0';i++);
cout<<"\nIn which Account you want to Add Quistle (Enter name/s.no):";
cin>>k3;
for(i=0;i<'\0';i++);
cout<<"\n\nQuistle Name Successfully Entered!";
cout<<"\nQuistle is Added on "<<k3<<" Account!";
cout<<"\nQuistle Successfully created!";
cout<<"\n\nPress Any Key To Go To Main Menu...";
getch();
main();
break;
case 3:
clrscr();
FILE *fp;
struct emp
{
char z1[100],z2[100],z3[100];
}e;
char open[100];
cout<<"Enter Swiching File Name 'FIRST':";
cin>>open;
fp=fopen(open,"w");
cout<<"\n\n\t\t**************** Creating Switching File *******************";
cout<<"\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\nEnter Switching file Heading:";
cout<<"\nEnter Switching File Details:";
cout<<"\nEnter Name Of Directry You Want To Switch This file:";
gotoxy(30,7);
cin>>e.z1;
gotoxy(30,8);
cin>>e.z2;
gotoxy(53,9);
cin>>e.z3;
fprintf(fp,"%s\n%s\n%s\n",e.z1,e.z2,e.z3);
break;
default:
cout<<"\n\n\n\n\n\nInvalid Choice!";
}
getch();
main();
}
void domd()
{
int a;
clrscr();
cout<<"\t\t Delete Menu Details ";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n1)Directries";
cout<<"\n2)Quistle";
cout<<"\n3)Switching File";
cout<<"\n4) Delete Multiple Directries";
cout<<"\n5) Delete Multiple Quistle";
cout<<"\n6) Delete Multiple Switching File (Attachment)";
cout<<"\n\n\nWhat you Want To Delete:";
cin>>a;
switch(a)
{
case 1:
clrscr();
cout<<"+++++++++++++++ Directries List +++++++++++++++++++++";
getch();
main();
break;
case 2:
clrscr();
cout<<"+++++++++++++++ Quistle List + Path ++++++++++++++++++++";
getch();
main();
break;
case 3:
clrscr();
cout<<"+++++++++++++++++ Switching Files List ++++++++++++++++++++";
getch();
main();
break;
default:
cout<<"Invalid Choice!!!";
getch();
main();
}
}
void help()
{
clrscr();
cout<<"\t\t     Help ";
cout<<"\n\t\t    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n1) Compatable for All version of Windows, Mac ,Linux";
cout<<"\n2) Compability for this program is 900000.67 ghz ram, processer.";
cout<<"\n3) To Add Students Press 1 in Main Menu";
cout<<"\n4) To Search Students Press 2 in Main Menu";
cout<<"\n5) To Search Students Details Manualy Press 3 in Main Menu";
cout<<"\n6) To Delete Students Press 4 in Main Menu";
cout<<"\n7) To Delete All Students Press 5 in Main Menu";
cout<<"\n8) To Edit Students Details Press 6 in Main Menu";
cout<<"\n9) To Make Own Menu Details Press 7 in Main Menu";
cout<<"\n10) To Delete Menu Details Press 8 in Main Menu";
cout<<"\n11) To Exit (Quit/Close) Program Press 0 in Main Menu";
cout<<"\n\n\nPress Any Key To Go To Main Menu.....";
getch();
main();
}
void aboutus()
{
clrscr();
cout<<"\t\t=============== About Us =================";
cout<<"\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n Join Us & Get Much More with SK-SOFT";
cout<<"\n\nVersion 9.0 (Build 7600)";
cout<<"\n\nCopyright @ 2011 Sk-Soft Corporation. All rights reserved.";
cout<<"\n\nThe Sk-Windows Ultimate operating system and its user interface are protected by trademark and other pending or existing intellectual property rights in the     India, United States & other countries.";
cout<<"\n\n\nThis Product is Licensed under the Sk-Soft (Software) License Terms to:";
cout<<"\n\n\n\n\t\t\tS-TECH (SAURABH)";
cout<<"\n\t\t\t****************";
cout<<"\n\nPress Any Key To Go To Main Menu....";
getch();
main();
}
void ts()
{
clrscr();
cout<<"\t\t+++++++++++++ Technical Support +++++++++++++++";
cout<<"\n\t\t***********************************************";
cout<<"\n\n For Any Probleum & Tecnical Support Contact Us";
cout<<"\n************************************************";
cout<<"\n\nFor Activation:- call - 09039048740 (MP-CG)";
cout<<"\nE-Mail:- saurabh.powers@redffmail.com";
cout<<"\n\nFor Tecnical Support:- call - 08109214306";
cout<<"\nE-Mail:- cosmos.korba@rediffmail.com";
cout<<"\n\nOur Website:- www.skweb.com";
cout<<"\n\n\nFOLLOW US ON FACEBOOK & TWITTER";
cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
cout<<"\n\n\tSaurabh Prasad";
cout<<"\n\t--------------";
getch();
main();
}
void os()
{
clrscr();
cout<<"\t\t\tOUR OTHER PRODUCTS";
cout<<"\n\t\t\t++++++++++++++++++";
cout<<"\n To Download Other Products Please Visit Our Website";
cout<<"\n\nWebsite:- WWW.SKWEB.COM";
cout<<"\n\n\nNote:- You can download much more from our Website like all kinds of softwares, games, songs, videos, themes, 	Mobile games & Mobile themes e.t.c. But these all are Trial Version Only Our Songs & Videos Are Full.";
cout<<"\n\n\t\t\t\tThanks for Using Sk-soft (Saurabh Software)";
cout<<"\n\t\t\t\t+++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\nPress Any Key To Go To Main Menu....";
getch();
main();
}
void ren()
{
clrscr();
gotoxy(15,1);
cout<<"+++++++++++++++ Rename Account ++++++++++++++++++";
gotoxy(15,2);
cout<<"*************************************************";
gotoxy(29,4);
cout<<"Account Names List";
gotoxy(29,5);
cout<<"++++++++++++++++++";
FILE *fs,*ft;
int ch;
char refile[100],newnam[100];
gotoxy(6,23);
cout<<"Which Account You Want To Rename Enter (S.no/Name)...?";
cin>>refile;
gotoxy(6,24);
cout<<"Enter New Name Of File You Want...?:";
cin>>newnam;
fopen(refile,"r");
rename(refile,newnam);
}
void styleball()
{
int driver,mode;
initgraph(&driver,&mode,"");
driver=DETECT;

	int gm,gd=DETECT;
	int i,j;
	initgraph(&gd,&gm,"\tc\tc\bgi");
	for(i=0;i<20;i++)
		for(j=0;j<20;j++)
			if(ball[i][j]!='0')
				putpixel(10+i,10+j,ball[j][i]);
	getimage(10,10,30,30,ptr1[4]);
	cleardevice();
	getimage(10,10,30,30,ptr2[4]);
	/* start with (20,20) */
	state(20,20,0);
	getch();
}
void styletaj()
{
int gd=DETECT,gm;
char tower,stage;
initgraph(&gd,&gm,"c:\tc\bgi");
int h=40;
line(0,440,639,440);

//line(20,30+h,619,30+h);

//line(25,400,38,120);
//line(85,400,78,120);
//line(85,400,78,120);


//=================================Ist tower========================//
//=================================IIst
tower;//"============================";////#################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
int l=-20;
line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);
//||||||||||||||||||||||||||||||Ist
stage;//||||||||||||||||||||||||||||||||||||||||||||//
line(23+l,328+h,32+l,334+h);               // slant
line(88+l,328+h,80+l,334+h);                       // slant
line(83+l,323+h,75+l,334+h);                       // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h);                       // slant
line(57+l,323+h,57+l,332+h);                       // slant
line(30+l,323+h,39+l,334+h);                       // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h);      // slant

ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);
setfillstyle(6,15);
floodfill(60+l,320+h,15);

setfillstyle(10,15);

floodfill(60+l,320+h+15,15);


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);

//||||||||||||||||||||||||||||||2st
stage;//||||||||||||||||||||||||||||||||||||||||||||//
int t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h);               // slant
line(88+l,328+t+2+h,76+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h);                       // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);      // slant

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
setfillstyle(6,15);
floodfill(60+l,320+h+t,15);                            ////////////////
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);

//||||||||||||||||||||||||||||||3rd
stage;//||||||||||||||||||||||||||||||||||||||||||||//

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);



 t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h);               // slant
line(80+l,328+t+4+h,73+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h);                       // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h);      // slant

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,15);
floodfill(60+l,322+h+t,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);

setfillstyle(10,15);
floodfill(60+l-2,322+h+t-30,15);


//=================================IIst
tower;//============================//
//#################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
 l=547;


line(28+l,400+h,33+l,333+h);
line(86+l,400+h,80+l,333+h);
//||||||||||||||||||||||||||||||Ist
stage;//||||||||||||||||||||||||||||||||||||||||||||//
line(23+l,328+h,32+l,334+h);               // slant
line(88+l,328+h,80+l,334+h);                       // slant
line(83+l,323+h,75+l,334+h);                       // slant
line(75+l,323+h,70+l,332+h);
line(66+l,323+h,65+l,332+h);                       // slant
line(57+l,323+h,57+l,332+h);                       // slant
line(30+l,323+h,39+l,334+h);                       // slant
line(38+l,323+h,45+l,332+h);
line(48+l,323+h,51+l,332+h);      // slant

ellipse(57+l,320+h,350,190,34,5);
ellipse(57+l,327+h,350,190,34,5);
ellipse(57+l,337+h,0,180,25,5);
line(22+l,320+h,22+l,328+h);
line(91+l,320+h,91+l,327+h);
setfillstyle(6,15);
floodfill(60+l,320+h,15);

setfillstyle(10,15);

floodfill(60+l,320+h+15,15);


//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
//+++++++++++++++++++++++++++++++++++2nd+++++++++++++++++++++++++++

line(35+l,315+h,38+l,242+h);
line(80+l,315+h,75+l,242+h);

//||||||||||||||||||||||||||||||2st
stage;//||||||||||||||||||||||||||||||||||||||||||||//
t=-93;
line(23+4+l,328+t+3+h,32+5+l,334+t+h);               // slant
line(88+l,328+t+2+h,76+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(78+l,323+t+3+h,71+l,332+t+h);
line(66+l,323+t+2+h,65+l,332+t+h);                       // slant
line(57+l,323+t+2+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(35+l,323+t+3+h,45-3+l,332+t+h);
line(48+l,323+t+2+h,51+l,332+t-2+h);      // slant

ellipse(57+l,320+t+3+h,360,190,30,5);
ellipse(57+l,327+t+3+h,360,190,30,5);
ellipse(57+l,337+t-1+h,0,180,18,5);

line(26+l,320+t+3+h,26+l,328+t+2+h);
line(88+l,320+t+3+h,88+l,327+t+3+h);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
setfillstyle(6,15);
floodfill(60+l,320+h+t,15);                            ////////////////
setfillstyle(10,15);
floodfill(60+l,320+h-35,15);

//||||||||||||||||||||||||||||||3rd
stage;//||||||||||||||||||||||||||||||||||||||||||||//

line(38+l,225+h,41+l,152+h);
line(75+l,225+h,72+l,152+h);



 t=-182;
line(32+l,328+t+4+h,32+7+l,334+t+h);               // slant
line(80+l,328+t+4+h,73+l,334+t+h);                       // slant
//line(+l83,323+t+4,75,334+t);                       // slant
line(76+l,323+t+5+h,71+l,332+t+h);
line(66+l,323+t+4+h,65+l,332+t+h);                       // slant
line(57+l,323+t+4+h,57+l,332+t-2+h);                       // slant
//line(30,323+t+2,39,334+t);                       // slant
line(39+l,323+t+6+h,45+l,332+t+1+h);
line(48+l,323+t+4+h,51+l,332+t+h);      // slant

ellipse(57+l,320+t+6+h,360,190,24,5);
ellipse(57+l,327+t+4+h,360,190,24,5);
ellipse(57+l,337+t-1+h,0,170,16,5);

line(32+l,320+t+6+h,32+l,328+t+3+h);
line(81+l,320+t+6+h,81+l,327+t+3+h);

setfillstyle(6,15);
floodfill(60+l,322+h+t,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//
setfillstyle(10,15);
floodfill(60+l,322+h+t+30,15);
//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);
setfillstyle(6,15);
floodfill(60+l-2,322+h+t-60,15);

setfillstyle(10,15);
floodfill(60+l-2,322+h+t-30,15);
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//

//GGF################TOWER%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//

ellipse(51+l,132+h,340,216,4,15);
ellipse(62+l,131+h,327,216,4,15);
ellipse(72+l,132+h,327,216,2,15);
ellipse(42+l,132+h,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h);
line(75+l,107+h,75+l,140+h);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);


//=================================Ist tower========================//

//+++++++++++++++++++++++++++++++++TAJ mahal++++++++++++++++++++++++//

////setcolor(15);

rectangle(275,290,365,440);         //  inner
rectangle(268,283,372,440);           //     //inner
setfillstyle(1,15);
floodfill(274,294,15);
line(280,440,280,350);
//line(283,440,283,350);
ellipse(315,349,130,180,35,40);
ellipse(275,280,290,326,53,40);

line(360,440,360,350);
ellipse(325,349,360,50,35,40);
ellipse(361,280,216,255,53,40);
setfillstyle(9,7);
floodfill(277,386,15);
putpixel(277,386,14);

line(280,360,359,360);
line(280,364,359,364);
setfillstyle(1,15);
floodfill(281,362,15);

rectangle(295+4,370,345-4,440);
rectangle(292+4,367,348-4,440);
setfillstyle(1,15);
floodfill(294+4,369,15);
rectangle(296,378,344,380);
floodfill(301,379,15);


line(302,405,302,440);
line(338,405,338,440);
ellipse(327,405,108,180,25,20);

ellipse(313,405,360,74,25,20);

setfillstyle(7,15);
//putpixel(312,416,11);
//floodfill(312,406,15);
line(329,390,329,440);
line(310,391,310,440);
line(311,402,329,402);
line(311,422,329,422);
line(302,412,310,412);
line(329,412,338,412);

line(302,428,310,428);
line(329,428,338,428);
//setfillstyle(7,15);


 int p=-60;
line(302,405+p,302,440+p-20);
line(338,405+p,338,440+p-20);
ellipse(327,405+p,108,180,25,20);

ellipse(313,405+p,360,74,25,20);
setfillstyle(7,15);
floodfill(311,406,15);
line(329,390+p,329,440+p-20);
line(310,391+p,310,440+p-20);
line(311,402+p,329,402+p);
line(311,422+p-7,329,422+p-7);
line(302,412+p,310,412+p);
line(329,412+p,338,412+p);



//??//////////////////////////////////2nd portion/////////////////////


rectangle(245,260,400,440);         //  inner
rectangle(230,245,415,440);           //     //inner

rectangle(230,425,275,440);
setfillstyle(1,15);
floodfill(231,426,15);
floodfill(249,426,15);
////setcolor(8);
rectangle(230+135,425,275+140,440);
//setfillstyle(1,15);

floodfill(231+160,426,15);
floodfill(249+159,426,15);



////setcolor(15);
line(415,290,415,440);
line(420,245,420,440);

line(415,240,415,205);
line(420,240,420,205);


line(225,245,225,440);          //vertical
line(230,250,230,440);

line(225,240,225,205);          //vertical
line(230,240,230,205);

line(222,240,425,240);
line(222,245,425,245);                    //horz

ellipse(222,242.5,90,270,2.5,2.5);
ellipse(425,242.5,270,90,2.5,2.5);

rectangle(231,230,414,239);



ellipse(227,206,0,180,9,1);
ellipse(227,204,0,180,9,1);
putpixel(220,204,15);
putpixel(220,205,15);
putpixel(220,206,15);
putpixel(235,204,15);
putpixel(235,205,15);
putpixel(235,206,15);
ellipse(227,203,0,180,6,7);
line(227,195,227,192);
int r=190;

ellipse(227+r,206,0,180,9,1);
ellipse(227+r,204,0,180,9,1);
putpixel(220+r,204,15);
putpixel(220+r,205,15);
putpixel(220+r,206,15);
putpixel(235+r,204,15);
putpixel(235+r,205,15);
putpixel(235+r,206,15);

ellipse(227+r,203,0,180,6,7);
line(227+r,195,227+r,192);

/*

//floodfill(305,424,15);
//floodfill(305,429,15);
//floodfill(325,424,15);
//floodfill(325,421,15);
//floodfill(332,420,15);
//floodfill(332,429,15);
*/

ellipse(315,170,140,210,105,100);
ellipse(330,170,330,40,105,100);

ellipse(292,167,105,140,75,95);
ellipse(353,167,40,75,75,95);

ellipse(323,78,350,190,60,8);
ellipse(323,77,350,190,60,8);


//ellipse(259,24,295,358,58,51);
ellipse(240,24,321,358,78,71);
ellipse(192,40,342,7,128,100);

ellipse(448,30,180,203,128,100);
ellipse(443,5,194,220,128,100);
ellipse(438,-9,203,234,128,100);
ellipse(198,-6,310,340,128,100);

ellipse(319,30,0,360,7,2);

floodfill(320,29,15);
circle(319,24,3);
line(319,20,319,18);
circle(319,14,4);
line(319,9,319,0);
//ellipse(319,4,0,360,2,3);
circle(319,2,1);
line(316,6,322,6);
line(316,6,314,4);
line(322,6,324,4);
//???????????????????????????????????

//////////////////////////////////////////////////////////
//ellipse();
ellipse(321,258,48,130,140,50);
ellipse(321,255,48,130,140,50);

ellipse(321,241,48,130,140,50);
ellipse(321,238,48,130,140,50);
//setfillstyle(6,11);
//  line(265,79,277,70);
//////setcolor(4);
  //line(385,81,380,76);

//while(!kbhit())
//{
 delay(300);
setfillstyle(10,15);

floodfill(322,160,15);
setfillstyle(6,15);

floodfill(322,193,15);

//}
//line(319,26,319,480+h);//center



///////////////////////////////////////////new////////////////////////////
rectangle(150,283,225,294);

//line(146,294,225,294);
line(150,298,225,298);

line(150,240,150,440);            //pole
line(146,240,146,440);

line(150,299,150,440);            //pole
line(146,299,146,440);


r=-80;
int n=34;

ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);

l=128;
h=150;

ellipse(51+l,132+h-7,340,216,4,15);
ellipse(62+l,131+h-7,327,216,4,15);
ellipse(72+l,132+h-7,327,216,2,15);
ellipse(42+l,132+h-7,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h-7);
line(75+l,107+h,75+l,140+h-7);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);


line(100-5,240+15,100-5,440);            //pole
line(96-5,240+15,96-5,440);

r=-134;
 n=49;
ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);


line(146,294,97,302);
line(146,298,97,306);

line(146,283,97,291);


///////////////////////////////////////inner/////////////////

//rectangle(275+k,290,365+k,440);         //  inner
//rectangle(268+k,283,372+k,440);           //     //inner

//line(225,367,151,367);
rectangle(155,302,220,364);
rectangle(155,302+70,220,364+75);

int q=-133;
int d=-2;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q+5,405+d,108,180,35,30);

ellipse(313+q-5,406+d,360,74,35,30);


d=-77;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q,405+d,105,180,30,25);

ellipse(313+q,405+d,360,80,30,25);
putpixel(163,300,11);
setfillstyle(6,15);
floodfill(163,330,15);
floodfill(160,380,15);

line(141,305,141,360);
line(101,310,101,365);
line(141,305,101,310);
line(141,360,101,365);


int x=70;
line(141,305+x,141,440);
line(101,310+x,101,440);
line(141,305+x,101,310+x);



q=-200;
line(302+q+4,405+d,302+q+4,440+d);
line(338+q-1,405+d,338+q-1,440+d-2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);

d=1;
line(302+q+4,405+d,302+q+4,440+d-2);
line(338+q-1,405+d,338+q-1,440+d-2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);

rectangle(178,415,197,439);
setfillstyle(7,15);
floodfill(179,416,15);
 rectangle(178,415-75,197,440-76);
setfillstyle(7,15);
floodfill(179,415-75+1,15);

line(130-3,417,130-3,440);
line(113+3,420,113+3,440);

line(113+3,420,130-3,417);
putpixel(114,423,4);
line(113,440,130,440);
floodfill(114+3,423,15);



int a=-76;
line(130-3,417+a,130-3,440+a-3);
line(113+3,420+a,113+3,440+a);

line(113+3,420+a,130-3,417+a);
putpixel(114,423,4);
floodfill(114+3,423+a,15);



line(10,400+h,615,400+h);



//////////////////////////////////////////////right\\\\\\\\\\\


int e=270;
rectangle(150+e,283,226+e,294);
line(146+e+4,294,225+e,294);
line(146+e+4,298,225+e,298);


line(150+e+80,240,150+e+80,440);            //pole
line(146+e+80,240,146+e+80,440);

line(150+e+80,299,150+e+80,440);            //pole
line(146+e+80,299,146+e+80,440);





l=400;
h=+149;
ellipse(51+l,132+h-7,340,216,4,15);
ellipse(62+l,131+h-7,327,216,4,15);
ellipse(72+l,132+h-7,327,216,2,15);
ellipse(42+l,132+h-7,327,216,2,15);
ellipse(57+l,107+h,0,170,16,5);
line(40+l,107+h,40+l,140+h-7);
line(75+l,107+h,75+l,140+h-7);

line(34+l,107+h,40+l,107+h);
line(75+l,107+h,81+l,107+h);

line(34+l,107+h,28+l,102+h);                      //slant
line(81+l,107+h,87+l,102+h);

line(28+l,102+h,34+l,98+h);
line(87+l,102+h,81+l,98+h);

line(34+l,98+h,58+l,95+h);
line(58+l,95+h,81+l,98+h);


ellipse(65+l,92+h,104,190,30,30);

ellipse(50+l,92+h,350,76,30,30);

line(58+l,61+h,58+l,63+h);
circle(58+l,58+h,3);
line(58+l,55+h,58+l,53+h);
circle(58+l,50+h,2);
line(58+l,48+h,58+l,47+h);
circle(58+l,45+h,1);
line(58+l,44+h,58+l,41+h);

r=270;
n=n-15;

ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);



line(146+e+135,302,97+e+135,294);
line(146+e+135,306,97+e+135,298);

line(146+e+135,291,97+e+135,283);



line(100-5+e+190,240+15,100-5+e+190,440);            //pole
line(96-5+e+190,240+15,96-5+e+190,440);





r=325;
n+=15;
ellipse(227+r,206+n,0,180,9,1);
ellipse(227+r,204+n,0,180,9,1);
putpixel(220+r,204+n,15);
putpixel(220+r,205+n,15);
putpixel(220+r,206+n,15);
putpixel(235+r,204+n,15);
putpixel(235+r,205+n,15);
putpixel(235+r,206+n,15);

ellipse(227+r,203+n,0,180,6,7);
line(227+r,195+n,227+r,192+n);


rectangle(155+e,302,220+e,364);
rectangle(155+e,302+70,220+e,364+75);


q=140;
d-=1;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q+5,405+d,108,180,35,30);

ellipse(313+q-5,406+d,360,74,35,30);

d=-77;
line(302+q-5,405+d,302+q-5,440+d);
line(338+q+5,405+d,338+q+5,440+d);
ellipse(327+q,405+d,105,180,30,25);

ellipse(313+q,405+d,360,80,30,25);
putpixel(163,300,11);
setfillstyle(6,15);
floodfill(163,330,15);
floodfill(160,380,15);
/////////////////////////////
e=e-15;
line(141+e+150,305+5,141+e+150,360+5);
line(101+e+150,310-5,101+e+150,365-5);
line(101+e+150,305,141+e+150,310);
line(101+e+150,360,141+e+150,365);

int v=75;
line(141+e+150,305+5+v-5,141+e+150,440);
line(101+e+150,310-5+v-5,101+e+150,440);
line(101+e+150,305+v-5,141+e+150,310+v-5);
//line(101+e+150,360+v,141+e+150,365+v);

e=e+18;
rectangle(178+e,415,197+e,439);
setfillstyle(7,15);
floodfill(179+e,416,15);
int f=-75;
rectangle(178+e,415+f,197+e,439+f);
setfillstyle(7,15);
floodfill(179+e,416+f,15);


e+=130;
line(130-3+e,440+a-2,130-3+e,417+a+2);
line(113+3+e,440+a-2,113+3+e,420+a-2);

line(113+3+e,417+a,130-3+e,420+a);
putpixel(114+e,423,4);
floodfill(114+3+e,423+a,15);

a=1;
line(130-3+e,440+a-2,130-3+e,417+a+2);
line(113+3+e,440+a-2,113+3+e,420+a-2);

line(113+3+e,417+a,130-3+e,420+a);
putpixel(114+e,423,4);
line(113+3+e,440,130-3+e,440);
floodfill(114+3+e,423+a,15);


q=204;
line(302+q+4,405+d,302+q+4,440+d-2);
line(338+q-1,405+d,338+q-1,440+d+2);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);
q=204;

d=0;
line(302+q+4,405+d,302+q+4,440+d-1);
line(338+q-1,405+d,338+q-1,440+d);
ellipse(327+q,405+d,105,180,20,15);
ellipse(313+q+4,405+d,360,80,20,15);
line(302+q+4,440,302+q+4,440);




setfillstyle(10,15);
floodfill(322,160,15);
setfillstyle(6,15);

floodfill(322,193,15);
///////////////////////////////////////////////walls//////////////
setfillstyle(9,15);
floodfill(110,294,15);
floodfill(210,290,15);
floodfill(430,290,15);
floodfill(520,290,15);
/////////////////////////////////////////////poles
setfillstyle(6,15);
floodfill(93,394,15);
floodfill(148,394,15);
floodfill(227,394,15);
floodfill(417,394,15);
floodfill(498,394,15);
floodfill(553,394,15);


setfillstyle(9,15);
floodfill(185,224,15);
floodfill(465,224,15);



while(!kbhit())
{
delay(40);
putpixel(random(640),random(248),random(15));
 }

  getch();
cleardevice();

setcolor(13);
rectangle(1,1,639,479);
rectangle(15,15,624,464);
//setcolor(LIGHTBLUE);
setfillstyle(6,11);

floodfill(2,2,13);
settextstyle(7,0,3);
setcolor(15);


outtextxy(150,200,"MADE BY : SAURABH PRASAD SCIENTIST") ;
outtextxy(175,300,"THANKS FOR VISITING SK GALLARIES");
outtextxy(75,400,"E-Mail: saurabh.powers@rediffmail.com");

//delay(1000);
getch();
}
void stylecar3D()
{
 int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\tc\bgi");
int c=12;
setbkcolor(0);
//setlinestyle(0,1,2);
int t;
while(1)
{
settextstyle(2,0,5);
outtextxy(100,10,"Press L,H ,T,P");
outtextxy(100,30,"Press 1 for Quit");
as:
setcolor(13);
ellipse(380,127,20,152,130,35);
//////////////////////////////rear//////////////////////////

line(490,109,560,142);
line(560,142,569,142);
line(569,142,582,102);
line(582,102,620,92);
line(593,132,617,125);

line(617,124,627,96);
line(620,92,628,97);

line(472,86,602,96);
line(501,113,575,121);
line(443,77,475,80);

line(443,77,432,93);
line(475,80,472,85);
//setcolor(4);
   line(593,132,593,137);
   line(593,137,600,141);
   line(600,141,600,185);
   line(600,185,608,192);
   line(608,192,608,234);
   line(608,234,586,253);
    line(586,253,577,248);

/////////////////////////           mirror
   line(263,112,363,127);
      line(193,160,263,112);
   line(193,160,220,170);
      line(220,170,280,180);
      line(280,180,320,185);
      line(320,185,363,127);
////////////////////////////////sidemirror
line(340,194,460,169);
 line(460,169,519,152);

ellipse(512,144,300,30,10,10);
ellipse(467,143,28,100,50,30);
line(510,128,521,138);
line(435,116,440,171);

//   setcolor(4);
////////////////////////////////////////cont//
   line(339,194,372,144);
//    line(372,140,386,128);
ellipse(454,208,87,123,128,95);
line(372,144,384,128);
   int b,x,y;
////////////////////////lower
line(365,298,524,264);
line(365,298,330,310);
line(330,310,323,310);


///////////////////////////////bumper
ellipse(162,221,135,190,90,40);
line(96,193,140,174);
line(140,174,160,168);
line(160,168,192,161);

//////////////////////front
ellipse(75,246,95,190,18,18);
line(57,251,57,286);
//setcolor(4);
ellipse(181,178,232,263,200,137);
ellipse(195,180,256,286,200,137);


ellipse(191,171,228,247,200,100);
ellipse(231,198,234,275,200,80);

//setcolor(9);
//ellipse(195,170,256,286,200,137);
//setcolor(12);

ellipse(196,167,228,246,200,90);
ellipse(231,184,234,276,200,80);


ellipse(191,200,228,246,200,90);
ellipse(228,218,234,276,200,80);

ellipse(258,268,180,220,200,40);
ellipse(178,296,244,355,16,10);

ellipse(238,249,227,250,200,60);


/////////////wheel1
ellipse(302,281,320,77,26,45);
ellipse(290,277,65,162,40,45);
ellipse(278,288,144,212,31,45);

/////////////wheel2
//setcolor(5);
ellipse(302+260,229,328,87,26,45);
ellipse(290+280-7,277-50+2,90,162,40,45);
ellipse(278+270,288-50,144,215,27,45);
 b=0;
int v=0;

/////////
ellipse(302+250+v,227+b,295,90,29,41);
ellipse(302+234+v,231+b,245,306,50,40);
//setlinestyle(3,0,3);
ellipse(302+248+v,229+b,0,360,21,30);

ellipse(302+247+v,229+b,0,360,8,10);
setfillstyle(6,11);
floodfill(302+248+v,230+b,13);
line(546,201,546,257);
line(554,201,554,257);
//setcolor(4);

line(546+v,201+b,546+v,220+b);
line(551+v,201+b-2,551+v,220+b);

line(546+v,238+b,546+v,257+b);
line(551+v,238+b+2,551+v,257+b+2);


line(530+v,225+b,541+v,225+b);
line(530+v,230+b,541+v,230);

line(557+v,225+b,570+v,225+b);
line(557+v,230+b,570+v,230+b);



line(563+v,206+b,552+v,222+b);
line(534+v,246+b,543+v,232+b);

line(566+v,210+b,556+v,223+b);
line(536+v,250+b,544+v,238+b);

line(536+v,207+b,546+v,222+b);
line(532+v,213+b,542+v,224+b);

line(556+v,235+b,566+v,247+b);
line(551+v,237+b,563+v,253+b);



////////////////////////////////////////////////////
v=-260;
b=56;
ellipse(302+233+v,221+b,260,60,49,51);
//ellipse(302+234+v,231+b,245,306,50,40);
//setlinestyle(3,0,3);
ellipse(302+243+v,224+b,0,360,28,35);
//  line(249,328,269,328);
ellipse(300+245+v,223+b,0,360,10,12);

ellipse(285+249+v,239+b,210,260,30,33);
//floodfill(285+258+v,230+b,12);
b=45;
v=v-4;
line(546+v,201+b,546+v,220+b+2);
line(551+v,201+b,551+v,220+b+2);
b=b+8;
line(546+v,238+b,546+v,257+b+4);
line(551+v,238+b,551+v,257+b+4);
v=v-2;
line(530+v-6,225+b,541+v,225+b);
line(530+v-6,230+b,541+v,230+b);
v=v+5;
line(557+v,225+b,570+v+3,225+b);
line(557+v-1,230+b,570+v+3,230+b);


b=b-5;
v=v-5;
line(565+v+3,206+b,552+v+4,222+b-2);
b=b+15;

line(534+v,246+b,543+v+3,232+b-5);
b=b-10;
line(566+v+7,210+b-5,556+v+4,220+b);
line(536+v-5,250+b,544+v-2,238+b-4);


line(536+v,207+b-8,545+v,222+b-5);
line(531+v,212+b-8,542+v,224+b-2);

line(556+v,235+b,566+v+3,247+b+5);
line(551+v,237+b,563+v+2,253+b+3);

///////////////////lights
ellipse(199,250,144,345,18,8);
line(185,245,206,230);
//setcolor(4);
ellipse(223,234,340,110,8,5);
line(230,237,217,252);
line(206,230,220,229);
//setfillstyle(1,4);

//floodfill(200,240,12);

/////////////////////////////////////
line(90,223,152,236);
line(152,236,137,254);
line(90,223,90,242);

//setfillstyle(10,9);
//floodfill(91,230,14);
ellipse(240,270,104,136,100,60);
ellipse(185,237,120,160,100,60);
ellipse(80,221,357,134,10,10);

line(152,236,168,228);
///////////////////////////////////////////////
line(435,116,440,171);
//////////////////////////////////////////hp
//line(134,185,220,210);
line(134,185,196,160);
line(214,212,318,185);
/////////////////////////////////////////////////light

//setcolor(14);
ellipse(166,247,99,330,8,8);
ellipse(171,243,310,129,7,7);
putpixel(174,250,13);
putpixel(173,251,13);
putpixel(164,239,13);
putpixel(165,238,13);

/////////////////////////////////////////road/////////////////////
setcolor(13);
line(1,430,639,300);
line(1,445,639,315);

line(1,210,93,194);
line(1,195,194,158);

//line(1,170,639,71);
//line(1,170,229,135);
line(520,90,639,71);
line(478,86,639,56);

   int c=0;

   line(10,194+c,10,208+c);
line(40,189+c,40,204+c);
line(70,183+c,70,198+c);
line(100,176+c,100,190+c);
line(130,170+c,130,177+c);
line(160,166+c,160,168+c);
line(190,160+c,190,161+c);

 line(190+330,78+c,190+330,89+c);

line(190+360,72+c,190+360,85+c);
line(190+390,67+c,190+390,81+c);
line(190+420,62+c,190+420,76+c);
line(190+449,57+c,190+449,71+c);



   c=236;

line(10,192+c,10,208+c);
line(40,189+c-2,40,204+c-3);
line(70,183+c-3,70,198+c-3);
line(100,176+c-2,100,190+c-2);
line(130,170+c-2,130,177+c+5);
line(160,166+c-3,160,168+c+8);
line(190,160+c-4,190,161+c+9);

line(190+30,156+c-5,190+30,170+c-5);


line(190+30+30,156+c-12,190+30+30,170+c-12);

line(190+90,156+c-18,190+90,170+c-17);

line(190+120,156+c-25,190+120,170+c-25);

line(190+150,156+c-30,190+150,170+c-30);

line(190+180,156+c-37,190+180,170+c-36);


line(190+210,156+c-42,190+210,170+c-42);


line(190+240,156+c-48,190+240,170+c-48);


line(190+270,156+c-55,190+270,170+c-54);


line(190+300,156+c-61,190+300,170+c-61);



 line(190+330,78+c+10,190+330,89+c+13);

line(190+360,72+c+11,190+360,85+c+13);
line(190+390,67+c+10,190+390,81+c+10);
line(190+420,62+c+8,190+420,76+c+10);
line(190+449,57+c+8,190+449,71+c+8);




/////////////////road

setcolor(12);          /////////////////////////////1

line(1,310,25,306);
line(6,318,30,315);
line(1,310,6,318);
line(25,306,30,314);
int k,m;
k=13*45+19;
m=16*(-8);
						    //2
setcolor(12);

line(605,310-128,629,306-128);
line(610,318-128,634,315-128);
line(605,310-128,610,318-128);
line(629,306-128,634,314-128);

setcolor(12);    //////////////////////////////////3
k=45;
m=-8;
line(46,302,70,298);
line(51,310,75,307);
line(46,302,51,310);
line(70,298,75,306);


setfillstyle(1,0);
floodfill(64,303,12);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(1,14);
floodfill(64,303,12);

t=getch();
if(t=='1')
exit(0);
if(t=='h')
{
sound(710);
delay(500);
nosound();
//break;
}
if(t=='t')
{
while(!kbhit())  {
setfillstyle(1,0);
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);

setfillstyle(1,random(12));

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);


 }

setfillstyle(1,0);

floodfill(200,250,13);
delay(10);
//setfillstyle(1,11);

 floodfill(170,250,13);
 floodfill(80,230,13);

	}


if(t=='l')
{
while(!kbhit())
{

delay(120);
setfillstyle(6,0);         //////////////////////////ty
floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);

setfillstyle(1,0);
floodfill(64,303,12);

///////////////////////////////////road

setfillstyle(9,0);       /////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);


//////////////////////
floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);




setfillstyle(6,14); //////////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
////////////////////////////////////////road

setfillstyle(9,10);///////////////////////////////////color
floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
//////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);

setfillstyle(1,14);
floodfill(14,314,12);
floodfill(617,183,12);

///////////////////////////////////////
setfillstyle(10,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);
///light
setfillstyle(6,11);                             ///////////

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

delay(120);

setfillstyle(6,0);/////////////////////ty
floodfill(548,250,13);
floodfill(548,214,13);
floodfill(533,228,13);
floodfill(563,228,13);
floodfill(262,281,13);
floodfill(308,281,13);
floodfill(284,251,13);
floodfill(284,295,13);
/////////////////////////////////////road
setfillstyle(9,0);      ///////////////color

floodfill(19,429,13);
floodfill(81,419,13);
floodfill(151,409,13);
floodfill(211,397,13);
floodfill(271,380,13);
floodfill(331,368,13);
floodfill(396,355,13);
floodfill(450,345,13);
floodfill(510,335,13);
floodfill(570,325,13);
floodfill(630,312,13);
///////////////////////////////////////////////////////
floodfill(20,197,13);
floodfill(80,187,13);
floodfill(133,174,13);
floodfill(517,86,13);
floodfill(557,81,13);
floodfill(627,70,13);
/////////////////////////////
setfillstyle(1,0);
floodfill(14,314,12);
floodfill(617,183,12);

setfillstyle(6,10);            /////////////ty

floodfill(536,213,13);
floodfill(563,213,13);
floodfill(561,244,13);
floodfill(538,244,13);
floodfill(274,295,13);
floodfill(294,295,13);
floodfill(274,265,13);
floodfill(294,265,13);
////////////////////////////////////////////////road
setfillstyle(9,14);/////////////////////////////////////////color
floodfill(81-40+5,419+7,13);
floodfill(151-40,409+7,13);
floodfill(211-40,397+7,13);
floodfill(271-40,380+7,13);
floodfill(331-40,368+7,13);
floodfill(396-40,355+7,13);
floodfill(450-40,345+7,13);
floodfill(510-40,335+7,13);
floodfill(570-40,325+7,13);
floodfill(630-40,312+7,13);
/////////////////////////////////////////

floodfill(50,197,13);
floodfill(110,177,13);
floodfill(166,165,13);
floodfill(527,86,13);
floodfill(587,71,13);
setfillstyle(1,14);
floodfill(64,303,12);

setfillstyle(9,4);
floodfill(302+248,230,13);
floodfill(302+248+v,230+b,13);

delay(20);
setfillstyle(1,14);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);

 delay(20);
setfillstyle(1,0);

floodfill(200,250,13);

floodfill(170,250,13);
 floodfill(80,230,13);




}          }




if(t=='p')
{
int n=0;
while(!kbhit())
{
if(n<=60)
n++;
setcolor(0);
rectangle(1+1,-10,90-1,-12+n);
delay(14);

setcolor(9);
rectangle(1,-10,90,-10+n);
if(n==60)
{

outtextxy(10,10,"L-RUN CAR");
outtextxy(10,20,"H-HORN");
outtextxy(10,30,"T-LIGHTS");
 delay(400);
 }


}
setcolor(0);
rectangle(1,-10,90,-10+n);
rectangle(1,-10,90,-11+n);
outtextxy(10,10,"L-RUN CAR");
outtextxy(10,20,"H-HORN");
outtextxy(10,30,"T-LIGHTS");

}

}
circle(300,100,3);

nosound();

getch();
}
void GKQUIZ()
{
cout<<"\n\n\tSorry! This feature is Under Construction!";
cout<<"\n\t";
}
void SNAKEMAN()
{
intro_graphics();
  show_main_menu();
}
void mmf()
{
int driver,mode;
char z;
char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20],j[20];
clrscr();
driver=DETECT;
initgraph(&driver,&mode," ");
setcolor(4);
circle(100,100,50);
floodfill(100,100,4);
circle(120,100,5);
circle(120,300,30);
circle(100,275,15);
circle(135,275,15);
circle(110,300,3);
circle(130,300,3);
circle(120,320,5);
circle(120,361,30);
circle(89,335,13);
circle(150,335,13);
circle(150,393,13);
circle(89,393,13);
circle(127,330,100);
circle(355,310,70);
circle(540,280,60);
circle(530,390,40);
rectangle(630,450,10,10);
rectangle(200,30,600,100);
rectangle(500,190,250,100);
floodfill(540,280,4);
floodfill(530,390,4);
floodfill(110,300,4);
floodfill(130,300,4);
floodfill(120,320,4);
floodfill(127,330,4);
floodfill(355,310,4);
gotoxy(34,5);
setlinestyle(USERBIT_LINE,0,3);
cout<<"***WELCOME TO SAURABH GAMES***";
gotoxy(40,10);
cout<<"Moon Magic Future???";
gotoxy(40,20);
cout<<"!PLAY GAME!!!";
gotoxy(63,18);
cout<<"INSTRUCTIONS";
gotoxy(65,25);
cout<<"EXIT";
cout<<"\n\n\n\n\n\t\tPLAY=<P> /  INSTRUCTION=<I> /   EXIT=<E>";
cin>>z;
if(z==1);
{
clrscr();
setcolor(3);
for(int i=10;i<250;i-=10)
circle(315,240,i);
gotoxy(35,5);
cout<<"INSTRUCTIONS\n\n\t\t\tWELCOME TO SAURABH GAMES\t\t\t\t\n\n\t\t\t\tMOON MAGIC FUTURE\t\t\t\t\t\n\nTo play this game you have to enter your name: job: rashi: age: state: city: gender: WHEN YOU FILL THIS YOU WILL SEE YOUR FUTURE BY MOON MAGIC FUTURE!!";
getch();
{
cin>>z;
if (z==1);
else
clrscr();
textmode(BW40);
gotoxy (1,1);cout<<"WELCOME TO MOON MAGIC FUTURE";
gotoxy(1,3);cout<<"*******************************";
gotoxy(1,5);
cout<<"Enter Your first Name:-";
cin>>a;
gotoxy(1,10);
cout<<"AGE:-";
cin>>b;
gotoxy(1,15);
cout<<"job:-";
cin>>c;
gotoxy(1,20);
cout<<"Rashi:-";
cin>>d;
cout<<"\n\nState:-";
cin>>e;
cout<<"\n\nCity:-";
cin>>f;
cout<<"\n\nToday's date(ex-21209):-";
cin>>g;
cout<<"\n\nGender if male press 1 , if female press 2:-";
cin>>h;
cout<<"\n\nPress 1 to continue & then you see your future:-";
cin>>j;
clrscr();
textmode(BW80);
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"\t\t NOW YOU SEE YOUR FUTURE BY Moon Magic Future";
cout<<"\t\t\t\t\t**********************************************";
cout<<"\n\nYou will loss a great opporchunity in this month but you don't have any probleum with this loss. you will pass in any examination in this month & you get your any income in next month you getting very happy in next month & you get low freedom from your any disease & your lucky month is may. moon magic future gives you confidity to pass all strugle of your life & to enjoy your life.                  your LUCKY NUMBER - 5 & LUCKEY COLOR - BROWN";
cout<<"\n\n\n\n\n\nThankyou for playing Saurabh Games & seeing your Future";
cout<<"\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
getch();
}
}
}
void circle3d()
{
int x,y,i;
	int g=DETECT,d;
       initgraph(&g,&d,"\tc\bgi");
       cleardevice();
       x=getmaxx()/2;
       y=getmaxy()/2;
       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
       setbkcolor(rand());
       setcolor(4);
       outtextxy(30,100,"Press");
       outtextxy(30,130,"any");
       outtextxy(30,160,"key");
       outtextxy(30,190, "to");
       outtextxy(30,220,"Quit");
       while (!kbhit())
       {
       setcolor(rand());
       for (int i=0;i<100;i++)
       circle(x,y,i );
       setcolor(rand());
       for (int j=70;j<120;j++)
       circle(x,y,j);
       setcolor(rand());
       for (int k=140;k<690;k++)
       circle(x,y,k);
       setcolor(rand());
       for (int l=210;l<230;l--)
       circle(x,y,l);
       delay(1);
       }
       getch();
       closegraph();
main();

}
void dms()
{
FILE *fp;
clrscr();
char a[100],b[100],c[100],d[100];
cout<<"\t\t----------------- Delete Multiple --------------------";
cout<<"\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\n\t\t\t\tStudent Names";
cout<<"\n\t\t\t\t^^^^^^^^^^^^^";
gotoxy(2,23);
cout<<"Enter Name of Student To Delete:";
cout<<"\nNote:- Please enter maximum 4 record to delete";
cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++";
gotoxy(40,23);
cin>>a;
cin>>b;
cin>>c;
cin>>d;
fp=fopen(a,"r");
while(1)
{
remove(a);
}
if(fp==NULL)
{
cout<<"Entered record not found! Please cheak your input! ACCESS DENIED!";
}

fp=fopen(b,"r");
while(1)
{
remove(b);

}

if(fp==NULL)
{
cout<<"Entered record not found! Please cheak your input! ACCESS DENIED!";
}

fp=fopen(c,"r");
while(1)
{
remove(c);

}

if(fp==NULL)
{
cout<<"Entered record not found! Please cheak your input! ACCESS DENIED!";
}

fp=fopen(d,"r");
while(1)
{
remove(d);

}

if(fp==NULL)
{
cout<<"Entered record not found! Please cheak your input! ACCESS DENIED!";
}

cout<<"\n\n\n\n\n\n\n\t\t\tSuccessfully Deleted!";
cout<<"\n\t\t\tPress Any Key To Go To Main Menu....";
getch();
main();
}
void directry()
{

 DIR *pdir;
 struct dirent *pent;

 pdir=opendir("c:/TC3/COURSE/DBMSDATA"); //"." refers to the current dir
 if (pdir==NULL){
 printf ("Invalid directry!");
 }
 errno=0;
 while ((pent=readdir(pdir))){
  printf("%s\n", pent->d_name);
 }
 if (errno){
 printf ("");

}
}