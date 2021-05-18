#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void main()
{
  char check={0},temp={0},temp1={0};
  int crash=0;

  int midy,num,num1,i;

  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");

  midy=getmaxy()/2;
  settextstyle(1,HORIZ_DIR,3);
  setcolor(YELLOW);

  outtextxy(50,50,"MOVEMENTS:"); delay(3);
  outtextxy(100,80,"press 'w' to move forward");   delay(3);
  outtextxy(100,110,"press 'a' to move to left lane"); delay(3);
  outtextxy(100,140,"press 'd' to move to right lane"); delay(3);
  outtextxy(100,170,"press 'n' to exit game");  delay(3);
  outtextxy(50,200,"RULES:");  delay(3);
  outtextxy(100,230,"move only on the green lane to win");  delay(3);

  outtextxy(200,midy+200,"press any key to start");  delay(3);
  getch();

  num=2;
  num1=4;

  temp='a';
  check='w';
  for(i=0;check!='n' && i<600;)
  {
   num=rand()%2;
   if(num==0)
    {
      num=2;
      num1=4;
    }
    else
    {
      num=4;
      num1=2;
    }

   if(check=='w')
   {
    setbkcolor(6);
    setcolor(RED);
    setfillstyle(1,num);
    bar(50,0,300,550);
    setfillstyle(1,0);
    bar(297,0,303,550);
    setfillstyle(1,num1);
    bar(303,0,550,550);
    if(temp=='a')
    {
      setcolor(15);
      setfillstyle(1,15);
      bar(155,475-i,195,545-i);
      bar(160,465-i,190,470-i);

      setfillstyle(1,8);
      bar(160,485-i,190,520-i);

      setfillstyle(1,14);//light
      bar(150,465-i,160,470-i);
      bar(190,465-i,200,470-i);


      line(195,545-i,200,540-i);
      line(155,545-i,150,540-i);
      line(155,545-i,158,550-i);
      line(195,545-i,192,550-i);
      line(158,550-i,192,550-i);
      line(200,540-i,200,465-i);
      line(150,540-i,150,465-i);
      line(150,470-i,200,470-i);
      line(150,465-i,200,465-i);
      line(155,475-i,150,470-i);
      line(200,470-i,195,475-i);
      line(160,465-i,160,470-i);
      line(190,465-i,190,470-i);
      line(150,485-i,155,485-i);
      line(150,515-i,155,515-i);
      line(150,530-i,155,530-i);
      line(195,485-i,200,485-i);
      line(195,515-i,200,515-i);
      line(195,530-i,200,530-i);
      line(150,465-i,130,450-i);
      line(160,465-i,180,450-i);
      line(190,465-i,170,450-i);
      line(200,465-i,220,450-i);
    }

    else if(temp=='d')
    {
      setcolor(15);
      setfillstyle(1,15);
      bar(405,475-i,445,545-i);
      bar(410,465-i,440,470-i);

      setfillstyle(1,8);
      bar(410,485-i,440,520-i);

      setfillstyle(1,14);//light
      bar(400,465-i,440,470-i);
      bar(440,465-i,450,470-i);


      line(445,545-i,450,540-i);
      line(405,545-i,400,540-i);
      line(405,545-i,408,550-i);
      line(445,545-i,442,550-i);
      line(408,550-i,442,550-i);
      line(450,540-i,450,465-i);
      line(400,540-i,400,465-i);
      line(400,470-i,450,470-i);
      line(400,465-i,450,465-i);
      line(405,475-i,400,470-i);
      line(450,470-i,445,475-i);
      line(410,465-i,410,470-i);
      line(440,465-i,440,470-i);
      line(400,485-i,405,485-i);
      line(400,515-i,405,515-i);
      line(400,530-i,405,530-i);
      line(445,485-i,450,485-i);
      line(445,515-i,450,515-i);
      line(445,530-i,450,530-i);
      line(400,465-i,380,450-i);
      line(410,465-i,430,450-i);
      line(440,465-i,420,450-i);
      line(450,465-i,470,450-i);
    }
   }

   temp1=temp;
   temp=check;
   check=getch();
   

     if(temp!='a')
      if(temp!='d')
       temp=temp1;
      if(check=='w')
	i=i+50;

   if(check=='w'&&temp=='d'&&num1==4)
   {
     setcolor(YELLOW);
     crash=1;
     outtextxy(50,midy,"you lose because you moved on red lane");
     getch();
     break;
   }

   else if(check=='w'&&temp=='a'&&num==4)
   {
    setcolor(YELLOW);
    crash=1;
    outtextxy(50,midy,"you lose because you moved on red lane");
    getch();
    break;
   }

   if(check=='a' || check=='d')
   {
    setbkcolor(6);
    setcolor(RED);
    setfillstyle(1,num);
    bar(50,0,300,550);//left lane
    setfillstyle(1,0);
    bar(297,0,303,550);//divider
    setfillstyle(1,num1);
    bar(300,0,550,550);//right lane

    if(check=='a'&&num==4)
    {
     setcolor(YELLOW);
     crash=1;
     outtextxy(50,midy,"you lose because you moved on red lane");
     getch();
     break;
    }

    else if(check=='a')
     {
      setcolor(15);
      setfillstyle(1,15);
      bar(155,475-i,195,545-i);
      bar(160,465-i,190,470-i);

      setfillstyle(1,8);
      bar(160,485-i,190,520-i);

      setfillstyle(1,14);//light
      bar(150,465-i,160,470-i);
      bar(190,465-i,200,470-i);


      line(195,545-i,200,540-i);
      line(155,545-i,150,540-i);
      line(155,545-i,158,550-i);
      line(195,545-i,192,550-i);
      line(158,550-i,192,550-i);
      line(200,540-i,200,465-i);
      line(150,540-i,150,465-i);
      line(150,470-i,200,470-i);
      line(150,465-i,200,465-i);
      line(155,475-i,150,470-i);
      line(200,470-i,195,475-i);
      line(160,465-i,160,470-i);
      line(190,465-i,190,470-i);
      line(150,485-i,155,485-i);
      line(150,515-i,155,515-i);
      line(150,530-i,155,530-i);
      line(195,485-i,200,485-i);
      line(195,515-i,200,515-i);
      line(195,530-i,200,530-i);
      line(150,465-i,130,450-i);
      line(160,465-i,180,450-i);
      line(190,465-i,170,450-i);
      line(200,465-i,220,450-i);

     }
   else if(check=='d'&&num1==4)
    {
     setcolor(YELLOW);
     crash=1;
     outtextxy(50,midy,"you lose because you moved on red lane");
     getch();
     break;
    }

   else if(check=='d')
    {
      setcolor(15);
      setfillstyle(1,15);
      bar(405,475-i,445,545-i);
      bar(410,465-i,440,470-i);

      setfillstyle(1,8);
      bar(410,485-i,440,520-i);

      setfillstyle(1,14);//light
      bar(400,465-i,410,470-i);
      bar(440,465-i,450,470-i);


      line(445,545-i,450,540-i);
      line(405,545-i,400,540-i);
      line(405,545-i,408,550-i);
      line(445,545-i,442,550-i);
      line(408,550-i,442,550-i);
      line(450,540-i,450,465-i);
      line(400,540-i,400,465-i);
      line(400,470-i,450,470-i);
      line(400,465-i,450,465-i);
      line(405,475-i,400,470-i);
      line(450,470-i,445,475-i);
      line(410,465-i,410,470-i);
      line(440,465-i,440,470-i);
      line(400,485-i,405,485-i);
      line(400,515-i,405,515-i);
      line(400,530-i,405,530-i);
      line(445,485-i,450,485-i);
      line(445,515-i,450,515-i);
      line(445,530-i,450,530-i);
      line(400,465-i,380,450-i);
      line(410,465-i,430,450-i);
      line(440,465-i,420,450-i);
      line(450,465-i,470,450-i);
    }
   else if(check=='w'&&temp=='d'&&num1==4)
   {
    setcolor(YELLOW);
    outtextxy(200,midy,"you lose because you moved on red lane");
    crash=1;
    getch();
    break;
   }
  }
 }
  setcolor(YELLOW);
  if(check=='n')
  {
   cleardevice();
   outtextxy(100,midy,"you have exited the game");
   outtextxy(100,midy+100,"press any key to continue");
   getch();
  }
  if(crash!=1)
  {
   outtextxy(200,midy,"you win");
   getch();
   cleardevice();
  }
}
