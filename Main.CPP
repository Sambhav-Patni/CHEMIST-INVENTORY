#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<dos.h>
#include<time.h>

int q,r;

void line(int x=1,int y=1)
{
 for(int i=x;i<80;i++)
 {
  gotoxy(i,y);
  cout<<char(176);
 }
}

void box(int a=5,int b=75,int c=2,int d=25)
{
 //_setcursortype(_NOCURSOR);
 for(int i=a;i<b;i++)
 {
  gotoxy(i,c);
  cprintf("Í");
 }
 gotoxy(a-1,c);
 cprintf("É");
 gotoxy(b,c);
 cprintf("»");
 for(i=c+1;i<d;i++)
 {
  gotoxy(a-1,i);
  cprintf("º");
  gotoxy(b,i);
  cprintf("º");
 }
 for(i=a;i<b;i++)
 {
  gotoxy(i,d);
  cprintf("Í");
 }
 gotoxy(b,d);
 cprintf("¼");
 gotoxy(a-1,d);
 cprintf("È");
}

void box2(int a=5,int b=75,int c=2,int d=25)
{
 for(int i=a;i<b;i++)
 {
  gotoxy(i,c);
  cprintf("Ä");
 }
 gotoxy(a-1,c);
 cprintf("Ú");
 gotoxy(b,c);
 cprintf("¿");
 for(i=c+1;i<d;i++)
 {
  gotoxy(a-1,i);
  cprintf("³");
  gotoxy(b,i);
  cprintf("³");
 }
 for(i=a;i<b;i++)
 {
  gotoxy(i,d);
  cprintf("Ä");
 }
 gotoxy(b,d);
 cprintf("Ù");
 gotoxy(a-1,d);
 cprintf("À");
}

void box3(int a=5,int b=75,int c=2,int d=25)
{
 for(int i=a;i<b;i++)
 {
  gotoxy(i,c);
  cout<<" ";
 }
 gotoxy(a-1,c);
 cout<<" ";
 gotoxy(b,c);
 cout<<" ";
 for(i=c+1;i<d;i++)
 {
  gotoxy(a-1,i);
  cout<<" ";
  gotoxy(b,i);
  cout<<" ";
 }
 for(i=a;i<b;i++)
 {
  gotoxy(i,d);
  cout<<" ";
 }
 gotoxy(b,d);
 cout<<" ";
 gotoxy(a-1,d);
 cout<<" ";
}

void read(char string[],int size,int x,int y,int war1=59,int war2=4)
{
 int i=0;
 int t=x;
 int c;
 for( i=0;i<size;i++ )
 {
  A:
  gotoxy(x,y);
  string[i]=getch();
  c=string[i];
  if((i==0) && (string[i]=='\r'))
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   for(int j=war2;j<war2+2;j++)
    {
     delay(50);
     textcolor(15);
     textbackground(1);
     gotoxy(war1,j);
     cprintf("                ");
    }

   textcolor(15);
   textbackground(1);
   gotoxy(war1,war2+1);
   cprintf(" INVALID ENTRY ");
   delay(50);
   box2(war1,war1+15,war2,war2+2);
   getch();
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   gotoxy(war1-1,war2);
   cprintf("                 ");
   gotoxy(war1-1,war2+1);
   cprintf("                 ");
   gotoxy(war1-1,war2+2);
   cprintf("                 ");
   goto A;
  }

  if((string[i]==char(4)) || (string[i]==char(5)) || (string[i]==char(19)) || (string[i]==char(24)))
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   for(int j=war2;j<war2+2;j++)
    {
     delay(50);
     textcolor(15);
     textbackground(1);
     gotoxy(war1,j);
     cprintf("                ");
    }

   textcolor(15);
   textbackground(1);
   gotoxy(war1,war2+1);
   cprintf(" INVALID ENTRY ");
   delay(50);
   box2(war1,war1+15,war2,war2+2);
   getch();
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   gotoxy(war1-1,war2);
   cprintf("                 ");
   gotoxy(war1-1,war2+1);
   cprintf("                 ");
   gotoxy(war1-1,war2+2);
   cprintf("                 ");
   goto A;
  }

  if((i==0) && (string[i]==' '))
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   for(int j=war2;j<war2+2;j++)
    {
     delay(50);
     textcolor(15);
     textbackground(1);
     gotoxy(war1,j);
     cprintf("                ");
    }

   textcolor(15);
   textbackground(1);
   gotoxy(war1,war2+1);
   cprintf(" INVALID ENTRY ");
   delay(50);
   box2(war1,war1+15,war2,war2+2);
   getch();
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   gotoxy(war1-1,war2);
   cprintf("                 ");
   gotoxy(war1-1,war2+1);
   cprintf("                 ");
   gotoxy(war1-1,war2+2);
   cprintf("                 ");
   goto A;
  }

  if((c==72) || (c==80) || (c==75) || (c==77) || (c==71)
  || (c==81) || (c==79) || (c==82) || (c==73))
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   for(int j=war2;j<war2+2;j++)
    {
     delay(50);
     textcolor(15);
     textbackground(1);
     gotoxy(war1,j);
     cprintf("                ");
    }

   textcolor(15);
   textbackground(1);
   gotoxy(war1,war2+1);
   cprintf(" INVALID ENTRY ");
   delay(50);
   box2(war1,war1+15,war2,war2+2);
   getch();
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   gotoxy(war1-1,war2);
   cprintf("                 ");
   gotoxy(war1-1,war2+1);
   cprintf("                 ");
   gotoxy(war1-1,war2+2);
   cprintf("                 ");
   //gotoxy(x,y);
   goto A;
  }

  if((i<=size)&&(string[i]==char(27)))
  goto END;

  if (( i>0 ) && ( string[i]==char(8) ))
  {
   while(string[i]==char(8) && i>=0 && x>=t)
   {

     gotoxy(--x,y);
     cout<<" ";
     gotoxy(x,y);
     string[--i]=getch();
     if((i==0) && (x==t))
     goto A;

   }
  }
  else
  if (( i==0 ) && ( string[i]==char(8) ))
  goto A;
  if (string[i]=='\r')
  {
   string[i]='\0';
   break;
  }
  ++x;
  cout<<string[i];
 } END:
}

int count=0,brnch;
int mrec=0,offset=0;
char temp[20];

struct br_cnt
{
 int count;
}br;

struct sales
{
 long double gen_tot;
 long double med_tot;
 long double net_tot;
}sal;

int get_counter1()
{
 ifstream file;
 file.open("counter.cnt",ios::out|ios::binary);
 file.read((char *) & br,sizeof(br_cnt));
 file.close();
 if(!file)
 return 1;
 else
 return br.count;
}

int get_counter3()
{
 ifstream file;
 file.open("counter2.cnt",ios::out|ios::binary);
 file.read((char *) & br,sizeof(br_cnt));
 file.close();
 if(!file)
 return 1;
 else
 return br.count;
}

int get_counter2()
{
 ifstream file;
 file.open("counter.ctn",ios::out|ios::binary);
 file.read((char *) & br,sizeof(br_cnt));
 file.close();
 if(!file)
 return 1;
 else
 return br.count;
}

int get_counter4()
{
 ifstream file;
 file.open("counter2.ctn",ios::out|ios::binary);
 file.read((char *) & br,sizeof(br_cnt));
 file.close();
 if(!file)
 return 1;
 else
 return br.count;
}

void save_counter2(int cn)
{
 br.count=cn;
 ofstream file;
 file.open("counter.ctn",ios::in|ios::binary);
 file.write((char *) & br,sizeof(br_cnt));
 file.close();
}

void save_counter4(int cn)
{
 br.count=cn;
 ofstream file;
 file.open("counter2.ctn",ios::in|ios::binary);
 file.write((char *) & br,sizeof(br_cnt));
 file.close();
}

void save_counter1(int cn)
{
 br.count=cn;
 ofstream file;
 file.open("counter.cnt",ios::in|ios::binary);
 file.write((char *) & br,sizeof(br_cnt));
 file.close();
}

void save_counter3(int cn)
{
 br.count=cn;
 ofstream file;
 file.open("counter2.cnt",ios::in|ios::binary);
 file.write((char *) & br,sizeof(br_cnt));
 file.close();
}

struct Inv
{
 char tem1[10];
 char tem3[10];
 char tem4[10];
 char tem5[10];
 char tem2[10];
 char b1[10];
 char b2[10];
 char b3[10];
 char b4[10];
 char b5[10];
 char cat1[10];
 char cat2[10];
 char cat3[10];
 char cat4[10];
 char cat5[10];
 char yyy[3];
 char inv[10];
 float rate[6];
 float cost[6];
 float tot;
 int mm,dd,yy;
 int qt1;
 int qt2;
 int qt3;
 int qt4;
 int qt5;
 int ch;
}bill;

void nullify2()
{
 strcpy(bill.tem1,'\0');
 strcpy(bill.tem3,'\0');
 strcpy(bill.tem4,'\0');
 strcpy(bill.tem5,'\0');
 strcpy(bill.tem2,'\0');
 strcpy(bill.b1,'\0');
 strcpy(bill.b2,'\0');
 strcpy(bill.b3,'\0');
 strcpy(bill.b4,'\0');
 strcpy(bill.b5,'\0');
 strcpy(bill.cat1,'\0');
 strcpy(bill.cat2,'\0');
 strcpy(bill.cat3,'\0');
 strcpy(bill.cat4,'\0');
 strcpy(bill.cat5,'\0');
 strcpy(bill.inv,'\0');
 for(int i=0;i<6;i++)
 {
  bill.rate[i]=0;
  bill.cost[i]=0;
 }
 bill.tot=0;
 bill.mm=0;
 bill.dd=0;
 bill.yy=0;
 bill.qt1=0;
 bill.qt2=0;
 bill.qt3=0;
 bill.qt4=0;
 bill.qt5=0;
 bill.ch=0;
}

struct gen_Inv
{
 char tem1[10];
 char tem3[10];
 char tem4[10];
 char tem5[10];
 char tem2[10];
 char pkg1[10];
 char pkg2[10];
 char pkg3[10];
 char pkg4[10];
 char pkg5[10];
 char fr1[10];
 char fr2[10];
 char fr3[10];
 char fr4[10];
 char fr5[10];
 char inv[10];
 char yy[3];
 float rate[6];
 float cost[6];
 float tot;
 int mm,dd,yyy;
 int qt1;
 int qt2;
 int qt3;
 int qt4;
 int qt5;
 int ch;
}bll;

void nullify3()
{
 strcpy(bll.tem1,'\0');strcpy(bll.tem3,'\0');
 strcpy(bll.tem4,'\0');strcpy(bll.tem5,'\0');
 strcpy(bll.tem2,'\0');strcpy(bll.pkg1,'\0');
 strcpy(bll.pkg2,'\0');strcpy(bll.pkg3,'\0');
 strcpy(bll.pkg4,'\0');strcpy(bll.pkg5,'\0');
 strcpy(bll.fr1,'\0');strcpy(bll.fr2,'\0');
 strcpy(bll.fr3,'\0');strcpy(bll.fr4,'\0');
 strcpy(bll.fr5,'\0');strcpy(bll.inv,'\0');
 strcpy(bll.yy,'\0');bll.tot=0;
 for(int i=0;i<6;i++)
 {
  bll.rate[i]=0;
  bll.cost[i]=0;
 }
 bll.mm=0,bll.dd=0,bll.yyy=0;
 bll.qt1=0;bll.qt2=0;bll.qt3=0;
 bll.qt4=0;bll.qt5=0;bll.ch=0;
}

struct Node
{
 char code[20];
 char med_name[30];
 char manuf[30];
 char batch[10];
 char cat[10];
 float rate;
 float cost;
 int stock;
 short int dd;
 short int mm;
 short int yy;
}start;

void nullify1()
{
 strcpy(start.code,'\0');
 strcpy(start.med_name,'\0');
 strcpy(start.manuf,'\0');
 strcpy(start.batch,'\0');
 start.rate=0;
 start.cost=0;
 start.stock=0;
 start.dd=1;
 start.mm=1;
 start.yy=2002;
}

struct gen
{
 char code[20];
 char it_name[30];
 char manuf[30];
 char batch[10];
 char pckg[10];
 char free[20];
 short float rate;
 int stock;
 short int dd;
 short int mm;
 short int yyy;
 char yy[3];
}gn;

void nullify4()
{
 strcpy(gn.code,'\0');strcpy(gn.it_name,'\0');
 strcpy(gn.manuf,'\0');strcpy(gn.batch,'\0');
 strcpy(gn.pckg,'\0');strcpy(gn.free,'\0');
 gn.rate=0;gn.stock=0;gn.dd=0;gn.mm=0;
 gn.yyy=0;strcpy(gn.yy,'\0');
}
struct pass
{
 char pss[20];
 char pss2[20];
}*s;

int verifypass(char check[])
{
 highvideo();
 char ch;
 int ret=1;
 ifstream file1;
 s = new pass;
 file1.open("pass.pss",ios::nocreate);
 file1.read((char *) & * s,sizeof(*s));
 if(strcmp(s->pss,check)==0)
 {
  ret=0;
 }
 if(strcmp(s->pss,check)!=0)
 {
  ret=2;
 }
 file1.close();
 return ret;
}
int checkpass(void)
{
 highvideo();
 int ret=1;
 clrscr();
 ifstream file2;
 file2.open("pass.pss",ios::nocreate|ios::binary);
 if (file2)
 ret=0;
 file2.close();
 return ret;
}

void create_node();
void create_node2();
void view_file();
void view_file2();
void bills();
void bills2();
void update();
void update2();
void invoice();
void invoice2();
void help();

void help()
{
 _setcursortype(_NOCURSOR);
 clrscr();
 textcolor(8);
 gotoxy(4,2);cprintf("É");
 for(int i=5;i<77;i++)
 {
  delay(10);
  gotoxy(i,2);cprintf("Í");
 }
 gotoxy(77,2);cprintf("»");
 for(i=3;i<25;i++)
 {
  delay(10);
  gotoxy(77,i);cprintf("º");
 }
 gotoxy(77,24);cprintf("¼");
  for(i=76;i>4;i--)
 {
  delay(10);
  gotoxy(i,24);cprintf("Í");
 }
 gotoxy(4,24);cprintf("È");
 for(i=23;i>2;i--)
 {
 delay(10);
 gotoxy(4,i);cprintf("º");
 }
 textcolor(15);
 highvideo();
 gotoxy(11,9);cprintf(" IT'S A SAMBHAV COMP. CORP. LTD. (S.C.C.L.) PRESENTATION ");
 gotoxy(32,11);cprintf(" COPYRIGHT 2003 ");
 gotoxy(26,19);
 textcolor(7 + 128);
 cprintf("PRESS ENTER TO CONTINUE.....");
 textcolor(7);
 getch();
 clrscr();
 box(5,77,2,23);
 textcolor(8);
 gotoxy(35,3);cprintf("HELP MENU");
 textcolor(7);
 gotoxy(4,4);cprintf("Ì");
 gotoxy(77,4);cprintf("¹");
 for(i=5;i<77;i++)
 {
  gotoxy(i,4);cprintf("Í");
 }
 for(i=5;i<77;i++)
 {
  gotoxy(i,25);cprintf("Í");
 }
 textcolor(7);
 gotoxy(4,25);cprintf("È");
 gotoxy(77,25);cprintf("¼");
 gotoxy(4,24);cprintf("º");
 gotoxy(77,24);cprintf("º");
 gotoxy(4,23);cprintf("Ì");
 gotoxy(77,23);cprintf("¹");
 gotoxy(28,24);
 textcolor(8 + BLINK);
 cprintf("PRESS ENTER TO CONTINUE.....");
 gotoxy(10,10);
 textcolor(15);
 highvideo();
 cprintf("PROGRAMMERS: SAMBHAV PATNI");
 gotoxy(10,12);
 cprintf("CREATED ON: 10 / 12 / 2002");
 gotoxy(10,14);
 cprintf("FOR QUERIES AND COMMENTS : ");
 gotoxy(37,14);
 textcolor(15);highvideo();
 cprintf("sam_patni2007@yahoomail.com");
 getch();
}

int check_rec3()
{
 ifstream file;
 file.open("Stock.stc",ios::nocreate);
 if(!file)
 {
  file.close();
  return 0;
 }
 else
 {
  file.close();
  return 1;
 }
}

int check_rec4()
{
 ifstream file;
 file.open("genstck.stc",ios::nocreate);
 if(!file)
 {
  file.close();
  return 0;
 }
 else
 {
  file.close();
  return 1;
 }
}

int check_inv2()
{
 ifstream file;
 file.open("Bills.stc",ios::nocreate);
 if(!file)
 {
  file.close();
  return 0;
 }
 else
 {
  file.close();
  return 1;
 }
}

int check_inv3()
{
 ifstream file;
 file.open("Bills2.stc",ios::nocreate);
 if(!file)
 {
  file.close();
  return 0;
 }
 else
 {
  file.close();
  return 1;
 }
}

void med_prg()
{
 Start:
BEG:
 _setcursortype(_NOCURSOR);
 clrscr();
// getch();
 textbackground(0);
 textcolor(15);
 highvideo();
 box(5,76,2,25);
 for(int qw=6;qw<74;qw++)
 {
  gotoxy(qw,24);
  textcolor(8);
  cprintf("Û");
 }
 textcolor(8);
 box2(7,73,3,23);
 gotoxy(6,1);
 cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ ¯");
 gotoxy(54,1);
 cprintf(" ® ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(27,1);
 textcolor(8);
 textbackground(15);
 cprintf("     CHEMIST INVENTORY     ");
 gotoxy(33,2);
 textbackground(0);
 textcolor(8 + 128);
 cprintf(" ¯(P.C.C.L.)® ");
 textcolor(7);
 gotoxy(29,6);
 cprintf(" (MEDICAL) MAIN MENU   ");
 gotoxy(29,7);
 textcolor(15);
 cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(26,24);
 textcolor(0);
 textbackground(7);
 cprintf(" USE ARROW KEYS TO TOGGLE ");
 textcolor(15);
 textbackground(0);
 highvideo();
 gotoxy(31,9);
 cprintf("  ENTER STOCK");
 textcolor(15);
 textbackground(0);
 highvideo();
 gotoxy(30,11);
 cprintf("CHECK REMAINING STOCK");
 highvideo();
 gotoxy(31,13);
 cprintf("  CREATE BILLS");
 highvideo();
 gotoxy(31,15);
 cprintf("  UPDATE STOCK");
 highvideo();
 gotoxy(31,17);
 cprintf("  CHECK SALES");
 highvideo();
 gotoxy(31,19);
 cprintf(" EXIT INVENTORY");
 highvideo();
 gotoxy(31,21);
 cprintf("EXIT TO MAIN MENU");
 highvideo();
 textcolor(7);
 textbackground(0);
 box2(20,59,8,10);
 r=0;
 q=1;
 while(r!=13)
 {
  r=getch();

  if(r==0)
  r=getch();
  if(r==80)
    {
     if(q==1)
      {
       box3(20,59,8,10);
       textcolor(7);
       box2(20,59,10,12);
       q=2;
      }
else if(q==2)
      {
       box3(20,59,10,12);
       textcolor(7);
       box2(20,59,12,14);
       q=3;
      }
else if(q==3)
      {
       box3(20,59,12,14);
       textcolor(7);
       box2(20,59,14,16);
       q=4;
      }
else if(q==4)
      {
       box3(20,59,14,16);
       textcolor(7);
       box2(20,59,16,18);
       q=5;
      }
else if(q==5)
      {
       box3(20,59,16,18);
       textcolor(7);
       box2(20,59,18,20);
       q=6;
      }
else if(q==6)
      {
       box3(20,59,18,20);
       textcolor(7);
       box2(20,59,20,22);
       q=7;
      }
else if(q==7)
      {
       box3(20,59,20,22);
       textcolor(7);
       box2(20,59,8,10);
       q=1;
      }
}
  if (r==72)
    {
     if(q==1)
      {
       box3(20,59,8,10);
       textcolor(7);
       box2(20,59,20,22);
       q=7;
      }
else if(q==2)
      {
       box3(20,59,10,12);
       textcolor(7);
       box2(20,59,8,10);
       q=1;
      }
else if(q==3)
      {
       box3(20,59,12,14);
       textcolor(7);
       box2(20,59,10,12);
       q=2;
      }
else if(q==4)
      {
       box3(20,59,14,16);
       textcolor(7);
       box2(20,59,12,14);
       q=3;
      }
else if(q==5)
      {
       box3(20,59,16,18);
       textcolor(7);
       box2(20,59,14,16);
       q=4;
      }
else if(q==6)
      {
       box3(20,59,18,20);
       textcolor(7);
       box2(20,59,16,18);
       q=5;
      }
else if(q==7)
      {
       box3(20,59,20,22);
       textcolor(7);
       box2(20,59,18,20);
       q=6;
      }
  }
}
switch(q)
{
 case 1:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 create_node();
	 r=0;
	 goto BEG;
	}
 case 2:{
	 _setcursortype(_NORMALCURSOR);
	 textbackground(0);
	 if(check_rec3()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 view_file();
	 r=0;
	 goto BEG;
	}
 case 3:{
	 _setcursortype(_NORMALCURSOR);
	 textbackground(0);
	 if(check_rec3()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 bills();
	 r=0;
	 goto BEG;
	}
 case 4:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 if(check_rec3()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 update();
	 r=0;
	 goto BEG;
	}
 case 5:{
	  _setcursortype(_NORMALCURSOR);
	  textbackground(0);
	  if(check_inv2()==0)
	  {
	   clrscr();
	   _setcursortype(_NOCURSOR);
	   textcolor(8);
	   box(20,61,12,14);
	   gotoxy(30,13);
	   cprintf("NO BILLS CREATED YET!");
	   getch();
	   _setcursortype(_NORMALCURSOR);
	   goto BEG;
	  }
	  invoice();
	  r=0;
	  goto BEG;
	 }
 case 6:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 exit(0);
	 r=0;
//	 goto BEG;
	}
 case 7:goto SS;
}
//getch();
clrscr();
SS:
}

void change_pass()
{
  char temp2[20];
  ASD:
  clrscr();
  _setcursortype(_NORMALCURSOR);
  gotoxy(31,9);
  textcolor(15);
  highvideo();
  cprintf("Enter Old Password");
  textcolor(8);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  highvideo();
  cprintf("Password: ");
  textcolor(8);
  box2(35,57,12,14);
  textcolor(15);
  gotoxy(36,13);
  for(int i=0;i<20;i++)
  {
   temp2[i]=getch();
   if(temp2[i]=='\r')
   {
    temp2[i]='\0';
    break;
   }
   cout<<'*';
  }
  if(verifypass(temp2)==0)
  {
   _setcursortype(_NOCURSOR);
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(32,12);
   textcolor(15);
   cprintf("YOU MAY CONTINUE");
   textcolor(15);
   getch();
  }
  else
  if(verifypass(temp2)!=0)
  {
   _setcursortype(_NOCURSOR);
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(32,12);
   textcolor(15);
   cprintf("WRONG PASSWORD");
   textcolor(15);
   getch();
   goto ASD;
  }
  s = new pass;
  A:
  clrscr();
  textcolor(15);
  highvideo();
  gotoxy(22,9);
  cprintf("Enter New Password for the Program");
  textcolor(8);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  highvideo();
  cprintf("Password: ");
  textcolor(8);
  box2(35,57,12,14);
  textcolor(15);
  gotoxy(36,13);
  for(i=0;i<20;i++)
  {
   s->pss[i]=getch();
   if(s->pss[i]=='\r')
   {
    s->pss[i]='\0';
    break;
   }
   cout<<'*';
  }
  clrscr();
  gotoxy(32,9);
  textcolor(15);
  highvideo();
  cprintf("Re-Enter Password");
  textcolor(8);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  highvideo();
  cprintf("Password: ");
  textcolor(8);
  box2(35,57,12,14);
  gotoxy(36,13);
  textcolor(15);
  for(i=0;i<20;i++)
  {
   s->pss2[i]=getch();
   if(s->pss2[i]=='\r')
   {
    s->pss2[i]='\0';
    break;
   }
   cout<<'*';
  }
  if(strcmp(s->pss2,s->pss)!=0)
  {
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(26,12);
   textcolor(15);
   highvideo();
   cprintf("PASSWORDS TYPED DO NOT MATCH");
   getch();
   goto A;
  }
  else
  {
   _setcursortype(_NOCURSOR);
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(32,12);
   textcolor(15);
   cprintf("PASSWORD CHANGED");
   textcolor(15);
   getch();
   ofstream file1;
   file1.open("pass.pss",ios::nocreate);
   file1.write((char *) & * s, sizeof(* s));
   file1.close();
  }
  delete s;
}

void gen_prg()
{

Start:
BEG:
 _setcursortype(_NOCURSOR);
 clrscr();
 textbackground(0);
 textcolor(15);
 highvideo();
 box(5,76,2,25);
 for(int qw=6;qw<74;qw++)
 {
  gotoxy(qw,24);
  textcolor(8);
  cprintf("Û");
 }
 textcolor(8);
 box2(7,73,3,23);
 gotoxy(6,1);
 cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ ¯");
 gotoxy(54,1);
 cprintf(" ® ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(27,1);
 textcolor(8);
 textbackground(15);
 cprintf("  GENERAL STORE INVENTORY  ");
 gotoxy(33,2);
 textbackground(0);
 textcolor(8 + 128);
 cprintf(" ¯(P.C.C.L.)® ");
 textcolor(7);
 gotoxy(29,6);
 cprintf(" (GENERAL) MAIN MENU   ");
 gotoxy(29,7);
 textcolor(15);
 cprintf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(26,24);
 textcolor(0);
 textbackground(7);
 cprintf(" USE ARROW KEYS TO TOGGLE ");
 textcolor(15);
 textbackground(0);
 highvideo();
 gotoxy(31,9);
 cprintf("   ENTER STOCK");
 textcolor(15);
 textbackground(0);
 highvideo();
 gotoxy(31,11);
 cprintf("CHECK REMAINING STOCK");
 highvideo();
 gotoxy(31,13);
 cprintf("   CREATE BILLS");
 highvideo();
 gotoxy(31,15);
 cprintf("   UPDATE STOCK");
 highvideo();
 gotoxy(31,17);
 cprintf("   CHECK SALES");
 highvideo();
 gotoxy(31,19);
 cprintf("  EXIT INVENTORY");
 highvideo();
 gotoxy(31,21);
 cprintf("EXIT TO MAIN MENU");
 highvideo();
 textcolor(7);
 textbackground(0);
 box2(20,59,8,10);
 int s,t;
 t=0;
 s=1;
 while(t!=13)
 {
  t=getch();

  if(t==0)
  t=getch();
  if(t==80)
    {
     if(s==1)
      {
       box3(20,59,8,10);
       textcolor(7);
       box2(20,59,10,12);
       s=2;
      }
else if(s==2)
      {
       box3(20,59,10,12);
       textcolor(7);
       box2(20,59,12,14);
       s=3;
      }
else if(s==3)
      {
       box3(20,59,12,14);
       textcolor(7);
       box2(20,59,14,16);
       s=4;
      }
else if(s==4)
      {
       box3(20,59,14,16);
       textcolor(7);
       box2(20,59,16,18);
       s=5;
      }
else if(s==5)
      {
       box3(20,59,16,18);
       textcolor(7);
       box2(20,59,18,20);
       s=6;
      }
else if(s==6)
      {
       box3(20,59,18,20);
       textcolor(7);
       box2(20,59,20,22);
       s=7;
      }
else if(s==7)
      {
       box3(20,59,20,22);
       textcolor(7);
       box2(20,59,8,10);
       s=1;
      }
}
  if (t==72)
    {
     if(s==1)
      {
       box3(20,59,8,10);
       textcolor(7);
       box2(20,59,20,22);
       s=7;
      }
else if(s==2)
      {
       box3(20,59,10,12);
       textcolor(7);
       box2(20,59,8,10);
       s=1;
      }
else if(s==3)
      {
       box3(20,59,12,14);
       textcolor(7);
       box2(20,59,10,12);
       s=2;
      }
else if(s==4)
      {
       box3(20,59,14,16);
       textcolor(7);
       box2(20,59,12,14);
       s=3;
      }
else if(s==5)
      {
       box3(20,59,16,18);
       textcolor(7);
       box2(20,59,14,16);
       s=4;
      }
else if(s==6)
      {
       box3(20,59,18,20);
       textcolor(7);
       box2(20,59,16,18);
       s=5;
      }
else if(s==7)
      {
       box3(20,59,20,22);
       textcolor(7);
       box2(20,59,18,20);
       s=6;
      }
  }
}
switch(s)
{
 case 1:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 create_node2();
	 t=0;
	 goto BEG;
	}
 case 2:{
	 _setcursortype(_NORMALCURSOR);
	 textbackground(0);
	 if(check_rec4()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 view_file2();
	 t=0;
	 goto BEG;
	}
 case 3:{
	 _setcursortype(_NORMALCURSOR);
	 textbackground(0);
	 if(check_rec4()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 bills2();
	 t=0;
	 goto BEG;
	}
 case 4:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 if(check_rec4()==0)
	 {
	  clrscr();
	  _setcursortype(_NOCURSOR);
	  textcolor(8);
	  box(20,61,12,14);
	  gotoxy(30,13);
	  cprintf("NO DATA ENTERED YET!");
	  getch();
	  _setcursortype(_NORMALCURSOR);
	  goto BEG;
	 }
	 update2();
	 t=0;
	 goto BEG;
	}
 case 5:{
	  _setcursortype(_NORMALCURSOR);
	  textbackground(0);
	  if(check_inv3()==0)
	  {
	   clrscr();
	   _setcursortype(_NOCURSOR);
	   textcolor(8);
	   box(20,61,12,14);
	   gotoxy(30,13);
	   cprintf("NO BILLS CREATED YET!");
	   getch();
	   _setcursortype(_NORMALCURSOR);
	   goto BEG;
	  }
	  invoice2();
	  t=0;
	  goto BEG;
	 }
 case 6:{
	 _setcursortype(_NOCURSOR);
	 textbackground(0);
	 exit(0);
	 t=0;
//	 goto BEG;
	}
 case 7:goto AS;
}
//getch();
clrscr();
AS:
}

void disp()
{
 textcolor(14);
textbackground(9);
highvideo();
_setcursortype(_NOCURSOR);
clrscr();
clrscr();
textbackground(0);
 highvideo();
 _setcursortype(_NOCURSOR);
 highvideo();
 clrscr();
 textcolor(15);
 box(5,75,2,24);
 delay(100);
 textcolor(8);
 box2(7,73,3,23);
 delay(100);
 textcolor(15);
 box(9,71,4,22);
 delay(100);
 textcolor(8);
 box2(11,69,5,21);
 delay(100);
 textcolor(15);
 box(13,67,6,20);
 delay(100);
 textcolor(8);
 box2(15,65,7,19);
 delay(100);
 textcolor(15);
 box(17,63,8,18);
 delay(100);
 textcolor(8);
 box2(19,61,9,17);
 gotoxy(20,10);
 textcolor(8);
 textbackground(15);
 cprintf("ÜÛÛÛÛÛÛÛ SAMBHAV COMP. CORP.ÛÛÛÛÛÛÛÛÜ");
 gotoxy(20,11);
 highvideo();
 textcolor(8);
 cprintf("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ presents ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
 gotoxy(20,12);
 highvideo();
 cprintf("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
 gotoxy(20,13);
 highvideo();
 cprintf("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
 gotoxy(20,14);
 highvideo();
 cprintf("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
 gotoxy(20,15);
 highvideo();
 cprintf("ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
 gotoxy(20,16);
 highvideo();
 cprintf("ßÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛß");
 textcolor(15 + BLINK);
 textbackground(8);
 gotoxy(27,13);
 lowvideo();
 cprintf(" MEDICAL STORES INVENTORY ");
 gotoxy(36,14);
 highvideo();
 textbackground(15);
 textcolor(0);
 gotoxy(32,15);
 cprintf("COPYRIGHT - 2003");
 delay(1000);
 textbackground(0);
 textcolor(15);
 getch();
}

void password()
{
  SA:clrscr();
 char temp[20];
 if (checkpass()==1)
 {
  _setcursortype(_NORMALCURSOR);
  s = new pass;
  A:
  clrscr();
  textcolor(15);
  highvideo();
  gotoxy(22,9);
  cprintf("Enter New Password for the Program");
  textcolor(8);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  cprintf("Password: ");
  textcolor(7);
  box2(35,57,12,14);
  textcolor(15);
  gotoxy(36,13);
  for(int i=0;i<20;i++)
  {
   s->pss[i]=getch();
   if(s->pss[i]=='\r')
   {
    s->pss[i]='\0';
    break;
   }
   cout<<'*';
  }
  clrscr();
  gotoxy(32,9);
  textcolor(15);
  highvideo();
  cprintf("Re-Enter Password");
  textcolor(7);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  cprintf("Password: ");
  textcolor(8);
  box2(35,57,12,14);
  gotoxy(36,13);
  textcolor(15);
  for(i=0;i<20;i++)
  {
   s->pss2[i]=getch();
   if(s->pss2[i]=='\r')
   {
    s->pss2[i]='\0';
    break;
   }
   cout<<'*';
  }
  if(strcmp(s->pss2,s->pss)!=0)
  {
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(26,12);
   textcolor(15);
   highvideo();
   _setcursortype(_NOCURSOR);
   cprintf("PASSWORDS TYPED DO NOT MATCH");
   getch();
   goto A;
  }
  else
  {
   ofstream file1;
   file1.open("pass.pss",ios::noreplace|ios::binary);
   file1.write((char *) & * s, sizeof(* s));
   file1.close();
  }
  delete s;
{
 clrscr();
 box();
 _setcursortype(_NOCURSOR);
 gotoxy(21,9);cprintf(" GETTING PROGRAM READY FOR FIRST RUN ");
 for(int sa=22;sa<57;sa++)
 {
  delay(100);
  gotoxy(sa,11);cprintf("Û");
 }
 textcolor(7 + BLINK);
 gotoxy(28,20);cprintf(" PRESS ENTER TO CONTINUE ");
 getch();
}
 help();
 }
 else
 if (checkpass()==0)
 {
  _setcursortype(_NORMALCURSOR);
  gotoxy(28,9);
  textcolor(15);
  highvideo();
  cprintf("Enter Password to Login");
  textcolor(7);
  box(20,60,11,15);
  gotoxy(25,13);
  textcolor(15);
  highvideo();
  cprintf("Password: ");
  textcolor(8);
  box2(35,57,12,14);
  textcolor(15);
  gotoxy(36,13);
  for(int i=0;i<20;i++)
  {
   temp[i]=getch();
   if(temp[i]=='\r')
   {
    temp[i]='\0';
    break;
   }
   cout<<'*';
 }
  if(verifypass(temp)==0)
  {
   _setcursortype(_NOCURSOR);
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(33,12);
   textcolor(15);
   highvideo();
   cprintf("ACCESS GRANTED");
   textcolor(15);
   delay(500);
   getch();
  }
  else
  if(verifypass(temp)!=0)
  {
   _setcursortype(_NOCURSOR);
   clrscr();
   textcolor(8);
   box(20,60,11,13);
   gotoxy(33,12);
   textcolor(15);
   cprintf("ACCESS DENIED!");
   textcolor(15);
   getch();
   exit(0);
  }
 }
}

void main()
{
 disp();
 password();
 BG:
 _setcursortype(_NOCURSOR);
 clrscr();
 int p,v;
 textcolor(8);
 box(5,76,1,25);
 textcolor(15);
 highvideo();
 gotoxy(35,2);cprintf("MAIN MENU");
 gotoxy(23,4);cprintf("WHICH SECTION WOULD YOU LIKE TO GO?");
 textcolor(8);
 box(16,65,5,23);
 textcolor(15);
 highvideo();
 gotoxy(28,24);cprintf("USE ARROW KEYS TO TOOGLE");
 gotoxy(30,8);cprintf("GENERAL ITEMS SECTION");
 gotoxy(30,11);cprintf("MEDICAL ITEMS SECTION");
 gotoxy(30,14);cprintf("  CHANGE PASSWORD");
 gotoxy(31,17);cprintf("QUERIES & COMMENTS");
 gotoxy(33,20);cprintf("EXIT INVENTORY");
 textcolor(7);
 box2(20,61,7,9);
  v=0;
  p=1;
 while(v!=13)
 {
  v=getch();

  if(v==0)
  v=getch();
  if(v==80)
    {
     if(p==1)
      {
       box3(20,61,7,9);
       textcolor(7);
       box2(20,61,10,12);
       p=2;
      }
     else if(p==2)
      {
       box3(20,61,10,12);
       textcolor(7);
       box2(20,61,13,15);
       p=3;
      }
     else if(p==3)
      {
       box3(20,61,13,15);
       textcolor(7);
       box2(20,61,16,18);
       p=4;
      }
     else if(p==4)
      {
       box3(20,61,16,18);
       textcolor(7);
       box2(20,61,19,21);
       p=5;
      }
     else if(p==5)
      {
       box3(20,61,19,21);
       textcolor(7);
       box2(20,61,7,9);
       p=1;
      }
    }
    if (v==72)
    {
     if(p==1)
      {
       box3(20,61,7,9);
       textcolor(7);
       box2(20,61,19,21);
       p=5;
      }
     else if(p==5)
      {
       box3(20,61,19,21);
       textcolor(7);
       box2(20,61,16,18);
       p=4;
      }
     else if(p==4)
      {
       box3(20,61,16,18);
       textcolor(7);
       box2(20,61,13,15);
       p=3;
      }
     else if(p==3)
      {
       box3(20,61,13,15);
       textcolor(7);
       box2(20,61,10,12);
       p=2;
      }
     else if(p==2)
      {
       box3(20,61,10,12);
       textcolor(7);
       box2(20,61,7,9);
       p=1;
      }
     }
  }
  switch(p)
  {
   case 1:{
	   _setcursortype(_NOCURSOR);
	   textbackground(0);
	   gen_prg();
	   v=0;
	   goto BG;
	  }
   case 2:{
	   _setcursortype(_NOCURSOR);
	   textbackground(0);
	   med_prg();
	   v=0;
	   goto BG;
	  }
   case 3:{
	   _setcursortype(_NOCURSOR);
	   textbackground(0);
	   change_pass();
	   r=0;
	   goto BG;
	  }
   case 4:{
	   _setcursortype(_NOCURSOR);
	   textbackground(0);
	   help();
	   r=0;
	   goto BG;
	  }
   case 5:{
	   _setcursortype(_NOCURSOR);
	   textbackground(0);
	   exit(0);
	   r=0;
	  }
  }
}//End of void main

void check()
{
 /*for(int i=0;i<30;i++)
 {
  if(start.code[i]==char(27))
  goto end;
 }*/
 strcpy(start.code,'\0');
 strcpy(start.med_name,'\0');
 strcpy(start.manuf,'\0');
 strcpy(start.batch,'\0');
 start.rate=0;
 start.cost=0;
 start.stock=0;
 start.dd=1;
 start.mm=1;
 start.yy=2002;
}

void create_node()
{
 char ch='n';
 char dd[3],mm[3],yy[4];
 char rate[8],stock[3];
 clrscr();
 do
 {
  _setcursortype(_NORMALCURSOR);
  clrscr();
  textcolor(15);
  highvideo();
  box(5,76,2,25);
  textcolor(2);
  gotoxy(32,3);
  textcolor(7);
  cprintf("Medicine Details");
  gotoxy(14,4);cprintf("É");
  for (int i=15;i<62;i++)
  {
   gotoxy(i,4);cprintf("Í");
   gotoxy(i,6);cprintf("Í");
   gotoxy(i,8);cprintf("Í");
   gotoxy(i,10);cprintf("Í");
   gotoxy(i,12);cprintf("Í");
   gotoxy(i,14);cprintf("Í");
   gotoxy(i,16);cprintf("Í");
   gotoxy(i,18);cprintf("Í");
   gotoxy(i,20);cprintf("Í");
  }
  for(i=5;i<21;i++)
  {
   gotoxy(14,i);cprintf("º");
   gotoxy(61,i);cprintf("º");
  }
  gotoxy(61,4);cprintf("»");
  gotoxy(21,6);cprintf("Ë");
  gotoxy(21,7);cprintf("º");
  gotoxy(21,8);cprintf("Ê");
  gotoxy(29,8);cprintf("Ë");
  gotoxy(29,9);cprintf("º");
  gotoxy(29,10);cprintf("Ê");
  gotoxy(25,10);cprintf("Ë");
  gotoxy(25,11);cprintf("º");
  gotoxy(25,12);cprintf("Ê");

  gotoxy(38,12);cprintf("Ë");
  gotoxy(38,13);cprintf("º");
  gotoxy(38,14);cprintf("Ê");

  gotoxy(28,12);cprintf("Ë");
  gotoxy(28,13);cprintf("º");
  gotoxy(28,14);cprintf("Ê");

  gotoxy(33,12);cprintf("Ë");
  gotoxy(33,13);cprintf("º");
  gotoxy(33,14);cprintf("Ê");

  gotoxy(43,12);cprintf("Ë");
  gotoxy(43,13);cprintf("º");
  gotoxy(43,14);cprintf("Ê");

  gotoxy(24,14);cprintf("Ë");
  gotoxy(24,15);cprintf("º");
  gotoxy(24,16);cprintf("Ê");

  gotoxy(21,16);cprintf("Ë");
  gotoxy(21,17);cprintf("º Rs. ");
  gotoxy(21,18);cprintf("Ê");

  gotoxy(22,18);cprintf("Ë");
  gotoxy(22,19);cprintf("º");
  gotoxy(22,20);cprintf("Ê");

  gotoxy(14,6);cprintf("Ì");
  gotoxy(14,8);cprintf("Ì");
  gotoxy(14,10);cprintf("Ì");
  gotoxy(14,12);cprintf("Ì");
  gotoxy(14,14);cprintf("Ì");
  gotoxy(14,16);cprintf("Ì");
  gotoxy(14,18);cprintf("Ì");
  gotoxy(14,20);cprintf("È");
  gotoxy(31,4);cprintf("Ë");
  gotoxy(31,5);cprintf("º");
  gotoxy(31,6);cprintf("Ê");
  gotoxy(61,6);cprintf("¹");
  gotoxy(61,8);cprintf("¹");
  gotoxy(61,10);cprintf("¹");
  gotoxy(61,12);cprintf("¹");
  gotoxy(61,14);cprintf("¹");
  gotoxy(61,16);cprintf("¹");
  gotoxy(61,18);cprintf("¹");
  gotoxy(61,20);cprintf("¼");
  gotoxy(15,5);
  textcolor(8);
  cprintf(" Enter New Code ");
  textcolor(8);
  gotoxy(15,7);
  cprintf(" Name ");
  textcolor(8);
  gotoxy(15,9);
  cprintf(" Company name ");
  gotoxy(15,11);
  cprintf(" Batch No.");
  gotoxy(45,13);
  cprintf(" DD / MM / YY ");
  gotoxy(15,13);
  textcolor(8);
  cprintf(" Expiry Date ");
  gotoxy(15,15);
  textcolor(8);
  cprintf(" Packing ");
  gotoxy(15,17);
  textcolor(8);
  cprintf(" Rate ");
  gotoxy(15,19);
  textcolor(8);
  cprintf(" Stock ");
  read(start.code,17,33,5,10,22);
  for(i=0;i<20;i++)
   {
    if(start.code[i]==char(27))
    goto end;
   }
  read(start.med_name,30,23,7,10,22);
  for(i=0;i<30;i++)
   {
    if(start.med_name[i]==char(27))
    goto end;
   }
  read(start.manuf,30,31,9,10,22);
  for(i=0;i<30;i++)
   {
    if(start.manuf[i]==char(27))
    goto end;
   }
  read(start.batch,10,27,11,10,22);
  for(i=0;i<10;i++)
   {
    if(start.batch[i]==char(27))
    goto end;
   }
  A:read(dd,2,30,13,10,22);
  for(i=0;i<2;i++)
   {
    if(dd[i]==char(27))
    goto end;
   }
  start.dd = atoi(dd);
  if(start.dd>31)
  {
   textcolor(15);
   gotoxy(30,13);
   cprintf("-- ");
   goto A;
  }
  B:
  read(mm,2,35,13,10,22);
  for(i=0;i<2;i++)
   {
    if(mm[i]==char(27))
    goto end;
   }
  mm[2]='\0';
  start.mm=atoi(mm);
  if(start.mm>12)
  {
   textcolor(15);
   gotoxy(34,13);
   cprintf(" -- ");
   goto B;
  }
  if((start.mm==2) && (start.dd>29))
  {
   textcolor(15);
   gotoxy(30,13);
   cprintf("-- ");
   gotoxy(34,13);
   cprintf(" -- ");
   goto A;
  }
  C:
  read(yy,2,40,13,10,22);
  for(i=0;i<2;i++)
   {
    if(yy[i]==char(27))
    goto end;
   }
  yy[2]='\0';
  start.yy=atoi(yy);
  struct tm *time_now;
  time_t secs_now;
  char str[4];
  int yy1;
  tzset();
  time(&secs_now);
  time_now = localtime(&secs_now);
  strftime(str, 3,"%y",time_now);
  yy1=atoi(str);
  if(start.yy>yy1)
  {
   textcolor(15);
   gotoxy(39,13);
   cprintf(" --");
   goto C;
  }
  else
  if((start.mm==2) && (start.dd>28) &&(start.yy%4!=0))
  {
   textcolor(15);
   gotoxy(30,13);
   cprintf("-- ");
   gotoxy(34,13);
   cprintf(" -- ");
   gotoxy(39,13);
   cprintf(" ----                    ");
   goto A;
  }
  read(start.cat,10,26,15,10,22);
  for(i=0;i<10;i++)
   {
    if(start.cat[i]==char(27))
    goto end;
   }
  read(rate,8,27,17,10,22);
  for(i=0;i<8;i++)
   {
    if(rate[i]==char(27))
    goto end;
   }
  read(stock,3,24,19,10,22);
  for(i=0;i<3;i++)
   {
    if(stock[i]==char(27))
    goto end;
   }
  start.rate=atof(rate);
  start.stock=atoi(stock);
  ofstream file;
  count=get_counter1();
  ++count;
  file.open("Stock.stc",ios::in|ios::binary);
  mrec=count;
  offset=((mrec-1)*sizeof(Node));
  file.seekp(offset,ios::beg);
  file.write((char *) & start, sizeof(Node));
  file.close();
  save_counter1(count);
  nullify1();
  _setcursortype(_NOCURSOR);
  gotoxy(26,22);
  textcolor(15);highvideo();
  cprintf("Press Enter to continue....");
  getch();
  clrscr();
  textcolor(8);
  box(10,70,11,13);
  gotoxy(14,12);
  textcolor(15);
  highvideo();
  cprintf("Want to Enter More Medicines? (Y/N): ");
  ch=getche();
}
 while(ch=='y'||ch=='Y');
 getch();
 end:
 textcolor(15);
}

void create_node2()
{
 char ch='n';
 char dd[3],mm[3],yy[4];
 char rate[8],stock[3];
 clrscr();
 do
 {
  _setcursortype(_NORMALCURSOR);
  clrscr();
  textcolor(15);
  highvideo();
  box(5,76,2,25);
  textcolor(2);
  gotoxy(34,3);
  textcolor(7);
  cprintf("Item Details");
  gotoxy(9,4);cprintf("É");
  for (int i=10;i<57;i++)
  {
   gotoxy(i,4);cprintf("Í");
   gotoxy(i,6);cprintf("Í");
   gotoxy(i,8);cprintf("Í");
   gotoxy(i,10);cprintf("Í");
   gotoxy(i,12);cprintf("Í");
   gotoxy(i,14);cprintf("Í");
   gotoxy(i,16);cprintf("Í");
   gotoxy(i,18);cprintf("Í");
   gotoxy(i,20);cprintf("Í");
   gotoxy(i,22);cprintf("Í");
  }
  for(i=5;i<22;i++)
  {
   gotoxy(9,i);cprintf("º");
   gotoxy(56,i);cprintf("º");
  }
  gotoxy(56,4);cprintf("»");
  gotoxy(16,6);cprintf("Ë");
  gotoxy(16,7);cprintf("º");
  gotoxy(16,8);cprintf("Ê");
  gotoxy(24,8);cprintf("Ë");
  gotoxy(24,9);cprintf("º");
  gotoxy(24,10);cprintf("Ê");
  gotoxy(20,10);cprintf("Ë");
  gotoxy(20,11);cprintf("º");
  gotoxy(20,12);cprintf("Ê");

  gotoxy(33,12);cprintf("Ë");
  gotoxy(33,13);cprintf("º");
  gotoxy(33,14);cprintf("Ê");

  gotoxy(23,12);cprintf("Ë");
  gotoxy(23,13);cprintf("º");
  gotoxy(23,14);cprintf("Ê");

  gotoxy(28,12);cprintf("Ë");
  gotoxy(28,13);cprintf("º");
  gotoxy(28,14);cprintf("Ê");

  gotoxy(38,12);cprintf("Ë");
  gotoxy(38,13);cprintf("º");
  gotoxy(38,14);cprintf("Ê");

  gotoxy(19,14);cprintf("Ë");
  gotoxy(19,15);cprintf("º");
  gotoxy(19,16);cprintf("Ê");

  gotoxy(16,16);cprintf("Ë");
  gotoxy(16,17);cprintf("º Rs. ");
  gotoxy(16,18);cprintf("Ê");

  gotoxy(17,18);cprintf("Ë");
  gotoxy(17,19);cprintf("º");
  gotoxy(17,20);cprintf("Ê");

  gotoxy(9,6);cprintf("Ì");
  gotoxy(9,8);cprintf("Ì");
  gotoxy(9,10);cprintf("Ì");
  gotoxy(9,12);cprintf("Ì");
  gotoxy(9,14);cprintf("Ì");
  gotoxy(9,16);cprintf("Ì");
  gotoxy(9,18);cprintf("Ì");
  gotoxy(9,20);cprintf("Ì");
  gotoxy(9,22);cprintf("È");
  gotoxy(26,4);cprintf("Ë");
  gotoxy(26,5);cprintf("º");
  gotoxy(26,6);cprintf("Ê");
  gotoxy(18,20);cprintf("Ë");
  gotoxy(18,21);cprintf("º");
  gotoxy(18,22);cprintf("Ê");
  gotoxy(56,6);cprintf("¹");
  gotoxy(56,8);cprintf("¹");
  gotoxy(56,10);cprintf("¹");
  gotoxy(56,12);cprintf("¹");
  gotoxy(56,14);cprintf("¹");
  gotoxy(56,16);cprintf("¹");
  gotoxy(56,18);cprintf("¹");
  gotoxy(56,20);cprintf("¹");
  gotoxy(56,22);cprintf("¼");
  textcolor(8);
  gotoxy(10,21);cprintf(" Offers ");
  gotoxy(10,5);
  textcolor(8);
  cprintf(" Enter New Code ");
  textcolor(8);
  gotoxy(10,7);
  cprintf(" Name ");
  textcolor(8);
  gotoxy(10,9);
  cprintf(" Company name ");
  gotoxy(10,11);
  cprintf(" Batch No.");
  gotoxy(40,13);
  cprintf(" DD / MM / YY ");
  gotoxy(10,13);
  textcolor(8);
  cprintf(" Manuf. Date ");
  gotoxy(10,15);
  textcolor(8);
  cprintf(" Packing ");
  gotoxy(10,17);
  textcolor(8);
  cprintf(" Rate ");
  gotoxy(10,19);
  textcolor(8);
  cprintf(" Stock ");
  read(gn.code,17,28,5);
  for(i=0;i<20;i++)
   {
    if(gn.code[i]==char(27))
    goto end;
   }
  read(gn.it_name,30,18,7);
  for(i=0;i<30;i++)
   {
    if(gn.it_name[i]==char(27))
    goto end;
   }
  read(gn.manuf,30,26,9);
  for(i=0;i<30;i++)
   {
    if(gn.manuf[i]==char(27))
    goto end;
   }
  read(gn.batch,10,22,11);
  for(i=0;i<10;i++)
   {
    if(gn.batch[i]==char(27))
    goto end;
   }
  A:read(dd,2,25,13);
  for(i=0;i<2;i++)
   {
    if(dd[i]==char(27))
    goto end;
   }
  gn.dd = atoi(dd);
  if(gn.dd>31)
  {
   textcolor(15);
   gotoxy(25,13);
   cprintf("-- ");
   goto A;
  }
  B:
  read(mm,2,30,13);
  for(i=0;i<2;i++)
   {
    if(mm[i]==char(27))
    goto end;
   }
  mm[2]='\0';
  gn.mm=atoi(mm);
  if(gn.mm>12)
  {
   textcolor(15);
   gotoxy(30,13);
   cprintf("--");
   goto B;
  }
  if((gn.mm==2) && (gn.dd>29))
  {
   textcolor(15);
   gotoxy(25,13);
   cprintf("--");
   gotoxy(30,13);
   cprintf("--");
   goto A;
  }
  C:
  read(yy,2,35,13);
  for(i=0;i<2;i++)
   {
    if(yy[i]==char(27))
    goto end;
   }
  yy[2]='\0';
  strcpy(gn.yy,yy);
  gn.yyy=atoi(yy);
  struct tm *time_now;
  time_t secs_now;
  char str[4];
  int yy1;
  tzset();
  time(&secs_now);
  time_now = localtime(&secs_now);
  strftime(str, 3,"%y",time_now);
  yy1=atoi(str);
  if(gn.yyy<yy1)
  {
   textcolor(15);
   gotoxy(35,13);
   cprintf("--");
   goto C;
  }
  else
  if((gn.mm==2) && (gn.dd>28) &&(gn.yyy%4!=0))
  {
   textcolor(15);
   gotoxy(25,13);
   cprintf("-- ");
   gotoxy(30,13);
   cprintf("--");
   gotoxy(35,13);
   cprintf("--");
   goto A;
  }
  read(gn.pckg,10,21,15);
  for(i=0;i<10;i++)
   {
    if(gn.pckg[i]==char(27))
    goto end;
   }
  read(rate,8,22,17);
  for(i=0;i<8;i++)
   {
    if(rate[i]==char(27))
    goto end;
   }
  read(stock,3,19,19);
  for(i=0;i<3;i++)
   {
    if(stock[i]==char(27))
    goto end;
   }
   read(gn.free,10,20,21);
  for(i=0;i<10;i++)
   {
    if(gn.free[i]==char(27))
    goto end;
   }
  gn.rate=atof(rate);
  gn.stock=atoi(stock);
  ofstream file;
  count=get_counter3();
  ++count;
  file.open("genstck.stc",ios::in|ios::binary);
  mrec=count;
  offset=((mrec-1)*sizeof(gen));
  file.seekp(offset,ios::beg);
  file.write((char *) & gn, sizeof(gen));
  file.close();
  save_counter3(count);
  nullify1();
  _setcursortype(_NOCURSOR);
  gotoxy(26,24);
  textcolor(15);highvideo();
  cprintf("Press Enter to continue....");
  getch();
  clrscr();
  textcolor(8);
  box(10,70,11,13);
  gotoxy(14,12);
  textcolor(15);
  highvideo();
  cprintf("Want to Enter More Medicines? (Y/N): ");
  ch=getche();
}
 while(ch=='y'||ch=='Y');
 getch();
 end:
 textcolor(15);
}

int check_rec(char *s)
{
 ifstream file;
 file.open("Stock.stc",ios::nocreate|ios::in|ios::out|ios::binary);
 file.seekg(0);
 int ctr=0;
 count=get_counter1();
 Node as;
 while(ctr<=count)
 {
  file.seekg((ctr * sizeof(Node)),ios::beg);
  file.read((char *) & as,sizeof(Node));
  ctr++;
  if(strcmp(as.code,s)==0)
  return ctr;
 }
 file.close();
 return 0;
}

int check_rec2(char *s)
{
 ifstream file;
 file.open("genstck.stc",ios::nocreate|ios::in|ios::out|ios::binary);
 file.seekg(0);
 int ctr=0;
 count=get_counter3();
 gen as;
 while(ctr<=count)
 {
  offset=(ctr * sizeof(gen));
  file.seekg(offset,ios::beg);
  file.read((char *) & as,sizeof(gen));
  ctr++;
  if(strcmp(as.code,s)==0)
  return ctr;
 }
 file.close();
 return 0;
}

void view_file2()
{
 char tem[20];
 clrscr();
 _setcursortype(_NORMALCURSOR);
 gotoxy(20,5);cprintf("Number of Existing Items: %d",get_counter3());
 box(5,76,2,25);
 gotoxy(31,3);cprintf("Enter Item Details");
 gotoxy(25,7);cprintf("Item Code: ");
 read(tem,20,36,7);
 ifstream file;
 mrec=check_rec2(tem);
 file.open("genstck.stc",ios::nocreate|ios::out|ios::binary);
 if(mrec==0)
 {
  _setcursortype(_NOCURSOR);
  clrscr();
  box(20,60,11,13);
  gotoxy(30,12);
  cprintf("Medicine Not Bought!");
  getch();
  goto end;
 }
  offset = ((mrec-1) * sizeof(gen));
  file.seekg(offset,ios::beg);
  file.read((char *) & gn,sizeof(gen));
  file.close();
  _setcursortype(_NOCURSOR);
  textcolor(7);
  box(13,67,10,20);
  textcolor(8);
  gotoxy(26,12);cprintf("Item Name: ");
  gotoxy(26,13);cprintf("Manufacturer: ");
  gotoxy(26,14);cprintf("Batch: ");
  gotoxy(26,15);cprintf("Mf.Date: ");
  gotoxy(36,15);cprintf(" / ");
  gotoxy(41,15);cprintf(" / ");
  gotoxy(26,16);cprintf("Rate: Rs. ");
  gotoxy(26,17);cprintf("Stock: ");
  gotoxy(26,18);cprintf("Offers: ");
  textcolor(15);highvideo();
  gotoxy(37,12);cprintf("%s",gn.it_name);
  gotoxy(40,13);cprintf("%s",gn.manuf);
  gotoxy(33,14);cprintf("%s",gn.batch);
  gotoxy(34,15);cprintf("%d",gn.dd);
  gotoxy(39,15);cprintf("%d",gn.mm);
  gotoxy(44,15);cprintf("%s",gn.yy);
  gotoxy(37,16);cprintf("%f",gn.rate);
  gotoxy(33,17);cprintf("%d",gn.stock);
  gotoxy(34,18);cprintf("%s",gn.free);
  if(gn.stock==0)
  {
  textcolor(15);
  textbackground(1);
  box(58,71,20,22);
  gotoxy(58,21);
  cprintf(" Stock Over! ");
  getch();
  textcolor(15);
  textbackground(0);
  gotoxy(57,20);
  cprintf("                 ");
  gotoxy(57,21);
  cprintf("                 ");
  gotoxy(57,22);
  cprintf("                 ");
  _setcursortype(_NOCURSOR);
  textcolor(15);
  textbackground(0);
 }
 file.close();
 nullify1();
 gotoxy(26,22);
 textcolor(8);
 _setcursortype(_NOCURSOR);
 cprintf("Press Enter to continue....");
 getch();
 end:
}

void view_file()
{
 char tem[20];
 clrscr();
 _setcursortype(_NORMALCURSOR);
 gotoxy(20,5);cprintf("Number of Existing Medicines: %d",get_counter1());
 box(5,76,2,25);
 gotoxy(29,3);
 cout<<"Enter Medicine Details";
 gotoxy(25,7);
 cout<<"Medicine Code: ";
 read(tem,20,40,7);
 ifstream file;
 mrec=check_rec(tem);
 file.open("Stock.stc",ios::nocreate|ios::out|ios::binary);
 if(mrec==0)
 {
  _setcursortype(_NOCURSOR);
  clrscr();
  box(20,60,11,13);
  gotoxy(30,12);
  cprintf("Medicine Not Bought!");
  getch();
  goto end;
 }
  offset = ((mrec-1) * sizeof(Node));
  file.seekg(offset,ios::beg);
  file.read((char *) & start,sizeof(Node));
  file.close();
  _setcursortype(_NOCURSOR);
  textcolor(8);
  box(13,67,10,19);
  textcolor(7);
  gotoxy(26,12);cprintf("Medicine Name: ");
  textcolor(15);
  gotoxy(41,12);cprintf("%s",start.med_name);
  textcolor(7);
  gotoxy(26,13);cprintf("Manufacturer: ");
  textcolor(15);
  gotoxy(40,13);cprintf("%s",start.manuf);
  textcolor(7);
  gotoxy(26,14);cprintf("Batch: ");
  textcolor(15);
  gotoxy(33,14);cprintf("%s",start.batch);
  textcolor(7);
  gotoxy(26,15);cprintf("Expiry: ");
  textcolor(15);
  gotoxy(34,15);cprintf("%d",start.dd);
  textcolor(7);
  gotoxy(36,15);cprintf(" / ");
  textcolor(15);
  gotoxy(39,15);cprintf("%d",start.mm);
  textcolor(7);
  gotoxy(41,15);cprintf(" / ");
  textcolor(15);
  gotoxy(44,15);cprintf("%d",start.yy);
  textcolor(7);
  gotoxy(26,16);cprintf("Rate: Rs. ");
  textcolor(15);
  gotoxy(37,16);cprintf("%f",start.rate);
  textcolor(7);
  gotoxy(26,17);cprintf("Stock: ");
  textcolor(15);
  gotoxy(33,17);cprintf("%d",start.stock);
  if(start.stock==0)
 {
  textcolor(15);
  textbackground(1);
  box(58,71,20,22);
  gotoxy(58,21);
  cprintf(" Stock Over! ");
  getch();
  textcolor(15);
  textbackground(0);
  gotoxy(57,20);
  cprintf("                 ");
  gotoxy(57,21);
  cprintf("                 ");
  gotoxy(57,22);
  cprintf("                 ");
  _setcursortype(_NOCURSOR);
  textcolor(15);
  textbackground(0);
 }
 file.close();
 nullify1();
 gotoxy(26,22);
 textcolor(8);
 _setcursortype(_NOCURSOR);
 cprintf("Press Enter to continue....");
 getch();
 end:
}

void bills()
{
 nullify2();
 nullify1();
 char tem1[10],tem[10],tem3[10],tem4[10],tem5[10],tem2[10],temp[20];
 char b1[10],b2[10],b3[10],b4[10],b5[10],code[20];
 char cat1[10],cat2[10],cat3[10],cat4[10],cat5[10];
 char inv[10],mm[2],dd[2],yy[3],qtt[2];
 float rate[10],cost[10],tot=0;
 int qt1,qt,qt2,qt3,qt4,qt5;
 char ch1[2];
 int ch;
 End:clrscr();
 box(20,63,7,9);
 gotoxy(22,8);
 cprintf("Existing No. of Bills: %d",get_counter2()-1);
 box(18,66,11,13);
 AS:gotoxy(21,12);
 cout<<"Number of Medicines Purchased (max 5):    ";
 read(ch1,2,60,12,10,22);
  for(int i=0;i<2;i++)
   {
    if(ch1[i]==char(27))
    goto End;
   }
 ch=atoi(ch1);
 if (ch>5)goto AS;
 gotoxy(25,19);cprintf("( DD / MM / YY )");
 box(20,63,15,17);
 gotoxy(21,16);cprintf("Date:    /    /     ");
 A:read(dd,2,27,16,10,22);
  for(i=0;i<2;i++)
   {
    if(dd[i]==char(27))
    goto End;
   }
  bill.dd=0;
  bill.dd = atoi(dd);
  if(bill.dd>31)
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("-- ");
   goto A;
  }
  B:
  read(mm,2,32,16,10,22);
  for(i=0;i<2;i++)
   {
    if(mm[i]==char(27))
    goto End;
   }
  bill.mm=atoi(mm);
  if(bill.mm>12)
  {
   textcolor(15);
   gotoxy(32,16);
   cprintf("--");
   goto B;
  }
  if((bill.mm==2) && (bill.dd>29))
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("--");
   gotoxy(32,16);
   cprintf("--");
   goto A;
  }
  C:
  read(yy,2,37,16,10,22);
  for(i=0;i<2;i++)
   {
    if(yy[i]==char(27))
    goto End;
   }
  yy[2]='\0';
  bill.yy=atoi(yy);
  strcpy(bill.yyy,yy);
  struct tm *time_now;
  time_t secs_now;
  char str[4];
  int yy1;
  tzset();
  time(&secs_now);
  time_now = localtime(&secs_now);
  strftime(str, 2,"%y",time_now);
  yy1=atoi(str);
  if(bill.yy<yy1)
  {
   textcolor(15);
   gotoxy(37,16);
   cprintf("--");
   goto C;
  }
  else
  if((bill.mm==2) && (bill.dd>28) &&(bill.yy%4!=0))
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("--");
   gotoxy(32,16);
   cprintf("--");
   gotoxy(37,16);cprintf("--");
   goto A;
  }
 for (i=0;i<ch;i++)
 {
  end:clrscr();
  beg:clrscr();
  box(5,75,2,25);
  gotoxy(35,3);
  lowvideo();
  cprintf("INVENTORY");
  gotoxy(25,5);
  highvideo();
  cprintf("Medicine Code: ");
  read(code,20,40,5,58,19);
  ifstream file1;
  mrec=check_rec(code);
  file1.open("Stock.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  if(mrec==0)
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   gotoxy(49,21);
   cprintf(" Medicine Not Bought! ");
   box(49,71,20,22);
   getch();
   gotoxy(49,20);
   cprintf("                      ");
   gotoxy(49,21);
   cprintf("                      ");
   gotoxy(49,22);
   cprintf("                      ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto end;
  }
  offset=(mrec-1)*sizeof(Node);
  file1.seekg(offset,ios::beg);
  box(15,65,10,20);
  file1.read((char *) & start,sizeof(Node));
  file1.close();
  if(start.stock==0)
  {
   textcolor(15);
   textbackground(1);
   box(58,71,20,22);
   gotoxy(58,21);
   cprintf(" Stock Over! ");
   getch();
   gotoxy(56,20);
   cprintf("                  ");
   gotoxy(56,21);
   cprintf("                  ");
   gotoxy(56,22);
   cprintf("                  ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto beg;
  }
  strcpy(tem,start.med_name);
  gotoxy(16,12);
  highvideo();
  cprintf("Medecine Name: %s",start.med_name);
  gotoxy(16,13);
  highvideo();
  cprintf("Batch: %s",start.batch);
  gotoxy(16,14);
  highvideo();
  cprintf("Expiry: %d",start.dd);
  gotoxy(26,14);
  highvideo();
  cprintf(" / %d",start.mm);
  gotoxy(31,14);
  highvideo();
  cprintf(" / %d",start.yy);
  gotoxy(16,15);
  highvideo();
  cprintf("Stock: %d",start.stock);
  gotoxy(27,15);
  cprintf("Pckg.: %s",start.cat);
  gotoxy(16,16);
  highvideo();
  cprintf("Rate: Rs. %f",start.rate);
  asd:
  gotoxy(32,17);
  cout<<"       ";char qtt[4];
  gotoxy(16,17);
  cprintf("Qty.: ");
  read(qtt,3,22,17);
  qt=atoi(qtt);
  if(qt>start.stock)goto asd;
  rate[i]=start.rate;
  cost[i]=(rate[i]+(rate[i]*(0.06)))*qt;
  gotoxy(16,18);
  cprintf("Cost: %f",cost[i]);
  if(qt>start.stock)goto asd;
  gotoxy(26,22);cprintf("Press Enter to continue....");
  getch();
  strcpy(bill.inv,inv);
  bill.ch=ch;
  if(i==0)
  {
   qt1=qt;
   bill.qt1=qt;
   strcpy(cat1,start.cat);
   strcpy(tem1,start.med_name);
   strcpy(b1,start.batch);
   strcpy(bill.cat1,start.cat);
   strcpy(bill.tem1,start.med_name);
   strcpy(bill.b1,start.batch);
  }
  else
  if(i==1)
  {
   qt2=qt;
   strcpy(cat2,start.cat);
   strcpy(tem2,start.med_name);
   strcpy(b2,start.batch);
   bill.qt2=qt;
   strcpy(bill.cat2,start.cat);
   strcpy(bill.tem2,start.med_name);
   strcpy(bill.b2,start.batch);
  }
  else
  if(i==2)
  {
   qt3=qt;
   strcpy(cat3,start.cat);
   strcpy(tem3,start.med_name);
   strcpy(b3,start.batch);
   bill.qt3=qt;
   strcpy(bill.cat3,start.cat);
   strcpy(bill.tem3,start.med_name);
   strcpy(bill.b3,start.batch);
  }
  else
  if(i==3)
  {
   qt4=qt;
   strcpy(cat4,start.cat);
   strcpy(tem4,start.med_name);
   strcpy(b4,start.batch);
   bill.qt4=qt;
   strcpy(bill.cat4,start.cat);
   strcpy(bill.tem4,start.med_name);
   strcpy(bill.b4,start.batch);
  }
  else
  if(i==4)
  {
   qt5=qt;
   strcpy(cat5,start.cat);
   strcpy(tem5,start.med_name);
   strcpy(b5,start.batch);
   bill.qt5=qt;
   strcpy(bill.cat5,start.cat);
   strcpy(bill.tem5,start.med_name);
   strcpy(bill.b5,start.batch);
  }
  start.stock = start.stock-qt;
  file1.close();
  ofstream file2;
  file2.open("Stock.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  file2.seekp(offset,ios::beg);
  file2.write((char *) & start, sizeof(Node));
  file2.close();
  //nullify2();
  nullify1();
 bill.rate[i]=rate[i];
 bill.cost[i]=cost[i];
 tot=tot+cost[i];
 bill.tot=tot;
}
 count=get_counter2();
 ++count;
 ofstream fout;
 mrec=count;
 offset=(mrec-1)*sizeof(Inv);
 fout.open("Bills.stc",ios::in|ios::binary);
 fout.seekp(offset,ios::beg);
 fout.write((char *) & bill,sizeof(Inv));
 fout.close();
 save_counter2(count);
 clrscr();
 box(5,75,2,25);

 gotoxy(35,3);cprintf("INVENTORY");
 gotoxy(8,5);cprintf("Invoice No.: %d",get_counter2()-1);
 gotoxy(53,5);cprintf("Date: %d",atoi(dd));
 gotoxy(61,5);cprintf(" / %d",atoi(mm));
 gotoxy(66,5);cprintf(" / %s",yy);
 gotoxy(8,7);cprintf("Particulars");
 gotoxy(24,7);cprintf("Qty.");
 gotoxy(35,7);cprintf("Batch No.");
 gotoxy(47,7);cprintf("Rate");
 gotoxy(61,7);cprintf("Cost");
 gotoxy(48,17);cprintf("Total");

 for(int a=6;a<74;a++)
 {
  gotoxy(a,8);cprintf("Ä");
  gotoxy(a,6);cprintf("Ä");
  gotoxy(a,16);cprintf("Ä");
  gotoxy(a,18);cprintf("Ä");
 }
 if(ch==1)
 {
  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(35,9);cprintf("%s",b1);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,17);cprintf("  Rs. %f",tot);
  }
 }
 else if (ch==2)
 {
  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(35,9);cprintf("%s",b1);
   gotoxy(35,10);cprintf("%s",b2);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,17);cprintf("  Rs. %f",tot);
  }
 }
  else if (ch==3)
 {
  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(35,9);cprintf("%s",b1);
   gotoxy(35,10);cprintf("%s",b2);
   gotoxy(35,11);cprintf("%s",b3);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,17);cprintf("  Rs. %f",tot);
  }
 }
  else if (ch==4)
 {
  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(22,12);cprintf(" %d",qt4);
   gotoxy(25,12);cprintf(" X %s",cat4);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(8,12);cprintf("%s",tem4);
   gotoxy(35,9);cprintf("%s",b1);
   gotoxy(35,10);cprintf("%s",b2);
   gotoxy(35,11);cprintf("%s",b3);
   gotoxy(35,12);cprintf("%s",b4);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(45,12);cprintf("Rs. %f",rate[3]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",cost[3]);
   gotoxy(56,17);cprintf("  Rs. %f",tot);
  }
 }
  else if (ch==5)
 {

  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(22,12);cprintf(" %d",qt4);
   gotoxy(25,12);cprintf(" X %s",cat4);
   gotoxy(22,13);cprintf(" %d",qt5);
   gotoxy(25,13);cprintf(" X %s",cat5);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(8,12);cprintf("%s",tem4);
   gotoxy(8,13);cprintf("%s",tem5);
   gotoxy(35,9);cprintf("%s",b1);
   gotoxy(35,10);cprintf("%s",b2);
   gotoxy(35,11);cprintf("%s",b3);
   gotoxy(35,12);cprintf("%s",b4);
   gotoxy(35,13);cprintf("%s",b5);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(45,12);cprintf("Rs. %f",rate[3]);
   gotoxy(45,13);cprintf("Rs. %f",rate[4]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",cost[3]);
   gotoxy(56,13);cprintf("  Rs. %f",cost[4]);
   gotoxy(56,17);cprintf("  Rs. %f",tot);
  }
 }
 _setcursortype(_NOCURSOR);
 gotoxy(26,22);cprintf("Press Enter to continue....");
 getch();
}

void bills2()
{
 nullify3();
 nullify4();
 clrscr();
 char tem1[10],tem[10],tem3[10],tem4[10],tem5[10],tem2[10],temp[20];
 char b1[10],b2[10],b3[10],b4[10],b5[10],code[20];
 char cat1[10],cat2[10],cat3[10],cat4[10],cat5[10],fr4[8],fr5[8];
 char inv[10],mm[2],dd[2],yy[3],qtt[2],fr1[8],fr2[8],fr3[8];
 float rate[10],cost[10],tot;
 int qt1,qt,qt2,qt3,qt4,qt5;
 char ch1[2];
 int ch;
 End:clrscr();
 box(20,63,7,9);
 gotoxy(22,8);
 cprintf("Existing No. of Bills: %d",get_counter4()-1);
 box(18,66,11,13);
 AS:gotoxy(21,12);
 cout<<"Number of Medicines Purchased (max 5):    ";
 read(ch1,2,60,12,10,22);
  for(int i=0;i<2;i++)
   {
    if(ch1[i]==char(27))
    goto End;
   }
 ch=atoi(ch1);
 if (ch>5)goto AS;
 gotoxy(25,19);cprintf("( DD / MM / YY )");
 box(20,63,15,17);
 gotoxy(21,16);cprintf("Date:    /    /     ");
 A:read(dd,2,27,16,10,22);
  for(i=0;i<2;i++)
   {
    if(dd[i]==char(27))
    goto End;
   }
  bll.dd=0;
  bll.dd = atoi(dd);
  if(bll.dd>31)
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("-- ");
   goto A;
  }
  B:
  read(mm,2,32,16,10,22);
  for(i=0;i<2;i++)
   {
    if(mm[i]==char(27))
    goto End;
   }
  bll.mm=atoi(mm);
  if(bll.mm>12)
  {
   textcolor(15);
   gotoxy(32,16);
   cprintf("--");
   goto B;
  }
  if((bll.mm==2) && (bll.dd>29))
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("--");
   gotoxy(32,16);
   cprintf("--");
   goto A;
  }
  C:
  read(yy,2,37,16,10,22);
  for(i=0;i<2;i++)
   {
    if(yy[i]==char(27))
    goto End;
   }
  yy[2]='\0';
  bll.yyy=atoi(yy);
  strcpy(bll.yy,yy);
  struct tm *time_now;
  time_t secs_now;
  char str[4];
  int yy1;
  tzset();
  time(&secs_now);
  time_now = localtime(&secs_now);
  strftime(str, 2,"%y",time_now);
  yy1=atoi(str);
  if(bll.yyy<yy1)
  {
   textcolor(15);
   gotoxy(37,16);
   cprintf("--");
   goto C;
  }
  else
  if((bll.mm==2) && (bll.dd>28) &&(bll.yyy%4!=0))
  {
   textcolor(15);
   gotoxy(27,16);
   cprintf("--");
   gotoxy(32,16);
   cprintf("--");
   gotoxy(37,16);cprintf("--");
   goto A;
  }
 for(int j=0;j<6;j++)
 bll.cost[i]=0;
 for (i=0;i<ch;i++)
 {
  end:clrscr();
  beg:clrscr();
  box(5,75,2,25);
  gotoxy(35,3);
  lowvideo();
  cprintf("INVENTORY");
  highvideo();
  gotoxy(25,5);cprintf("Item Code: ");
  read(code,20,36,5,58,19);
  ifstream file1;
  mrec=check_rec2(code);
  file1.open("genstck.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  if(mrec==0)
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   gotoxy(49,21);
   cprintf(" Medicine Not Bought! ");
   box(49,71,20,22);
   getch();
   gotoxy(49,20);
   cprintf("                      ");
   gotoxy(49,21);
   cprintf("                      ");
   gotoxy(49,22);
   cprintf("                      ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto end;
  }
  offset=(mrec-1)*sizeof(gen);
  file1.seekg(offset,ios::beg);
  file1.read((char *) & gn,sizeof(gen));
  file1.close();
  if(gn.stock==0)
  {
   textcolor(15);
   textbackground(1);
   box(58,71,20,22);
   gotoxy(58,21);
   cprintf(" Stock Over! ");
   getch();
   gotoxy(56,20);
   cprintf("                  ");
   gotoxy(56,21);
   cprintf("                  ");
   gotoxy(56,22);
   cprintf("                  ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto beg;
  }
  box(15,65,10,20);highvideo();
  gotoxy(16,12);cprintf("Medecine Name: %s",gn.it_name);
  gotoxy(16,13);cprintf("Batch: %s",gn.batch);
  gotoxy(16,14);cprintf("Expiry: %d",gn.dd);
  gotoxy(26,14);cprintf(" / %d",gn.mm);
  gotoxy(31,14);cprintf(" / %d",gn.yy);
  gotoxy(16,15);cprintf("Stock: %d",gn.stock);
  gotoxy(30,15);cprintf("Pckg.: %s",gn.pckg);
  gotoxy(16,16);cprintf("Rate: Rs. %f",gn.rate);
  asd:
  gotoxy(22,17);cprintf("       ");
  gotoxy(16,17);cprintf("Qty.: ");
  read(qtt,2,22,17);
  if(atoi(qtt)>gn.stock)goto asd;
  bll.rate[i]=gn.rate;
  rate[i]=gn.rate;
  bll.cost[i]=bll.rate[i]*atoi(qtt);
  cost[i]=bll.cost[i];
  gotoxy(16,18);cprintf("Cost: %f",bll.cost[i]);
  _setcursortype(_NOCURSOR);
  gotoxy(26,22);cprintf("Press Enter to continue....");
  getch();
  strcpy(bll.inv,inv);
  bll.ch=ch;
  if(i==0)
  {
   strcpy(cat1,gn.pckg);
   strcpy(tem1,gn.it_name);
   strcpy(b1,gn.batch);
   bll.qt1=atoi(qtt);
   strcpy(bll.pkg1,gn.pckg);
   strcpy(bll.tem1,gn.it_name);
   strcpy(bll.fr1,gn.free);
   strcpy(fr1,gn.free);
  }
  else
  if(i==1)
  {
   strcpy(cat2,gn.pckg);
   strcpy(tem2,gn.it_name);
   strcpy(b2,gn.batch);
   bll.qt2=atoi(qtt);
   strcpy(bll.pkg2,gn.pckg);
   strcpy(bll.tem2,gn.it_name);
   strcpy(bll.fr2,gn.free);
   strcpy(fr2,gn.free);
  }
  else
  if(i==2)
  {
   strcpy(cat3,gn.pckg);
   strcpy(tem3,gn.it_name);
   strcpy(b3,gn.batch);
   bll.qt3=atoi(qtt);
   strcpy(bll.pkg3,gn.pckg);
   strcpy(bll.tem3,gn.it_name);
   strcpy(bll.fr3,gn.free);
   strcpy(fr3,gn.free);
  }
  else
  if(i==3)
  {
   strcpy(cat4,gn.pckg);
   strcpy(tem4,gn.it_name);
   strcpy(b4,gn.batch);
   bll.qt4=atoi(qtt);
   strcpy(bll.pkg4,gn.pckg);
   strcpy(bll.tem4,gn.it_name);
   strcpy(bll.fr4,gn.free);
   strcpy(fr4,gn.free);
  }
  else
  if(i==4)
  {
   strcpy(cat5,gn.pckg);
   strcpy(tem5,gn.it_name);
   strcpy(b5,gn.batch);
   bll.qt5=atoi(qtt);
   strcpy(bll.pkg5,gn.pckg);
   strcpy(bll.tem5,gn.it_name);
   strcpy(bll.fr5,gn.free);
   strcpy(fr5,gn.free);
  }
  gn.stock = gn.stock-atoi(qtt);
  ofstream file2;
  file2.open("genstck.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  file2.seekp(offset,ios::beg);
  file2.write((char *) & gn, sizeof(gen));
  file2.close();
  nullify2();
  nullify1();
  bll.tot=bll.tot+bll.cost[i];
  nullify4();
}
 count=get_counter4();
 ++count;
 ofstream fout;
 mrec=count;
 offset=(mrec-1)*sizeof(gen_Inv);
 fout.open("Bills2.stc",ios::in|ios::binary);
 fout.seekp(offset,ios::beg);
 fout.write((char *) & bll,sizeof(gen_Inv));
 fout.close();
 save_counter4(count);
 clrscr();
 box(5,75,2,25);

 gotoxy(35,3);cprintf("INVENTORY");
 gotoxy(8,5);cprintf("Invoice No.: %d",get_counter4()-1);
 gotoxy(53,5);cprintf("Date: %d",atoi(dd));
 gotoxy(61,5);cprintf(" / %d",atoi(mm));
 gotoxy(66,5);cprintf(" / %s",yy);
 gotoxy(8,7);cprintf("Particulars");
 gotoxy(24,7);cprintf("Qty.");
 gotoxy(35,7);cprintf("Offers");
 gotoxy(47,7);cprintf("Rate");
 gotoxy(61,7);cprintf("Cost");
 gotoxy(48,17);cprintf("Total");

 for(int a=6;a<74;a++)
 {
  gotoxy(a,8);cprintf("Ä");
  gotoxy(a,6);cprintf("Ä");
  gotoxy(a,16);cprintf("Ä");
  gotoxy(a,18);cprintf("Ä");
 }
 if(ch==1)
 {
  {
   gotoxy(22,9);cprintf(" %d",qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(35,9);cprintf("%s",fr1);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
 else if (ch==2)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(35,9);cprintf("%s",fr1);
   gotoxy(35,10);cprintf("%s",fr2);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
  else if (ch==3)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(35,9);cprintf("%s",fr1);
   gotoxy(35,10);cprintf("%s",fr2);
   gotoxy(35,11);cprintf("%s",fr3);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
  else if (ch==4)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(22,12);cprintf(" %d",bll.qt4);
   gotoxy(25,12);cprintf(" X %s",cat4);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(8,12);cprintf("%s",tem4);
   gotoxy(35,9);cprintf("%s",fr1);
   gotoxy(35,10);cprintf("%s",fr2);
   gotoxy(35,11);cprintf("%s",fr3);
   gotoxy(35,12);cprintf("%s",fr4);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(45,12);cprintf("Rs. %f",rate[3]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",cost[3]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
  else if (ch==5)
 {

  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",cat1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",cat2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",cat3);
   gotoxy(22,12);cprintf(" %d",bll.qt4);
   gotoxy(25,12);cprintf(" X %s",cat4);
   gotoxy(22,13);cprintf(" %d",bll.qt5);
   gotoxy(25,13);cprintf(" X %s",cat5);
   gotoxy(8,9);cprintf("%s",tem1);
   gotoxy(8,10);cprintf("%s",tem2);
   gotoxy(8,11);cprintf("%s",tem3);
   gotoxy(8,12);cprintf("%s",tem4);
   gotoxy(8,13);cprintf("%s",tem5);
   gotoxy(35,9);cprintf("%s",fr1);
   gotoxy(35,10);cprintf("%s",fr2);
   gotoxy(35,11);cprintf("%s",fr3);
   gotoxy(35,12);cprintf("%s",fr4);
   gotoxy(35,13);cprintf("%s",fr5);
   gotoxy(45,9);cprintf("Rs. %f",rate[0]);
   gotoxy(45,10);cprintf("Rs. %f",rate[1]);
   gotoxy(45,11);cprintf("Rs. %f",rate[2]);
   gotoxy(45,12);cprintf("Rs. %f",rate[3]);
   gotoxy(45,13);cprintf("Rs. %f",rate[4]);
   gotoxy(56,9);cprintf("  Rs. %f",cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",cost[3]);
   gotoxy(56,13);cprintf("  Rs. %f",cost[4]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
 _setcursortype(_NOCURSOR);
 gotoxy(26,22);cprintf("Press Enter to continue....");
 getch();
}

void invoice()
{
 int inv,tem;
 char in[4];
 nullify2();
 ifstream file;
 file.open("Bills.stc",ios::nocreate|ios::binary|ios::out);
 tem=get_counter2()-1;
 end:clrscr();
 box(20,62,14,16);
 gotoxy(22,15);
 if(tem<0)
 cprintf("Current No. of Invoices: %d",tem+1);
 else
 cprintf("Current No. of Invoices: %d",tem);
 box(20,62,11,13);
 gotoxy(21,12);cprintf("Enter Invoice No.: ");
 read(in,4,40,12);
 inv=atoi(in);
 clrscr();
 if(inv>get_counter2())
 goto end;
 else
 if(inv<0)
 {
  _setcursortype(_NOCURSOR);
  textcolor(15);
  textbackground(1);
  box(57,72,20,22);
  gotoxy(57,21);
  cprintf(" INVALID ENTRY ");
  getch();
  gotoxy(56,20);
  cprintf("                     ");
  gotoxy(56,21);
  cprintf("                     ");
  gotoxy(56,22);
  cprintf("                     ");
  _setcursortype(_NORMALCURSOR);
  textcolor(15);
  textbackground(0);
  goto end;
 }
 mrec=inv;
 if(mrec==0)
  {
   clrscr();
   _setcursortype(_NOCURSOR);
   box(20,60,11,13);
   gotoxy(30,12);cprintf("Bill Does Not Exist!");
   getch();
   _setcursortype(_NORMALCURSOR);
   goto end;
  }
 nullify2();
 offset = (mrec)*sizeof(Inv);
 file.seekg(offset,ios::beg);
 file.read((char *) & bill,sizeof(Inv));
 file.close();
 clrscr();
 box(5,75,2,25);

 gotoxy(35,3);cprintf("INVENTORY");
 gotoxy(8,5);cprintf("Invoice No.: %d",inv);
 gotoxy(53,5);cprintf("Date: %d",bill.dd);
 gotoxy(61,5);cprintf(" / %d",bill.mm);
 gotoxy(66,5);cprintf(" / %s",bill.yyy);
 gotoxy(8,7);cprintf("Particulars");
 gotoxy(24,7);cprintf("Qty.");
 gotoxy(35,7);cprintf("Batch No.");
 gotoxy(47,7);cprintf("Rate");
 gotoxy(61,7);cprintf("Cost");
 gotoxy(48,17);cprintf("Total");

 for(int a=6;a<74;a++)
 {
  gotoxy(a,8);cprintf("Ä");
  gotoxy(a,6);cprintf("Ä");
  gotoxy(a,16);cprintf("Ä");
  gotoxy(a,18);cprintf("Ä");
 }
 if(bill.ch==1)
 {
  {
   gotoxy(22,9);cprintf(" %d",bill.qt1);
   gotoxy(25,9);cprintf(" X %s",bill.cat1);
   gotoxy(8,9);cprintf("%s",bill.tem1);
   gotoxy(35,9);cprintf("%s",bill.b1);
   gotoxy(44,9);cprintf("Rs. %f",bill.rate[0]);
   gotoxy(56,9);cprintf("  Rs. %f",bill.cost[0]);
   gotoxy(56,17);cprintf("  Rs. %f",bill.tot);
  }
 }
 else if (bill.ch==2)
 {
  {
   gotoxy(22,9);cprintf(" %d",bill.qt1);
   gotoxy(25,9);cprintf(" X %s",bill.cat1);
   gotoxy(22,10);cprintf(" %d",bill.qt2);
   gotoxy(25,10);cprintf(" X %s",bill.cat2);
   gotoxy(8,9);cprintf("%s",bill.tem1);
   gotoxy(8,10);cprintf("%s",bill.tem2);
   gotoxy(35,9);cprintf("%s",bill.b1);
   gotoxy(35,10);cprintf("%s",bill.b2);
   gotoxy(44,9);cprintf("Rs. %f",bill.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bill.rate[1]);
   gotoxy(56,9);cprintf("  Rs. %f",bill.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bill.cost[1]);
   gotoxy(56,17);cprintf("  Rs. %f",bill.tot);
  }
 }
  else if (bill.ch==3)
 {
  {
   gotoxy(22,9);cprintf(" %d",bill.qt1);
   gotoxy(25,9);cprintf(" X %s",bill.cat1);
   gotoxy(22,10);cprintf(" %d",bill.qt2);
   gotoxy(25,10);cprintf(" X %s",bill.cat2);
   gotoxy(22,11);cprintf(" %d",bill.qt3);
   gotoxy(25,11);cprintf(" X %s",bill.cat3);
   gotoxy(8,9);cprintf("%s",bill.tem1);
   gotoxy(8,10);cprintf("%s",bill.tem2);
   gotoxy(8,11);cprintf("%s",bill.tem3);
   gotoxy(35,9);cprintf("%s",bill.b1);
   gotoxy(35,10);cprintf("%s",bill.b2);
   gotoxy(35,11);cprintf("%s",bill.b3);
   gotoxy(44,9);cprintf("Rs. %f",bill.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bill.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bill.rate[2]);
   gotoxy(56,9);cprintf("  Rs. %f",bill.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bill.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bill.cost[2]);
   gotoxy(56,17);cprintf("  Rs. %f",bill.tot);
  }
 }
  else if (bill.ch==4)
 {
  {
   gotoxy(22,9);cprintf(" %d",bill.qt1);
   gotoxy(25,9);cprintf(" X %s",bill.cat1);
   gotoxy(22,10);cprintf(" %d",bill.qt2);
   gotoxy(25,10);cprintf(" X %s",bill.cat2);
   gotoxy(22,11);cprintf(" %d",bill.qt3);
   gotoxy(25,11);cprintf(" X %s",bill.cat3);
   gotoxy(22,12);cprintf(" %d",bill.qt4);
   gotoxy(25,12);cprintf(" X %s",bill.cat4);
   gotoxy(8,9);cprintf("%s",bill.tem1);
   gotoxy(8,10);cprintf("%s",bill.tem2);
   gotoxy(8,11);cprintf("%s",bill.tem3);
   gotoxy(8,12);cprintf("%s",bill.tem4);
   gotoxy(35,9);cprintf("%s",bill.b1);
   gotoxy(35,10);cprintf("%s",bill.b2);
   gotoxy(35,11);cprintf("%s",bill.b3);
   gotoxy(35,12);cprintf("%s",bill.b4);
   gotoxy(44,9);cprintf("Rs. %f",bill.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bill.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bill.rate[2]);
   gotoxy(44,12);cprintf("Rs. %f",bill.rate[3]);
   gotoxy(56,9);cprintf("  Rs. %f",bill.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bill.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bill.cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",bill.cost[3]);
   gotoxy(56,17);cprintf("Rs. %f",bill.tot);
  }
 }
  else if (bill.ch==5)
 {

  {
   gotoxy(22,9);cprintf(" %d",bill.qt1);
   gotoxy(25,9);cprintf(" X %s",bill.cat1);
   gotoxy(22,10);cprintf(" %d",bill.qt2);
   gotoxy(25,10);cprintf(" X %s",bill.cat2);
   gotoxy(22,11);cprintf(" %d",bill.qt3);
   gotoxy(25,11);cprintf(" X %s",bill.cat3);
   gotoxy(22,12);cprintf(" %d",bill.qt4);
   gotoxy(25,12);cprintf(" X %s",bill.cat4);
   gotoxy(22,13);cprintf(" %d",bill.qt5);
   gotoxy(25,13);cprintf(" X %s",bill.cat5);
   gotoxy(8,9);cprintf("%s",bill.tem1);
   gotoxy(8,10);cprintf("%s",bill.tem2);
   gotoxy(8,11);cprintf("%s",bill.tem3);
   gotoxy(8,12);cprintf("%s",bill.tem4);
   gotoxy(8,13);cprintf("%s",bill.tem5);
   gotoxy(35,9);cprintf("%s",bill.b1);
   gotoxy(35,10);cprintf("%s",bill.b2);
   gotoxy(35,11);cprintf("%s",bill.b3);
   gotoxy(35,12);cprintf("%s",bill.b4);
   gotoxy(35,13);cprintf("%s",bill.b5);
   gotoxy(44,9);cprintf("Rs. %f",bill.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bill.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bill.rate[2]);
   gotoxy(44,12);cprintf("Rs. %f",bill.rate[3]);
   gotoxy(44,13);cprintf("Rs. %f",bill.rate[4]);
   gotoxy(56,9);cprintf("  Rs. %f",bill.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bill.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bill.cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",bill.cost[3]);
   gotoxy(56,13);cprintf("  Rs. %f",bill.cost[4]);
   gotoxy(56,17);cprintf("  Rs. %f",bill.tot);
  }
 }
 _setcursortype(_NOCURSOR);
 gotoxy(26,22);
 textcolor(15);
 highvideo();
 cprintf("Press Enter to continue....");
 getch();
 file.close();
 A:
}

void invoice2()
{
 int inv,tem;
 char in[5];
 nullify2();
 ifstream file;
 file.open("Bills2.stc",ios::nocreate|ios::binary|ios::out);
 tem=get_counter4()-1;
 end:clrscr();
 box(20,62,14,16);
 gotoxy(22,15);
 if(tem<0)
 cprintf("Current No. of Invoices: %d",tem+1);
 else
 cprintf("Current No. of Invoices: %d",tem);
 box(20,62,11,13);
 gotoxy(21,12);cprintf("Enter Invoice No.: ");
 read(in,4,40,12);in[4]='\0';
 inv=atoi(in);
 clrscr();
 if(inv>get_counter4())
 goto end;
 else
 if(inv<0)
 {
  _setcursortype(_NOCURSOR);
  textcolor(15);
  textbackground(1);
  box(57,72,20,22);
  gotoxy(57,21);
  cprintf(" INVALID ENTRY ");
  getch();
  gotoxy(56,20);
  cprintf("                     ");
  gotoxy(56,21);
  cprintf("                     ");
  gotoxy(56,22);
  cprintf("                     ");
  _setcursortype(_NORMALCURSOR);
  textcolor(15);
  textbackground(0);
  goto end;
 }
 mrec=inv;
 if(mrec==0)
  {
   clrscr();
   _setcursortype(_NOCURSOR);
   box(20,60,11,13);
   gotoxy(30,12);cprintf("Bill Does Not Exist!");
   getch();
   _setcursortype(_NORMALCURSOR);
   goto end;
  }
 offset = (mrec)*sizeof(Inv);
 file.seekg(offset,ios::beg);
 file.read((char *) & bll,sizeof(gen_Inv));
 file.close();
 clrscr();
 box(5,75,2,25);

 gotoxy(35,3);cprintf("INVENTORY");
 gotoxy(8,5);cprintf("Invoice No.: %s",in);
 gotoxy(53,5);cprintf("Date: %d",bll.dd);
 gotoxy(61,5);cprintf(" / %d",bll.mm);
 gotoxy(66,5);cprintf(" / %s",bll.yy);
 gotoxy(8,7);cprintf("Particulars");
 gotoxy(24,7);cprintf("Qty.");
 gotoxy(35,7);cprintf("Offers");
 gotoxy(47,7);cprintf("Rate");
 gotoxy(61,7);cprintf("Cost");
 gotoxy(48,17);cprintf("Total");

 for(int a=6;a<74;a++)
 {
  gotoxy(a,8);cprintf("Ä");
  gotoxy(a,6);cprintf("Ä");
  gotoxy(a,16);cprintf("Ä");
  gotoxy(a,18);cprintf("Ä");
 }
 if(bll.ch==1)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",bll.pkg1);
   gotoxy(8,9);cprintf("%s",bll.tem1);
   gotoxy(35,9);cprintf("%s",bll.fr1);
   gotoxy(44,9);cprintf("Rs. %f",bll.rate[0]);
   gotoxy(56,9);cprintf("  Rs. %f",bll.cost[0]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
 else if (bll.ch==2)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",bll.pkg1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",bll.pkg2);
   gotoxy(8,9);cprintf("%s",bll.tem1);
   gotoxy(8,10);cprintf("%s",bll.tem2);
   gotoxy(35,9);cprintf("%s",bll.fr1);
   gotoxy(35,10);cprintf("%s",bll.fr2);
   gotoxy(44,9);cprintf("Rs. %f",bll.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bll.rate[1]);
   gotoxy(56,9);cprintf("  Rs. %f",bll.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bll.cost[1]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
  else if (bll.ch==3)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",bll.pkg1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",bll.pkg2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",bll.pkg3);
   gotoxy(8,9);cprintf("%s",bll.tem1);
   gotoxy(8,10);cprintf("%s",bll.tem2);
   gotoxy(8,11);cprintf("%s",bll.tem3);
   gotoxy(35,9);cprintf("%s",bll.fr1);
   gotoxy(35,10);cprintf("%s",bll.fr2);
   gotoxy(35,11);cprintf("%s",bll.fr3);
   gotoxy(44,9);cprintf("Rs. %f",bll.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bll.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bll.rate[2]);
   gotoxy(56,9);cprintf("  Rs. %f",bll.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bll.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bll.cost[2]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
  else if (bll.ch==4)
 {
  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",bll.pkg1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",bll.pkg2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",bll.pkg3);
   gotoxy(22,12);cprintf(" %d",bll.qt4);
   gotoxy(25,12);cprintf(" X %s",bll.pkg4);
   gotoxy(8,9);cprintf("%s",bll.tem1);
   gotoxy(8,10);cprintf("%s",bll.tem2);
   gotoxy(8,11);cprintf("%s",bll.tem3);
   gotoxy(8,12);cprintf("%s",bll.tem4);
   gotoxy(35,9);cprintf("%s",bll.fr1);
   gotoxy(35,10);cprintf("%s",bll.fr2);
   gotoxy(35,11);cprintf("%s",bll.fr3);
   gotoxy(35,12);cprintf("%s",bll.fr4);
   gotoxy(44,9);cprintf("Rs. %f",bll.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bll.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bll.rate[2]);
   gotoxy(44,12);cprintf("Rs. %f",bll.rate[3]);
   gotoxy(56,9);cprintf("  Rs. %f",bll.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bll.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bll.cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",bll.cost[3]);
   gotoxy(56,17);cprintf("Rs. %f",bll.tot);
  }
 }
  else if (bll.ch==5)
 {

  {
   gotoxy(22,9);cprintf(" %d",bll.qt1);
   gotoxy(25,9);cprintf(" X %s",bll.pkg1);
   gotoxy(22,10);cprintf(" %d",bll.qt2);
   gotoxy(25,10);cprintf(" X %s",bll.pkg2);
   gotoxy(22,11);cprintf(" %d",bll.qt3);
   gotoxy(25,11);cprintf(" X %s",bll.pkg3);
   gotoxy(22,12);cprintf(" %d",bll.qt4);
   gotoxy(25,12);cprintf(" X %s",bll.pkg4);
   gotoxy(22,13);cprintf(" %d",bll.qt5);
   gotoxy(25,13);cprintf(" X %s",bll.pkg5);
   gotoxy(8,9);cprintf("%s",bll.tem1);
   gotoxy(8,10);cprintf("%s",bll.tem2);
   gotoxy(8,11);cprintf("%s",bll.tem3);
   gotoxy(8,12);cprintf("%s",bll.tem4);
   gotoxy(8,13);cprintf("%s",bll.tem5);
   gotoxy(35,9);cprintf("%s",bll.fr1);
   gotoxy(35,10);cprintf("%s",bll.fr2);
   gotoxy(35,11);cprintf("%s",bll.fr3);
   gotoxy(35,12);cprintf("%s",bll.fr4);
   gotoxy(35,13);cprintf("%s",bll.fr5);
   gotoxy(44,9);cprintf("Rs. %f",bll.rate[0]);
   gotoxy(44,10);cprintf("Rs. %f",bll.rate[1]);
   gotoxy(44,11);cprintf("Rs. %f",bll.rate[2]);
   gotoxy(44,12);cprintf("Rs. %f",bll.rate[3]);
   gotoxy(44,13);cprintf("Rs. %f",bll.rate[4]);
   gotoxy(56,9);cprintf("  Rs. %f",bll.cost[0]);
   gotoxy(56,10);cprintf("  Rs. %f",bll.cost[1]);
   gotoxy(56,11);cprintf("  Rs. %f",bll.cost[2]);
   gotoxy(56,12);cprintf("  Rs. %f",bll.cost[3]);
   gotoxy(56,13);cprintf("  Rs. %f",bll.cost[4]);
   gotoxy(56,17);cprintf("  Rs. %f",bll.tot);
  }
 }
 _setcursortype(_NOCURSOR);
 gotoxy(26,22);
 textcolor(15);
 highvideo();
 cprintf("Press Enter to continue....");
 getch();
 file.close();
 A:
}

void update()
{
 char tem[20],data,name[20],code[10],cat[5];
 clrscr();
 _setcursortype(_NORMALCURSOR);
 box(5,75,2,25);
 gotoxy(29,3);
 cprintf("Enter Medicine Details");
 gotoxy(25,7);
 cprintf("Medicine Code: ");
 read(tem,20,40,7,20,60);
 ifstream file1;
 mrec=check_rec(tem);
 if(mrec==0)
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   gotoxy(49,21);
   cprintf(" Medicine Not Bought! ");
   box(49,71,20,22);
   getch();
   gotoxy(49,20);
   cprintf("                      ");
   gotoxy(49,21);
   cprintf("                      ");
   gotoxy(49,22);
   cprintf("                      ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto end;
  }
  box(15,65,10,20);
  file1.open("Stock.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  offset=(mrec-1)*sizeof(Node);
  file1.seekg(offset,ios::beg);
  file1.read((char *) & start,sizeof(Node));
  file1.close();
  gotoxy(32,10);
  cout<<"PREVIOUS DETAILS";
  gotoxy(16,12);
  cout<<"Medicine Name: "<<start.med_name;
  gotoxy(16,13);
  cout<<"Manufacturer: "<<start.manuf;
  gotoxy(16,14);
  cout<<"Batch: "<<start.batch;
  gotoxy(16,15);
  cout<<"Expiry: "<<start.dd<<" / "<<start.mm<<" / "<<start.yy;
  gotoxy(16,16);
  cout<<"Rate: "<<start.rate;
  gotoxy(16,17);
  cout<<"Stock: "<<start.stock;
  gotoxy(26,22);
  cout<<"Press Enter to continue....";
  getch();
  char yy[3],mm[3],dd[3];
  clrscr();
  box();
  {
   gotoxy(30,3);cprintf("NEW DETAILS");
   gotoxy(25,7);cprintf("Batch No.: ");
   gotoxy(25,9);cprintf("Manuf. Date:    /    /    ");
   gotoxy(25,11);cprintf("Packing: ");
   gotoxy(25,13);cprintf("Rate: ");
   gotoxy(25,15);cprintf("Stock: ");
   read(start.batch,10,36,7,60,20);
   A:read(dd,2,38,9);
   for(int i=0;i<2;i++)
    {
     if(dd[i]==char(27))
     goto end;
    }
   start.dd = atoi(dd);
   if(start.dd>31)
   {
    textcolor(15);
    gotoxy(38,9);
    cprintf("-- ");
    goto A;
   }
   B:
   read(mm,2,43,9);
   for(i=0;i<2;i++)
    {
     if(mm[i]==char(27))
     goto end;
    }
   mm[2]='\0';
   start.mm=atoi(mm);
   if(start.mm>12)
   {
    textcolor(15);
    gotoxy(43,9);
    cprintf("--");
    goto B;
   }
   if((start.mm==2) && (start.dd>29))
   {
    textcolor(15);
    gotoxy(38,9);
    cprintf("--");
    gotoxy(43,9);
    cprintf("--");
    goto A;
   }
   C:
   read(yy,2,48,9);
   for(i=0;i<2;i++)
    {
     if(yy[i]==char(27))
     goto end;
    }
   yy[2]='\0';
   //strcpy(start.yy,yy);
   start.yy=atoi(yy);
   struct tm *time_now;
   time_t secs_now;
   char str[4];
   int yy1;
   tzset();
   time(&secs_now);
   time_now = localtime(&secs_now);
   strftime(str, 3,"%y",time_now);
   yy1=atoi(str);
   if(start.yy>yy1)
   {
    textcolor(15);
    gotoxy(48,9);
    cprintf("--");
    goto C;
   }
   else
   if((start.mm==2) && (start.dd>28) &&(start.yy%4!=0))
   {
    textcolor(15);
    gotoxy(38,9);
    cprintf("-- ");
    gotoxy(43,9);
    cprintf("--");
    gotoxy(48,9);
    cprintf("--");
    goto A;
   }
   read(start.cat,10,35,11);
   for(i=0;i<10;i++)
    {
     if(start.cat[i]==char(27))
     goto end;
    }
    char rate[8],stock[4];
   read(rate,8,31,13);
   for(i=0;i<8;i++)
    {
     if(rate[i]==char(27))
     goto end;
    }
   read(stock,3,32,15);
   for(i=0;i<3;i++)
    {
     if(stock[i]==char(27))
     goto end;
    }
   start.rate=atof(rate);
   start.stock=atoi(stock);
   _setcursortype(_NOCURSOR);
   gotoxy(26,22);
   cprintf("Press Enter To Continue...");
   getch();
  ofstream file1;
  file1.open("Stock.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  file1.seekp(offset,ios::beg);
  file1.write((char *) & start, sizeof(Node));
  file1.close();
 }
 end:getch();
}

void update2()
{
 char dd[3],mm[3],yy[4];
 char rate[8],stock[3];
 char tem[20];
 clrscr();
 _setcursortype(_NORMALCURSOR);
 box(5,75,2,25);
 gotoxy(29,3);
 cprintf("Enter Medicine Details");
 gotoxy(25,7);
 cprintf("Item Code: ");
 read(tem,20,36,7,20,60);
 ifstream file1;
 mrec=check_rec2(tem);
 if(mrec==0)
  {
   _setcursortype(_NOCURSOR);
   textcolor(15);
   textbackground(1);
   gotoxy(49,21);
   cprintf(" Item Not Bought! ");
   box(49,68,20,22);
   getch();
   gotoxy(48,20);
   cprintf("                    ");
   gotoxy(48,21);
   cprintf("                    ");
   gotoxy(48,22);
   cprintf("                    ");
   _setcursortype(_NORMALCURSOR);
   textcolor(15);
   textbackground(0);
   goto end;
  }
  file1.open("genstck.stc",ios::nocreate|ios::in|ios::out|ios::binary);
  offset=(mrec-1)*sizeof(gen);
  file1.seekg(offset,ios::beg);
  file1.read((char *) & gn,sizeof(gen));
  file1.close();
  _setcursortype(_NOCURSOR);
  gotoxy(32,10);
  cprintf("PREVIOUS DETAILS");
  box(13,67,10,20);
  textcolor(8);
  gotoxy(26,12);cprintf("Item Name: ");
  gotoxy(26,13);cprintf("Manufacturer: ");
  gotoxy(26,14);cprintf("Batch: ");
  gotoxy(26,15);cprintf("Mf.Date: ");
  gotoxy(36,15);cprintf(" / ");
  gotoxy(41,15);cprintf(" / ");
  gotoxy(26,16);cprintf("Rate: Rs. ");
  gotoxy(26,17);cprintf("Stock: ");
  gotoxy(26,18);cprintf("Offers: ");
  textcolor(15);highvideo();
  gotoxy(37,12);cprintf("%s",gn.it_name);
  gotoxy(40,13);cprintf("%s",gn.manuf);
  gotoxy(33,14);cprintf("%s",gn.batch);
  gotoxy(34,15);cprintf("%d",gn.dd);
  gotoxy(39,15);cprintf("%d",gn.mm);
  gotoxy(44,15);cprintf("%s",gn.yy);
  gotoxy(37,16);cprintf("%f",gn.rate);
  gotoxy(33,17);cprintf("%d",gn.stock);
  gotoxy(34,18);cprintf("%s",gn.free);
  gotoxy(26,22);
  cprintf("Press Enter To Continue...");
  if(gn.stock==0)
  {
   textcolor(15);
   textbackground(1);
   box(58,71,20,22);
   gotoxy(58,21);
   cprintf(" Stock Over! ");
   textcolor(15);
   textbackground(0);
  }
  getch();
  clrscr();
  box();
  {
   _setcursortype(_NORMALCURSOR);
   gotoxy(30,3);cprintf("NEW DETAILS");
   gotoxy(25,7);cprintf("Batch No.: ");
   gotoxy(25,9);cprintf("Manuf. Date:    /    /    ");
   gotoxy(25,11);cprintf("Packing: ");
   gotoxy(25,13);cprintf("Rate: ");
   gotoxy(25,15);cprintf("Stock: ");
   gotoxy(25,17);cprintf("Ofers: ");
   read(gn.batch,10,36,7,60,20);
   A:read(dd,2,38,9);
   for(int i=0;i<2;i++)
    {
     if(dd[i]==char(27))
     goto end;
    }
   gn.dd = atoi(dd);
   if(gn.dd>31)
   {
    textcolor(15);
    gotoxy(25,13);
    cprintf("-- ");
    goto A;
   }
   B:
   read(mm,2,43,9);
   for(i=0;i<2;i++)
    {
     if(mm[i]==char(27))
     goto end;
    }
   mm[2]='\0';
   gn.mm=atoi(mm);
   if(gn.mm>12)
   {
    textcolor(15);
    gotoxy(30,13);
    cprintf("--");
    goto B;
   }
   if((gn.mm==2) && (gn.dd>29))
   {
    textcolor(15);
    gotoxy(25,13);
    cprintf("--");
    gotoxy(30,13);
    cprintf("--");
    goto A;
   }
   C:
   read(yy,2,48,9);
   for(i=0;i<2;i++)
    {
     if(yy[i]==char(27))
     goto end;
    }
   yy[2]='\0';
   strcpy(gn.yy,yy);
   gn.yyy=atoi(yy);
   struct tm *time_now;
   time_t secs_now;
   char str[4];
   int yy1;
   tzset();
   time(&secs_now);
   time_now = localtime(&secs_now);
   strftime(str, 3,"%y",time_now);
   yy1=atoi(str);
   if(gn.yyy>yy1)
   {
    textcolor(15);
    gotoxy(35,13);
    cprintf("--");
    goto C;
   }
   else
   if((gn.mm==2) && (gn.dd>28) &&(gn.yyy%4!=0))
   {
    textcolor(15);
    gotoxy(25,13);
    cprintf("-- ");
    gotoxy(30,13);
    cprintf("--");
    gotoxy(35,13);
    cprintf("--");
    goto A;
   }
   read(gn.pckg,10,35,11);
   for(i=0;i<10;i++)
    {
     if(gn.pckg[i]==char(27))
     goto end;
    }
   read(rate,8,31,13);
   for(i=0;i<8;i++)
    {
     if(rate[i]==char(27))
     goto end;
    }
   read(stock,3,32,15);
   for(i=0;i<3;i++)
    {
     if(stock[i]==char(27))
     goto end;
    }
    read(gn.free,10,32,17);
   for(i=0;i<10;i++)
    {
     if(gn.free[i]==char(27))
     goto end;
    }
   gn.rate=atof(rate);
   gn.stock=atoi(stock);
   _setcursortype(_NOCURSOR);
   gotoxy(26,22);
   cprintf("Press Enter To Continue...");
   getch();
   ofstream file1;
   file1.open("genstck.stc",ios::nocreate|ios::in|ios::out|ios::binary);
   file1.seekp(offset,ios::beg);
   file1.write((char *) & gn, sizeof(gen));
   file1.close();
  }
  end:
  _setcursortype(_NOCURSOR);
  clrscr();
  gotoxy(32,6);
  cprintf("UPDATED DETAILS");
  box(13,67,10,20);
  textcolor(8);
  gotoxy(26,12);cprintf("Item Name: ");
  gotoxy(26,13);cprintf("Manufacturer: ");
  gotoxy(26,14);cprintf("Batch: ");
  gotoxy(26,15);cprintf("Mf.Date: ");
  gotoxy(36,15);cprintf(" / ");
  gotoxy(41,15);cprintf(" / ");
  gotoxy(26,16);cprintf("Rate: Rs. ");
  gotoxy(26,17);cprintf("Stock: ");
  gotoxy(26,18);cprintf("Offers: ");
  textcolor(15);highvideo();
  gotoxy(37,12);cprintf("%s",gn.it_name);
  gotoxy(40,13);cprintf("%s",gn.manuf);
  gotoxy(33,14);cprintf("%s",gn.batch);
  gotoxy(34,15);cprintf("%d",gn.dd);
  gotoxy(39,15);cprintf("%d",gn.mm);
  gotoxy(44,15);cprintf("%s",gn.yy);
  gotoxy(37,16);cprintf("%f",gn.rate);
  gotoxy(33,17);cprintf("%d",gn.stock);
  gotoxy(34,18);cprintf("%s",gn.free);
 getch();
}