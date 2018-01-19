#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp,qq,rr,ss,tt;
char x,y,z;
clrscr();
do{
gotoxy(20,5);
cout<<"Welcome to (SAURABH) class 8th C.G BOARD BOOKS";
gotoxy(20,6);
cout<<"**********************************************";
// <-(LEFT),I(UP),right->,down//
gotoxy(13,14);
cout<<"1.English Reader";
gotoxy(50,14);
cout<<"2.Maths";
gotoxy(13,23);
cout<<"3)S.S.T";
gotoxy(50,23);
cout<<"4.Science";
gotoxy(33,19);
cout<<"5.Exit";
gotoxy(35,25);
cout<<"\n\n\t\t\tEnter subject to Stydy:";
cin>>a;
//starting of switch//
switch(a)
{
case 1:
clrscr();
cout<<"\t\tLet's study English (CONTENTS)";
cout<<"\n\n\t\t1)(A spark neglected Burns the house-I)";
cout<<"\n\t\t2)(A spark neglected Burns the house-II)";
cout<<"\n\t\t3)Trees";
cout<<"\n\t\t4)The Tempest I";
cout<<"\n\t\t5)The Tempest II";
cout<<"\n\t\t6)Gulliver in Lilliput-I";
cout<<"\n\t\t7)Gulliver in Lilliput-II";
cout<<"\n\t\t8)The Universe";
cout<<"\n\t\t9)The Country of the Blind-I";
cout<<"\n\t\t10)The Country of the Blind-II";
cout<<"\n\t\t11)Gandhiji as a Lawyer";
cout<<"\n\t\t12)The Story of Life-I";
cout<<"\n\t\t13)The Glorius Whitewasher";
cout<<"\n\t\t14)The Story of Life-II";
cout<<"\n\t\t15)Michael Goes Climbing";
cout<<"\n\n\n\n\t\t\tEnter Lesson n.o to study:";
cin>>b;
//starting of inner switch 1//
switch(b)
{
case 1:
clrscr();
cout<<"\t\tA spark neglected burns the house-I\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>c;
//starting of inner switch 2//
switch(c)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>d;
//starting of inner switch 3//
switch(d)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"\n\nInvalid choice!";
break;
}
cout<<"\n\n\nGo back to questions(y/n):";
cin>>y;
}while(y=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
}
break;
case 2:
clrscr();
cout<<"\n\t\tL-2 (A spark neglected Burns the house-II)";
cout<<"\t\t\n\n\t\t\t\tWord meanings\n\nPeasant - farmer\nwell off-well-to-do\nbesides - in addition to\nidle-not working\nalive - living\npushing - shaving\naccusing - blaming\nshatch - seize\nfolk - people\npersuade - convince\nmatter - affair\ncart shed - a shed for carts\nfrightened - afraid\ncollect - gather\nabusing - calling names\ndisgusted - fed up\nimprisoned - jailed\ndelighted - overjoyed\ncomplained - reported\nconfess - accept guilt";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>e;
//starting of inner switch 2//
switch(e)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)What made Ivan pity gabriel, as he sat down in his house,thinking?";
cout<<"\t\n2)What in the old man's opinion,had made Ivan unable to see things allright?";
cout<<"\t\n3)Was Ivan better off or worse off after the quarrel began?Why?";
cout<<"\t\n4)What did the old man ask Ivan to old without delay?";
cout<<"\t\n5)First, Ivan wanted to do as his father wished him to Then why did he change his mind?";
cout<<"\t\n6)What was Ivan afraid of as he waked along the fence?";
cout<<"\t\n7)What did Ivan try to do when he saw Gabriel setting fire to the cattle-shed? What should he have alone first?";
cout<<"\t\n8)What was the advice of the dying old man? How did the advice help to bring the two families together?";
cout<<"\t\n9)There was a change in Ivan after his father's death. What was it?";
cout<<"\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>f;
//starting of inner switch 3//
switch(f)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1)=>Ivan reached home & sat down thinking . He remembred the shameful look on Gabriel's face when the sentences was read out in the court. He had turned his pole face to the wall. It made Ivan pity Gabriel.";
default:
cout<<"\n\nInvalid choice!";
break;
}
cout<<"\n\n\nGo back to questions(y/n):";
cin>>y;
}while(y=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"\n\nInvalid choice!";
}
break;
case 3:
clrscr();
cout<<"\t\tL-3 Trees\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>c;
//starting of inner switch 2//
switch(c)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>d;
//starting of inner switch 3//
switch(d)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 4:
clrscr();
cout<<"\t\tL-4 The Tempest\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>e;
//starting of inner switch 2//
switch(e)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>f;
//starting of inner switch 3//
switch(f)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 5:
clrscr();
cout<<"\t\tL-5 The Tempest II\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>g;
//starting of inner switch 2//
switch(g)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>h;
//starting of inner switch 3//
switch(h)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 6:
clrscr();
cout<<"\t\tL-6 Gulliver in Lilliput-I\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>i;
//starting of inner switch 2//
switch(i)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>j;
//starting of inner switch 3//
switch(j)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 7:
clrscr();
cout<<"\t\tL-7 Gulliver in Lilliput-II\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>k;
//starting of inner switch 2//
switch(k)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>l;
//starting of inner switch 3//
switch(l)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}

break;

case 8:
clrscr();
cout<<"\t\tL-8 The Universe\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>m;
//starting of inner switch 2//
switch(m)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>n;
//starting of inner switch 3//
switch(n)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 9:
clrscr();
cout<<"\t\tL-9 The Country of the Blind-I\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>o;
//starting of inner switch 2//
switch(o)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>p;
//starting of inner switch 3//
switch(p)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 10:
clrscr();
cout<<"\t\tL-10 The Country of the Blind-II\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>q;
//starting of inner switch 2//
switch(q)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>d;
//starting of inner switch 3//
switch(d)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 11:
clrscr();
cout<<"\t\tL-11 Gandhiji as a Lawyer\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>r;
//starting of inner switch 2//
switch(r)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>s;
//starting of inner switch 3//
switch(s)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 12:
clrscr();
cout<<"\t\tL-12 The Story of Life-I\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>t;
//starting of inner switch 2//
switch(t)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>u;
//starting of inner switch 3//
switch(u)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 13:
clrscr();
cout<<"\t\tL-13 The Glorius Whitewasher\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>v;
//starting of inner switch 2//
switch(v)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>w;
//starting of inner switch 3//
switch(w)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 14:
clrscr();
cout<<"\t\tL-14 The Story of Life-II\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>aa;
//starting of inner switch 2//
switch(aa)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>bb;
//starting of inner switch 3//
switch(bb)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
case 15:
clrscr();
cout<<"\t\tL-15 Michael Goes Climbing\n\n\t\t\t\tWord meanings\n\nSentence-declaration of punishment\npity-sorrow for other suffering\nhatred-ill will\ndragged-pulled\ncurses-abuses\nConscience-Inner soul\nAccuse-charge\nOffened-hurt the feelings\nRevenge-to return evil for evil\nPersuaded-urged\nPut off-avoid\nPetition-appeal\nThach-slow roof\nVisible-that can be seen\nRushed upon-pouched\nSeized-grasped\nRescue-save\nPut out-extinguish\nconfessed-admitted to guilt\nProspered-progressed";
cout<<"\t\t\Next-   1)Que-ans   2)Objectives";
cin>>cc;
//starting of inner switch 2//
switch(cc)
{
case 1:
do{
clrscr();
cout<<"\t\t\t\t[Question]";
cout<<"\t\n\n1)Who in Ivan's family was unable to work? Why?";
cout<<"\t\n2)What was it that prevented Ivan's family from living happily & comfortably?";
cout<<"\t3)Where did the hen usually lay its eggs? Where did it lay its egg on the day on which quarrel began?";
cout<<"\t\n4)Between whom did the quarrel start first? Who joined in?";
cout<<"\t\n5)What did Gabriel do with the hair torn out of his beard?";
cout<<"\t\n7)What was Ivan's complaint to the court?";
cout<<"\t\n8)Ivan & Gabriel kept going to law. What did the judges feel about them?";
cout<<"\t\n9)What happened at the marriage party?";
cout<<"\t\n10)What did Ivan do to get a favourable judgement in the higher court?";
cout<<"\t\n11)How did the judgement affect Gabriel?";
cout<<"\t\n12)What did the old judge try to do? What was the result?";
cout<<"\n\n\n\n\n\t\tEnter no which you want to see answer...? ";
cin>>dd;
//starting of inner switch 3//
switch(dd)
{
case 1:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n1.=>Ivan's old father was unable to work in his family because he suffered from asthma.";
break;
case 2:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n2.=>The quarrel between Ivan's & Gabriel Family.";
break;
case 3:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n3.=>The hen usually lay its eggs in the Ivan's cart-shed. The day on which quarrel began it laid its egg in the Gabriel's yard.";
break;
case 4:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n4.=>The quarrel started between Ivan's daughter in law & Gabriel's mother. Both Ivan's & Gabriel's wife joined in.";
break;
case 5:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n5.=>Gabriel wrapped the hair torn from his beard in piece of paper & went to the court.";
break;
case 6:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n6.=>Ivan's complaint to the court was that Gabriel's son has torn his shirt & Pulled the button of it.";
break;
case 7:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n7.=>Ivan's old father tried to persuade his family to make peace.";
break;
case 8:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n8.=>Ivan & Gabriel kept going to law the judges got disgusted with both of them.";
break;
case 9:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n9.=>At a marriage have a daughter-in-law occured Gabriel in front of everyone for stealing home Gabriel had been drinking he gave the women such a blow that she was laid up for a week.";
break;
case 10:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n10.=>Ivan bribed the derk & the elders of the derk & the elders of the court in order to get a favourable judgement in the higher.";
break;
case 11:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n11.=>Gabriel turmed pale when he heard the judgement.";
break;
case 12:
clrscr();
cout<<"\t\t\t\t[Answer]";
cout<<"\t\n\n12.=>The old judge tried to reconcile them and said don't go on with this quarrel. But the judge could not persuade them to make peace.";
break;
default:
cout<<"Invalid choice!";
}
cout<<"\n\n\n\n\n\t\t\t\tBack to questions(y/n):";
cin>>x;
}while(x=='y');
case 2:
clrscr();
cout<<"\t\t\t   Objectives";
break;
default:
cout<<"Invalid choice!";
}
break;
default:
cout<<"Invalid choice!";
}
break;
case 2:
clrscr();
cout<<"\t\t\tMaths Contents";
cout<<"\n\n01.SQUARE & CUBE\n02.EXPONENT\n03.PARALLEL LINES\n04.MULTIPLICATION & DIVISION OF ALGEBRIAC AEXPRESSIONS\n05.CIRCLE & ITS COMPONENTS\n06.STATICS\n07.GRAPH\n08.FACTORS AND FACTORIZATION OF ALGEBRAIC EXPRESSIONS\n09.IDENTITIES\n10.POLYGON\n11.CONSTRUCTION OF QUADRILATERAL\n12.EQUATION\n13.APPLICATION OF PERCENTAGE\n14.MENSURATION-I\n15.MENSURATION-II\n16.FIGURES(TWO & THREE DIMENSIONAL)\n17.PLAYING WHITH NUMBERS";
cout<<"\n\n\n\n\t\t\tEnter the lesson n.o to study:";
cin>>ee;
//STARTING OF INNER SWITCH e//
switch(ee)
{
case 1:
clrscr();
cout<<"\t\t\tL-1 SQUARE AND CUBE";
int aa,bb,cc,dd,ee,ff,gg,hh,ii;
cout<<"\n\n\t\tVerification for Pythagoral Triplet";
cout<<"\n\t\t***********************************";
cout<<"\n\n Q1)- (5,12,13)";
cout<<"\n Q2)- (8,15,17)";
cout<<"\n Q3)- (10,15,25)";
cout<<"\n Q4)- (04,07,11)";
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
cout<<"\n\nEnter the number for Perfect Squares:";
cin>>hh;
ii=sqrt(hh);
if(hh%ii==0)
{
cout<<"\n\n\tCongratulations! Perfect square = "<<ii;
break;
}
else
{
cout<<"\n\n\t\tSorry! Not Perfect square";
}
break;
case 2:
clrscr();
cout<<"\t\t\tL-2.EXPONENT";
break;
case 3:
clrscr();
cout<<"\t\t\tL-3.PARALLEL LINES";
break;
case 4:
clrscr();
cout<<"\t\t\tL-4.MULTIPLICATION & DIVISION OF ALGEBRIAC AEXPRESSIONS";
break;
case 5:
clrscr();
cout<<"\t\t\tL-5.CIRCLE & ITS COMPONENTS";
break;
case 6:
clrscr();
cout<<"\t\t\tL-6.STATICS";
break;
case 7:
clrscr();
cout<<"\t\t\tL-7.GRAPH";
break;
case 8:
clrscr();
cout<<"\t\t\tL-8.FACTORS AND FACTORIZATION OF ALGEBRAIC EXPRESSIONS";
break;
case 9:
clrscr();
cout<<"\t\t\tL-9.IDENTITIES";
break;
case 10:
clrscr();
cout<<"\t\t\tL-10.POLYGON";
break;
case 11:
clrscr();
cout<<"\t\t\tL-11.CONSTRUCTION OF QUADRILATERAL";
break;
case 12:
clrscr();
cout<<"\t\t\t\tL-12.EQUATION";
break;
case 13:
clrscr();
cout<<"\t\t\tL-13.APPLICATION OF PERCENTAGE";
break;
case 14:
clrscr();
cout<<"\t\t\t\tL-14.MENSURATION-I";
break;
case 15:
clrscr();
cout<<"\t\t\t\tL-15.MENSURATION-II";
break;
case 16:
clrscr();
cout<<"\t\t\tL-16.FIGURES(TWO & THREE DIMENSIONAL)";
break;
case 17:
clrscr();
cout<<"\t\t\tL-17.PLAYING WITH NUMBERS";
break;
default:
cout<<"Invalid choice!";
}
break;
case 3:
clrscr();
cout<<"\t\t\t    (S.S.T Contents)";
cout<<"\n\n\n\n\t\t\t\t 1)History\n\n\n\n\t\t\t\t 2)Geography\n\n\n\n\t\t\t\t 3)Civics";
cout<<"\n\n\n\n\n\n\t\tEnter the Subject to Study:";
cin>>ff;
switch(ff)
{
case 1:
clrscr();
cout<<"\t\t\t\tHistory (CONTENTS)";
cout<<"\n\t\t\t       ++++++++++++++++++++";
cout<<"\n\n\t\t1)Rise of modern Europe\n\t\t2)Establishment of East India company in India\n\t\t3)Effect of British Rule on Indian people\n\t\t4)First war of Independence\n\t\t5)Awakening of Indian society\n\t\t6)Indian National Movement\n\t\t7)Establishment of Rebublic India\n\t\t8)Study of Chhattisgarh";
cout<<"\n\n\n\n\t\t\Enter the Lesson n.o you want to study:";
cin>>i;
switch(i)
{
case 1:
clrscr();
cout<<"\t\t\tL-1 Rise of modern Europe";
break;
case 2:
clrscr();
cout<<"\t\t\tL-2 Establishment of East India company in India";
break;
case 3:
clrscr();
cout<<"\t\t\tL-3 Effect of British Rule on Indian people";
break;
case 4:
clrscr();
cout<<"\t\t\tL-4 First war of Independence";
break;
case 5:
clrscr();
cout<<"\t\t\tL-5 Awakening of Indian society";
break;
case 6:
clrscr();
cout<<"\t\t\tL-6 Indian National Movement";
break;
case 7:
clrscr();
cout<<"\t\t\tL-7 Establishment of Republic India";
break;
case 8:
clrscr();
cout<<"\t\t\tL-8 Study of Chhattisgarh";
default:
cout<<"Invalid choice!";
}
//end of switch g//
break;
case 2:
clrscr();
cout<<"\t\t\t\tGeography (CONTENTS)";
cout<<"\n\n\t\t1)Atmosphere\n\t\t2)Temperature\n\t\t3)India\n\t\t4)Northern Mountaineous States\n\t\t5)Plains of Ganga-Bramhputra\n\t\t6)Plateaus of Deccan\n\t\t7)Sea coastal plains and Island Groups\n\t\t8)Thar Deserts\n\t\t9)North America Geographical Features and climate";
cout<<"\n\n\n\n\t\t\Enter the Lesson n.o you want to Study:";
cin>>gg;
switch(gg)
{
case 1:
clrscr();
cout<<"\t\t\tL-1 Atmosphere";
break;
case 2:
clrscr();
cout<<"\t\t\tL-2 Temperature";
break;
case 3:
clrscr();
cout<<"\t\t\tL-3 India";
break;
case 4:
clrscr();
cout<<"\t\t\tL-4 Northern Mountaineous States";
break;
case 5:
clrscr();
cout<<"\t\t\tL-5 Plains of Ganga-Bramhputra";
break;
case 6:
clrscr();
cout<<"\t\t\tL-6 Plateaus of Deccan";
break;
case 7:
clrscr();
cout<<"\t\t\tL-7 Sea coastal plains and Island Groups";
break;
case 8:
clrscr();
cout<<"\t\t\tL-8 Thar Deserts";
break;
case 9:
clrscr();
cout<<"\t      L-9 North America Geographical Features and climate";
break;
default:
cout<<"Invalid choice!";
}
//end of switch h//
break;
case 3:
clrscr();
cout<<"\t\t\t\tCivics (CONTENTS)";
cout<<"\n\n\t\t1)Our constitution\n\t\t2)Fundamental Rights and Duties\n\t\t3)Central Government\n\t\t4)Tax\n\t\t5)Development and Agriculture in India\n\t\t6)United nation organization\n\t\t7)Foreign policies of India\n\t\t8)Right to Information";
cout<<"\n\n\n\n\t\t\Enter the Lesson n.o you want to Study:";
cin>>hh;
switch(hh)
{
case 1:
clrscr();
cout<<"\t\t\tL-1 Our constitution";
break;
case 2:
clrscr();
cout<<"\t\t\tL-2 Fundamental Rights and Duties";
break;
case 3:
clrscr();
cout<<"\t\t\tL-3 Central Government";
break;
case 4:
clrscr();
cout<<"\t\t\tL-4 Tax";
break;
case 5:
clrscr();
cout<<"\t\t\tL-5 Development and Agriculture in India";
break;
case 6:
clrscr();
cout<<"\t\t\tL-6 United nation organization";
break;
case 7:
clrscr();
cout<<"\t\t\tL-7 Foreign policies of India";
break;
case 8:
clrscr();
cout<<"\t\t\tL-8 Right to Information";
break;
default:
cout<<"Invalid choice!";
}
default:
cout<<"Invalid choice!";
}
break;
case 4:
clrscr();
cout<<"\t\t\t\t   Science";
cout<<"\n\t\t\t\t  *********";
cout<<"\n\n\t\t1)Sky Vision\n\t\t2)Soil\n\t\t3)Air\n\t\t4)Chemical Reactions - When & What types\n\t\t5)Metals and Non-metals\n\t\t6)Carbon\n\t\t7)Structural and Functional Unit of Our Body - Cell\n\t\t8)Micro-organisms - A Wonderful World\n\t\t9)Refraction of Light\n\t\t10)Magnetism\n\t\t11)Electric Current\n\t\t12)Sources of Energy\n\t\t13)Food Production and Management\n\t\t14)Fibres\n\t\t15)How Much Food - What type of Food\n\t\t16)Some Common Diseases";
cout<<"\n\n\n\n\t\tEnter Lesson n.o to Study:";
cin>>ii;
switch(ii)
{
case 1:
clrscr();
cout<<"\t\tL-1 View of the Sky\n\n1)QUESTION ANSWER\n\n2)OBJECTIVES\n\n3)SHORT NOTES\n\n4)INTERNAL QUESTIONS\n\n\nEnter your choice:";
cin>>jj;
switch(jj)
{
case 1:
do{
clrscr();
cout<<"\t\t?+?+Questions+?+?";
cout<<"\t\t+++++++++++++++++";
cout<<"\n\n1)Why do we find the sun to be the Brightest & the Biggest star?\n2)Why does the pole Star apper to be stationary?\n3)Draw diagrams of the positions of different stars in Ursa Major and Orion?\n4)Venus is not the nearest planet to the sun. Then why is it the brightest?\n5)How will you recognise the Pole Star?\n6)Write the names of the planets as per their increasing distance from the sun.";
cin>>n;
switch(n)
{
case 1:
cout<<"=>1.We find the Sun to be the biggest & the brightest star because sun is nearest to the earth & other stars are farthest from the sun";
break;
case 2:
cout<<"=>2.Pole Star appear to be stationary because it is situated at the axis of the earth.";
break;
case 3:
cout<<"=>3.Sorry! High 3D Graphics resolution is Not supported in your operating system so, diagram cannot seen.";
break;
case 4:
cout<<"=>4.Saptrishi is one of the constilation. costilation had many stars out of these seven stars are the brightest star & they form 2 shapes of Question mark & Souce pan.In the top of the souce pan there are 2 stars are called Indicating Stars & they joined by the points.";
default:
cout<<"Invalid choice!";
}
cout<<"Go back to questions:";
cin>>o;
}while(o=='y');
}
case 2:
clrscr();
cout<<"\t\t\tL-2 Soil";
break;
case 3:
clrscr();
cout<<"\t\t\tL-3 Air";
break;
case 4:
clrscr();
cout<<"\t\t\tL-4 Chemical Reactions - When & What types";
break;
case 5:
clrscr();
cout<<"\t\t\tL-5 Metals and Non-metals";
break;
case 6:
clrscr();
cout<<"\t\t\tL-6 Carbon";
break;
case 7:
clrscr();
cout<<"\t\t\tL-7 Structural and Functional Unit of Our Body - Cell";
break;
case 8:
clrscr();
cout<<"\t\t\tL-8 Micro-organisms - A Wonderful World";
break;
case 9:
clrscr();
cout<<"\t\t\tL-9 Refraction of Light";
break;
case 10:
clrscr();
cout<<"\t\t\tL-10 Magnetism";
break;
case 11:
clrscr();
cout<<"\t\t\tL-11 Electric Current";
break;
case 12:
clrscr();
cout<<"\t\t\tL-12 Sources of Energy";
break;
case 13:
clrscr();
cout<<"\t\t\tL-13 Food Production and Management";
break;
case 14:
clrscr();
cout<<"\t\t\tL-14 Fibres";
break;
case 15:
clrscr();
cout<<"\t\t\tL-15 How Much Food - What type of Food";
break;
case 16:
clrscr();
cout<<"\t\t\tL-16 Some Common Diseases";
}
break;
case 5:
exit(0);
default:
cout<<"Invalid choice!";
}
cout<<"\t\t\t\t\t\t    Go to main screen(y/n):";
cin>>z;
}while(z=='y');
getch();
}


























































































