#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
char name1[255],name2[255],name3[255],name4[255],*n,n1,n2,n3,n4,ch;
int x,y,z,h,i,money1=10000,money2=10000,money3=10000,money4=10000;
int a1,b1,c1,a2,b2,c2,a3,a4,a5,a6;
COORD coord={0,0};
void gotoxy(int x,int y)
{
          coord.X=x;
          coord.Y=y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void main()
{
    printf("Wellcome to HI-LO");
    getch();
    system("cls");
    gotoxy(1,1);printf("Loading.....");
    for (i=1;i<=20;i++){
    //ตัวH
    gotoxy(20,10+i) ;printf("HI-LO GAME");
    gotoxy(41,10+i) ;printf("HI-LO GAME");
    gotoxy(21+i,19);printf ("HI-LO GAME");
    gotoxy(21+i,20);printf ("HI-LO GAME");
    gotoxy(21+i,21);printf ("HI-LO GAME");
    gotoxy(21+i,22);printf ("HI-LO GAME");
    //ตัวI
    gotoxy(58,10+i) ;printf("HI-LO GAME");
    //ตัว -
    gotoxy(71+i,18);printf ("HI-LO GAME");
    gotoxy(71+i,19);printf ("HI-LO GAME");
    gotoxy(71+i,20);printf ("HI-LO GAME");
    gotoxy(71+i,21);printf ("HI-LO GAME");
    //ตัวL
    gotoxy(106,10+i) ;printf("HI-LO GAME");
    gotoxy(106+i,30);printf ("HI-LO GAME");
    gotoxy(106+i,29);printf ("HI-LO GAME");
    gotoxy(106+i,28);printf ("HI-LO GAME");
    gotoxy(106+i,27);printf ("HI-LO GAME");
    //ตัวO
    gotoxy(139+i,11);printf ("HI-LO GAME");
    gotoxy(139+i,12);printf ("HI-LO GAME");
    gotoxy(139+i,10);printf ("HI-LO GAME");
    gotoxy(140,10+i) ;printf("HI-LO GAME");
    gotoxy(159,10+i) ;printf("HI-LO GAME");
    gotoxy(139+i,28);printf ("HI-LO GAME");
    gotoxy(139+i,29);printf ("HI-LO GAME");
    gotoxy(139+i,30);printf ("HI-LO GAME");
    gotoxy(139+i,10);printf ("HI-LO GAME");
    delay(50);}
    gotoxy(1,2);printf("Enter to play");
    getch();
    system("cls");
    loop :printf("Wellcome to HI-LO");
          printf("\nNumber of Players : ");
          scanf("%d",&x);
    if (x>=1 && x<=4) printf ("\nEnter name player");
    else {printf("Warnings 1-4 players only !!!!!");
         printf("\nPress 0 if you want to play : ");
         scanf ("%d",&y);
         system("cls");
         switch(y){case 0 : goto loop ;}}
         switch(x){case 1 : printf("\nname player1 : "); scanf("%s",name1);
         printf("system HI-LO give money 10,000 for players\n");
         getch();
         system("cls");
         while(ch !='q'){
         printf("\n**********");
         printf("\nplayers name : %s\n",name1);
                       printf("pay=%d\n",money1);
                       printf("****bet****\n");
                       loop1:printf("Money for betting : ");
                       scanf("%d",&a2);
                       if(a2>money1){printf("You don't have enough money\n");goto loop1;}
                       a3=money1-a2;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n1=getch();
                       if(n1=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!");

getch();
system("cls");
gotoxy(49,10);printf("press enter to random your score ");
        for (i=0;i<=30;i++) {
        gotoxy(30,5+i); printf("||");
        gotoxy(100,5+i); printf("||");
    delay(4) ;}
	for (i=0;i<=71;i++){
	gotoxy(30+i,36); printf("=");
	gotoxy(30+i,5); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(55,18+i); printf("|");
        gotoxy(60,18+i); printf("|");
    delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,21); printf("=");
	gotoxy(55+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,18); printf("=");
	gotoxy(55+i,18); printf("=");
	delay(4);}
    //
	for (i=1;i<=3;i++) {
        gotoxy(62,18+i); printf("|");
        gotoxy(67,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(62+i,21); printf("=");
	gotoxy(62+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(62+i,18); printf("=");
	gotoxy(62+i,18); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(69,18+i); printf("|");
        gotoxy(74,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(69+i,21); printf("=");
	gotoxy(69+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(69+i,18); printf("=");
	gotoxy(69+i,18); printf("=");
	delay(4);}
	gotoxy(57,20);printf("*");
	gotoxy(64,20);printf("*");
	gotoxy(71,20);printf("*");
	getch();
int x,a,b,c,z,h1,h2;
//delay rand() gotoxy for1
for(x=0;x<=100;x++)
{
 gotoxy(57,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
a = rand()%5+1;
gotoxy(57,20);delay(100);printf("%d",a);
//delay rand() gotoxy for2
for(x=0;x<=100;x++)
{
 gotoxy(64,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
b = rand()%5+1;
gotoxy(64,20);delay(100);printf("%d",b);
//delay rand() gotoxy for3
for(x=0;x<=100;x++)
{
 gotoxy(71,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
c = rand()%5+1;
gotoxy(71,20);delay(100);printf("%d",c);
getch();
system("cls");
z=a+b+c;
printf("[%d] [%d] [%d] is %d :  ",a,b,c,z);
 if(z>=11){printf("High\n");}
 else printf("low\n");
if((n1=='h'&&z>=11) || (n1=='l'&&z<11)){
        printf("You win");money1=money1+(a2*2);}
 else {printf("You lose");
       money1 =money1-a2;}
       if(money1== 0){
				printf("You Lose, loss all money.\n");
				ch = 'q';
			}
			else{
				printf("\nInput 'q' to exit program :  ");
				ch = getch();}}}
         //2p
         switch(x){case 2 : printf("\nname player1 : ");scanf("%s",name1);printf("\nname player2 : ");scanf("%s",name2);
         printf("system HI-LO give money 10,000 for players\n");
         getch();
         system("cls");
         while(ch !='q'){
         printf("\n**********");
         printf("\nplayers name : %s\n",name1);
                       printf("pay=%d\n",money1);
                       printf("****bet****\n");
                       loop2 : printf("Money for betting : ");
                       scanf("%d",&a2);
                       if(a2>money1){printf("You don't have enough money\n");goto loop2;}
                       a3=money1-a2;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n1=getch();
                       if(n1=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                     //p2
                       printf("**********");
                       printf("\nplayers name : %s\n",name2);
                       printf("pay=%d\n",money2);
                       printf("****bet****\n");
                       loop3:printf("Money for betting : ");
                       scanf("%d",&a4);
                       if(a4>money1){printf("You don't have enough money\n");goto loop3;}
                       a3=money2-a4;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n2=getch();
                       if(n2=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!");
getch();
system("cls");
gotoxy(49,10);printf("press enter to random your score ");
        for (i=0;i<=30;i++) {
        gotoxy(30,5+i); printf("||");
        gotoxy(100,5+i); printf("||");
    delay(4) ;}
	for (i=0;i<=71;i++){
	gotoxy(30+i,36); printf("=");
	gotoxy(30+i,5); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(55,18+i); printf("|");
        gotoxy(60,18+i); printf("|");
    delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,21); printf("=");
	gotoxy(55+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,18); printf("=");
	gotoxy(55+i,18); printf("=");
	delay(4);}
    //
	for (i=1;i<=3;i++) {
        gotoxy(62,18+i); printf("|");
        gotoxy(67,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(62+i,21); printf("=");
	gotoxy(62+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(62+i,18); printf("=");
	gotoxy(62+i,18); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(69,18+i); printf("|");
        gotoxy(74,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(69+i,21); printf("=");
	gotoxy(69+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(69+i,18); printf("=");
	gotoxy(69+i,18); printf("=");
	delay(4);}
	gotoxy(57,20);printf("*");
	gotoxy(64,20);printf("*");
	gotoxy(71,20);printf("*");
	getch();
int x,a,b,c,z,h1,h2;
//delay rand() gotoxy for1
for(x=0;x<=100;x++)
{
 gotoxy(57,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
a = rand()%5+1;
gotoxy(57,20);delay(100);printf("%d",a);
//delay rand() gotoxy for2
for(x=0;x<=100;x++)
{
 gotoxy(64,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
b = rand()%5+1;
gotoxy(64,20);delay(100);printf("%d",b);
//delay rand() gotoxy for3
for(x=0;x<=100;x++)
{
 gotoxy(71,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
c = rand()%5+1;
gotoxy(71,20);delay(100);printf("%d",c);
getch();
system("cls");
z=a+b+c;
printf("[%d] [%d] [%d] is %d :  ",a,b,c,z);
 if(z>=11){printf("High\n");}
 else printf("low\n");
if((n1=='h'&&z>=11) || (n1=='l'&&z<11)){
    printf("%s : You win\n",name1);
    money1=money1+(a2*2);}
 else {printf("%s : You lose\n",name1);
       money1 =money1-a2;}
if((n2=='h'&&z>=11) || (n2=='l'&&z<11)){
    printf("%s : You win\n",name2);
    money2=money2+(a4*2);}
 else {printf("%s : You lose\n",name2);
       money2 =money2-a4;}
       if(money1,money2 == 0){
				printf("You Lose, loss all money.\n");
				ch = 'q';
			}
			else{
				printf("Input 'q' to exit program : \n");
				ch = getch();}}}
         //3p
         switch(x){case 3 : printf("\nname player1 : ");scanf("%s",name1);printf("\nname player2 : ");scanf("%s",name2);printf("\nname player3 : ");scanf("%s",name3);
         printf("system HI-LO give money 10,000 for players\n");
         getch();
         system("cls");
         while(ch !='q'){
         printf("**********");
         printf("\nplayers name : %s\n",name1);
                       printf("pay=%d\n",money1);
                       printf("****bet****\n");
                       loop4:printf("Money for betting : ");
                       scanf("%d",&a2);
                       if(a2>money1){printf("You don't have enough money\n");goto loop4;}
                       a3=money1-a2;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n1=getch();
                       if(n1=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                     //p2
                       printf("**********");
                       printf("\nplayers name : %s\n",name2);
                       printf("pay=%d\n",money2);
                       printf("****bet****\n");
                       loop5:printf("Money for betting : ");
                       scanf("%d",&a4);
                       if(a4>money1){printf("You don't have enough money\n");goto loop5;}
                       a3=money2-a4;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n2=getch();
                       if(n2=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                       //p3
                       printf("**********");
                       printf("\nplayers name : %s\n",name3);
                       printf("pay=%d\n",money3);
                       printf("****bet****\n");
                       loop6:printf("Money for betting : ");
                       scanf("%d",&a5);
                       if(a5>money1){printf("You don't have enough money\n");goto loop6;}
                       a3=money2-a5;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n3=getch();
                       if(n3=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!");
getch();
system("cls");
gotoxy(49,10);printf("press enter to random your score ");
        for (i=0;i<=30;i++) {
        gotoxy(30,5+i); printf("||");
        gotoxy(100,5+i); printf("||");
    delay(4) ;}
	for (i=0;i<=71;i++){
	gotoxy(30+i,36); printf("=");
	gotoxy(30+i,5); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(55,18+i); printf("|");
        gotoxy(60,18+i); printf("|");
    delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,21); printf("=");
	gotoxy(55+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,18); printf("=");
	gotoxy(55+i,18); printf("=");
	delay(4);}
    //
	for (i=1;i<=3;i++) {
        gotoxy(62,18+i); printf("|");
        gotoxy(67,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(62+i,21); printf("=");
	gotoxy(62+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(62+i,18); printf("=");
	gotoxy(62+i,18); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(69,18+i); printf("|");
        gotoxy(74,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(69+i,21); printf("=");
	gotoxy(69+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(69+i,18); printf("=");
	gotoxy(69+i,18); printf("=");
	delay(4);}
	gotoxy(57,20);printf("*");
	gotoxy(64,20);printf("*");
	gotoxy(71,20);printf("*");
	getch();
int x,a,b,c,z,h1,h2;
//delay rand() gotoxy for1
for(x=0;x<=100;x++)
{
 gotoxy(57,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
a = rand()%5+1;
gotoxy(57,20);delay(100);printf("%d",a);
//delay rand() gotoxy for2
for(x=0;x<=100;x++)
{
 gotoxy(64,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
b = rand()%5+1;
gotoxy(64,20);delay(100);printf("%d",b);
//delay rand() gotoxy for3
for(x=0;x<=100;x++)
{
 gotoxy(71,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
c = rand()%5+1;
gotoxy(71,20);delay(100);printf("%d",c);
getch();
system("cls");
z=a+b+c;
printf("[%d] [%d] [%d] is %d :  ",a,b,c,z);
 if(z>=11){printf("High\n");}
 else printf("low\n");
if((n1=='h'&&z>=11) || (n1=='l'&&z<11)){
    printf("%s : You win\n",name1);
    money1=money1+(a2*2);}
 else {printf("%s : You lose\n",name1);
       money1 =money1-a2;}
if((n2=='h'&&z>=11) || (n2=='l'&&z<11)){
    printf("%s : You win\n",name2);
    money2=money2+(a4*2);}
 else {printf("%s : You lose\n",name2);
       money2 =money2-a4;}
if((n3=='h'&&z>=11) || (n3=='l'&&z<11)){
    printf("%s : You win\n",name3);
    money3=money3+(a5*2);}
 else {printf("%s : You lose\n",name3);
       money3 =money3-a5;}
       if(money1,money2,money3 == 0){
				printf("You Lose, loss all money.\n");
				ch = 'q';
			}
			else{
				printf("Input 'q' to exit program : \n");
				ch = getch();}}}
         //4p
         switch(x){case 4 : printf("\nname player1 : ");scanf("%s",name1);printf("\nname player2 : ");scanf("%s",name2);printf("\nname player3 : ");scanf("%s",name3);printf("\nname player4 : ");scanf("%s",name4);
         printf("system HI-LO give money 10,000 for players\n");
         getch();
         system("cls");
         while(ch !='q'){
         printf("**********");
         printf("\nplayers name : %s\n",name1);
                       printf("pay=%d\n",money1);
                       printf("****bet****\n");
                       loop7:printf("Money for betting : ");
                       scanf("%d",&a2);
                       if(a2>money1){printf("You don't have enough money\n");goto loop7;}
                       a3=money1-a2;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n1=getch();
                       if(n1=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                     //p2
                       printf("**********");
                       printf("\nplayers name : %s\n",name2);
                       printf("pay=%d\n",money2);
                       printf("****bet****\n");
                       loop8:printf("Money for betting : ");
                       scanf("%d",&a4);
                       if(a4>money1){printf("You don't have enough money\n");goto loop8;}
                       a3=money2-a4;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n2=getch();
                       if(n2=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                       //p3
                       printf("**********");
                       printf("\nplayers name : %s\n",name3);
                       printf("pay=%d\n",money3);
                       printf("****bet****\n");
                       loop9 : printf("Money for betting : ");
                       scanf("%d",&a5);
                       if(a5>money1){printf("You don't have enough money\n");goto loop9;}
                       a3=money1-a5;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n3=getch();
                       if(n3=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!\n");
                       //p4
                       printf("**********");
                       printf("\nplayers name : %s\n",name4);
                       printf("pay=%d\n",money4);
                       printf("****bet****\n");
                       loop10:printf("Money for betting : ");
                       scanf("%d",&a6);
                       if(a6>money1){printf("You don't have enough money\n");goto loop10;}
                       a3=money4-a6;
                       printf("total : %d\n",a3);
                       printf("Input 'h' for high or 'l' for low : ");
                       n4=getch();
                       if(n4=='h'){
                            printf("High");
                       }
                       else printf("Low");
                       printf("\nLet GO!!!");
getch();
system("cls");
gotoxy(49,10);printf("press enter to random your score ");
        for (i=0;i<=30;i++) {
        gotoxy(30,5+i); printf("||");
        gotoxy(100,5+i); printf("||");
    delay(4) ;}
	for (i=0;i<=71;i++){
	gotoxy(30+i,36); printf("=");
	gotoxy(30+i,5); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(55,18+i); printf("|");
        gotoxy(60,18+i); printf("|");
    delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,21); printf("=");
	gotoxy(55+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(55+i,18); printf("=");
	gotoxy(55+i,18); printf("=");
	delay(4);}
    //
	for (i=1;i<=3;i++) {
        gotoxy(62,18+i); printf("|");
        gotoxy(67,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(62+i,21); printf("=");
	gotoxy(62+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(62+i,18); printf("=");
	gotoxy(62+i,18); printf("=");
	delay(4);}
	//
	for (i=1;i<=3;i++) {
        gotoxy(69,18+i); printf("|");
        gotoxy(74,18+i); printf("|");}
	for (i=0;i<=5;i++){
	gotoxy(69+i,21); printf("=");
	gotoxy(69+i,21); printf("=");
	delay(4);}
	for (i=0;i<=5;i++){
	gotoxy(69+i,18); printf("=");
	gotoxy(69+i,18); printf("=");
	delay(4);}
	gotoxy(57,20);printf("*");
	gotoxy(64,20);printf("*");
	gotoxy(71,20);printf("*");
	getch();
int x,a,b,c,z,h1,h2;
//delay rand() gotoxy for1
for(x=0;x<=100;x++)
{
 gotoxy(57,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
a = rand()%5+1;
gotoxy(57,20);delay(100);printf("%d",a);
//delay rand() gotoxy for2
for(x=0;x<=100;x++)
{
 gotoxy(64,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
b = rand()%5+1;
gotoxy(64,20);delay(100);printf("%d",b);
//delay rand() gotoxy for3
for(x=0;x<=100;x++)
{
 gotoxy(71,20);delay(0+(x));printf("%d",x%6);
}
srand(time(NULL));
c = rand()%5+1;
gotoxy(71,20);delay(100);printf("%d",c);
getch();
system("cls");
z=a+b+c;
printf("[%d] [%d] [%d] is %d :  ",a,b,c,z);
 if(z>=11){printf("High\n");}
 else printf("low\n");
if((n1=='h'&&z>=11) || (n1=='l'&&z<11)){
    printf("%s : You win\n",name1);
    money1=money1+(a2*2);}
 else {printf("%s : You lose\n",name1);
       money1 =money1-a2;}
if((n2=='h'&&z>=11) || (n2=='l'&&z<11)){
    printf("%s : You win\n",name2);
    money2=money2+(a4*2);}
 else {printf("%s : You lose\n",name2);
       money2 =money2-a4;}
if((n3=='h'&&z>=11) || (n3=='l'&&z<11)){
    printf("%s : You win\n",name3);
    money3=money3+(a5*2);}
 else {printf("%s : You lose\n",name3);
       money3 =money3-a5;}
if((n4=='h'&&z>=11) || (n4=='l'&&z<11)){
    printf("%s : You win\n",name4);
    money4=money4+(a6*2);}
 else {printf("%s : You lose\n",name3);
       money4 =money4-6;}

       if(money1,money2,money3,money4 == 0){
				printf("You Lose, loss all money.\n");
				ch = 'q';
			}
			else{
				printf("Input 'q' to exit program : \n");
				ch = getch();}}
         }
    getch();
    system("cls");
    for (i=0;i<=30;i++) {
        gotoxy(30,5+i); printf("||");
        gotoxy(100,5+i); printf("||");
    delay(4) ;
	}
	for (i=0;i<=71;i++) {
	gotoxy(30+i,36); printf("=");
	gotoxy(30+i,5); printf("=");
	delay(4);
	}
   for (i=1;i<=14;i++) {
 		gotoxy(63,12);printf("HI-LO GAME");
 		gotoxy(55,13+i);printf("ID : 43743     Group 03\n");
		gotoxy(55,12+i);printf("                       \n");
		gotoxy(55,27-i);printf("This Program present by \n");
		gotoxy(55,28-i);printf("                         \n");
		delay(50);
	}
		n="Thanakrit sangsuwan";
	for (i=0;i<=19;i++) {
		gotoxy(57+i,18);printf("%c",n[i]);delay(50);}
		n="Nattawat  Kongkhorat";
	for (i=0;i<=19;i++) {
    gotoxy(57+i,20);printf("%c",n[i]);delay(50);}
        n="Wutthichai  Piyarungrod";
	for (i=0;i<=22;i++) {
    gotoxy(55+i,22);printf("%c",n[i]);delay(50);}
        n="Pimsupa   Sitthiwong";
    for (i=0;i<=20;i++){
    gotoxy(57+i,24);printf("%c",n[i]);delay(50);}

    getch();
    system("cls");


}
