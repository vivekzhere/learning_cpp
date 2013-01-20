/*
Program Title : Matrix Calculator
Programmer    : Unknown

E-Mail	  : binnyva@hotmail.com
Website       : http://binnyva.tripod.com/code

There is some personal infomation in the introduction and end. Please remove them before use.
*/
#include<process.h>
#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

class Border
{
public:
void body(void);
};

class Screen
{
public:
void screen(void);
};

class Output:public Screen
{
public:
void Text(char *);
void Number(double);
};

class Button
{
public:
void button_u(int,int,int,int,int,int,char*);
void button_p(int,int,int,int,int,int,char*);
};

void Border::body(void)
{

   setcolor(WHITE);
  // rectangle(230,5,490,340);
 //  rectangle(225,0,495,345);

   int d[35];
  d[0]=222; d[1]=135;d[2]=222;d[3]=37;d[4]=243;d[5]=16;d[6]=272;d[7]=0;
  d[8]=446;d[9]=0;d[10]=474;d[11]=13;d[12]=498;d[13]=37;d[14]=498;d[15]=255;
  d[16]=536;d[17]=282;d[18]=534;d[19]=300;d[20]=534;d[21]=320;d[22]=492;d[23]=350;
  d[24]=230;d[25]=350;d[26]=185;d[27]=317;d[28]=185;d[29]=282;d[30]=222;d[31]=258;
  d[32]=222;d[33]=135;
  setfillstyle(SOLID_FILL,RED);
    fillpoly(17,d);


  int a[18];

  a[0]=230;a[1]=135;a[2]=280;a[3]=120;a[4]=410;a[5]=120;a[6]=410;a[7]=340;
  a[8]=230;a[9]=340;a[10]=195;a[11]=315;a[12]=195;a[13]=285;a[14]=230;a[15]=260;
  a[16]=230;a[17]=135;
  setfillstyle(SOLID_FILL,DARKGRAY);
    fillpoly(9,a);
 int b[19];

  b[0]=410;b[1]=120;b[2]=440;b[3]=120;b[4]=490;b[5]=135;b[6]=490;b[7]=260;
  b[8]=525;b[9]=285;b[10]=525;b[11]=315;b[12]=490;b[13]=340;b[14]=410;b[15]=340;
  b[16]=410;b[17]=120;
  setfillstyle(SOLID_FILL,BLACK);
  fillpoly(9,b);

  int c[23];
  setcolor(WHITE);
  c[0]=230;c[1]=135;c[2]=230;c[3]=40;c[4]=250;c[5]=20;c[6]=280;c[7]=5;
  c[8]=440;c[9]=5;c[10]=470;c[11]=20;c[12]=490;c[13]=40;c[14]=490;c[15]=135;
  c[16]=440;c[17]=120;c[18]=280;c[19]=120;c[20]=230;c[21]=135;
  setfillstyle(SOLID_FILL,BLACK);
  fillpoly(11,c);

   line(230,40,222,37);
   line(250,20,243,16);
   line(280,5,272,0);
   line(440,5,446,0);
   line(470,20,474,13);
   line(490,40,498,37);
   line(490,260,498,255);
   line(525,285,536,282);
   line(525,315,534,320);
   line(490,340,492,350);
   line(230,340,230,350);
   line(195,315,185,317);
   line(195,285,185,282);
   line(230,260,222,258);
}

void Screen::screen(void)
{
   int p[30];
   setcolor(9);


      p[0]=250;   p[1]=45; p[2]=280; p[3]=30; p[4]=440; p[5]=30; //1 ST SCREEN
  p[6]=470; p[7]=45; p[8]=470; p[9]=95; p[10]=440; p[11]=110;
  p[12]=280; p[13]=110; p[14]=250; p[15]=95; p[16]=250;   p[17]=45;
 setfillstyle(SOLID_FILL,BLUE);
  fillpoly(9,p);


   rectangle(260,50,460,90);
  p[0]=260;   p[1]=50; p[2]=280; p[3]=40; p[4]=440; p[5]=40;  //MAIN SCREEN
   p[6]=460; p[7]=50; p[8]=460; p[9]=90; p[10]=440; p[11]=100;
    p[12]=280; p[13]=100; p[14]=260; p[15]=90;
  setfillstyle(SOLID_FILL,GREEN);
  fillpoly(8,p);


  p[0]=250;   p[1]=45; p[2]=280; p[3]=30; p[4]=440; p[5]=30; //BORDER 1 ST SCREEN
  p[6]=470; p[7]=45; p[8]=470; p[9]=95; p[10]=440; p[11]=110;
  p[12]=280; p[13]=110; p[14]=250; p[15]=95; p[16]=250;   p[17]=45;
  drawpoly(9,p);
 setcolor(WHITE);
// line(290,110,350,30);
// line(310,110,390,30);


}

void Button::button_u(int left,int top,int right,int bottom,int colo,int co,char*di="")
{
int x1,x2,x3,x4,s[20];
setcolor(LIGHTBLUE);
rectangle(left,top,right,bottom);
x1=left+3;
x2=top+3;
x3=right-3;
x4=bottom-3;
setcolor(LIGHTBLUE);
s[0]=x1; s[1]=x2;s[2]=x3;s[3]=x2;s[4]=x3;s[5]=x4;s[6]=x1;s[7]=x4;s[8]=x1;s[9]=x2;
setfillstyle(SOLID_FILL,colo);
fillpoly(5,s);
setcolor(WHITE);

setlinestyle(0,1,2);
line(left,top,x1,x2);
line(right,top,x3,x2);
line(left,bottom,x1,x4);
line(right,bottom,x3,x4);
settextstyle(4,0,1);
setcolor(co);
moveto(((x1+x3)/2)- 4,((x4+x2)/2)-14);
outtext(di);
setcolor(LIGHTGRAY);
for(int i=1;i<3;i++)
line(left+i,top+i,right-i,top+i);

for(i=1;i<3;i++)
line(left+i,top+i,left+i,bottom-i);
setcolor(BLACK);
for(i=1;i<3;i++)
line(right-i,top+i,right-i,bottom-i);
for(i=1;i<3;i++)
line(left+i,bottom-i,right-i,bottom-i);
setcolor(LIGHTBLUE);
line(left,top,x1,x2);
line(right,top,x3,x2);
line(left,bottom,x1,x4);
line(right,bottom,x3,x4);
}

void Button::button_p(int left,int top,int right,int bottom,int colo,int co,char*di="")
{
int x1,x2,x3,x4,s[20];
settextjustify(LEFT_TEXT,TOP_TEXT);


setcolor(LIGHTBLUE);
rectangle(left,top,right,bottom);
x1=left+3;
x2=top+3;
x3=right-3;
x4=bottom-3;
setcolor(LIGHTBLUE);
s[0]=x1; s[1]=x2;s[2]=x3;s[3]=x2;s[4]=x3;s[5]=x4;s[6]=x1;s[7]=x4;s[8]=x1;s[9]=x2;
setfillstyle(SOLID_FILL,colo);
fillpoly(5,s);

setcolor(WHITE);

setlinestyle(0,1,2);
line(left,top,x1,x2);
line(right,top,x3,x2);
line(left,bottom,x1,x4);
line(right,bottom,x3,x4);
settextstyle(4,0,1);
setcolor(co);

moveto((((x1+x3)/2)-4)+2,(((x4+x2)/2)-12)+2);
outtext(di);
setcolor(BLACK);
for(int i=1;i<3;i++)
line(left+i,top+i,right-i,top+i);

for(i=1;i<3;i++)
line(left+i,top+i,left+i,bottom-i);
setcolor(LIGHTGRAY);
for(i=1;i<3;i++)
line(right-i,top+i,right-i,bottom-i);
for(i=1;i<3;i++)
line(left+i,bottom-i,right-i,bottom-i);

setcolor(LIGHTBLUE);
line(left,top,x1,x2);
line(right,top,x3,x2);
line(left,bottom,x1,x4);
line(right,bottom,x3,x4);
sound(500);
delay(10);
nosound();
delay(190);



setcolor(LIGHTBLUE);
s[0]=x1; s[1]=x2;s[2]=x3;s[3]=x2;s[4]=x3;s[5]=x4;s[6]=x1;s[7]=x4;s[8]=x1;s[9]=x2;
setfillstyle(SOLID_FILL,colo);
fillpoly(5,s);

settextstyle(4,0,1);
setcolor(co);
moveto(((x1+x3)/2)-4,((x4+x2)/2)-12);
outtext(di);
setcolor(LIGHTGRAY);
for(i=1;i<3;i++)
line(left+i,top+i,right-i,top+i);

for(i=1;i<3;i++)
line(left+i,top+i,left+i,bottom-i);
setcolor(BLACK);
for(i=1;i<3;i++)
line(right-i,top+i,right-i,bottom-i);
for(i=1;i<3;i++)
line(left+i,bottom-i,right-i,bottom-i);
sound(400);
delay(10);
nosound();


setcolor(LIGHTBLUE);
line(left,top,x1,x2);
line(right,top,x3,x2);
line(left,bottom,x1,x4);
line(right,bottom,x3,x4);
}

void Output::Text(char *ptrstring)
{
Screen::screen();
moveto(458,75);
settextjustify(RIGHT_TEXT,CENTER_TEXT);
//settextstyle(SANS_SERIF_FONT,HORIZ_DIR,USER_CHAR_SIZE);
setusercharsize(5,8,1,1);
setcolor(BLACK);
outtext(ptrstring);
}

void Output::Number(double d)
{
char buffer[80];
sprintf(buffer,"%16.2lf",d);
Output::Text(buffer);
}


void main()
{
int driver,mode;
driver=DETECT;
mode=DETECT;
initgraph(&driver,&mode,"");

Border bo;



int c=0,nik=3;
int END=30;
int p[60];
//settextstyle(1,0,2);
 setcolor(BLUE);

//getch();
 //exit(0);
//for(int f=0;f<2;f++)
//{
/*
    for(int i=1;i<100;i++)
  {

   setcolor(BLACK);
 p[0]=0,p[1]=20,p[2]=630,p[3]=20,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=20;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);



setcolor(LIGHTGREEN);
moveto(100,10+(i*8 ));
settextstyle(2,1,5);
delay(30);
   outtext("ÛÛ                 .");

setcolor(GREEN);
//outtext("1");
moveto(100,1+(i*8));
settextstyle(2,1,5);
//delay(30);
 outtext("450 àáâàèéïããÖ××éøùø");
	     //àáâàèéïããÖ××éøùø
 delay(50);
     }
goto aa;
 getch();
 exit(0);
*/


  while(nik==3)//!kbhit())
  {
c=c+1;

   if(c==3)
   {
	setcolor(RED);
	settextstyle(11,0,2);
      outtextxy(20,0,"M");
  }
   if(c==4)
   {
	setcolor(RED);
	settextstyle(11,0,2);
   outtextxy(40,0,"A");

  }
    if(c==5)
   {
	setcolor(RED);
	settextstyle(11,0,3);
   outtextxy(60,0,"T");
   delay(80);
   outtextxy(80,0,"R");
   delay(80);
      outtextxy(100,0,"I");
   delay(80);
   outtextxy(120,0,"X");
   delay(80);
   setcolor(RED);
   outtextxy(140,0,"!");

   }

    if(c==6)
    {
	setcolor(RED);
	settextstyle(11,0,3);
   outtextxy(180,0,"C");
   delay(80);
   outtextxy(200,0,"A");
   delay(160);
      outtextxy(220,0,"L");
   delay(160);
   outtextxy(240,0,"C");
   delay(160);
   setcolor(RED);
   outtextxy(260,0,"U");
      }
       if(c==7)
       {
	setcolor(RED);
	settextstyle(11,0,3);
   outtextxy(280,0,"L");
   delay(160);
   outtextxy(300,0,"A");
   delay(160);
      outtextxy(320,0,"T");
   delay(160);
   outtextxy(340,0,"O");
   delay(160);
   setcolor(RED);
   outtextxy(360,0,"R");
      outtextxy(380,0,".");
   outtextxy(400,0,".");
   delay(160);
   setcolor(RED);
   outtextxy(420,0,".");

       }
	  /*if(c==9)
	  {
	  setcolor(GREEN);
	  settextstyle(7,0,3);
	  for(int g=10;g<270;g++)
	   {
	   delay(40);
	   outtextxy(g,170," M A T R I X");
	  setcolor(LIGHTGREEN);
	  outtextxy(g,170," M A T R I X");
	  }
	  getch();
	  exit(0);
	  }     */

 if(c==1)
			  {

for(int i=1;i<100;i++)
{
   setcolor(BLACK);
 p[0]=0,p[1]=30,p[2]=630,p[3]=30,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=30;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);




//   setcolor(BLACK);
// p[0]=0,p[1]=2,p[2]=630,p[3]=2,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=2;
// setfillstyle(SOLID_FILL,BLACK);
// fillpoly(5,p);


 // settextjustify(LEFT_TEXT,TOP_TEXT);



setcolor(GREEN);
//outtext("1");
moveto(10,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext("                          @ #@ @tg @#@");
setcolor(LIGHTGREEN);
moveto(10,1+(i*5 ));
settextstyle(2,1,5);
//delay(30);
 outtext("                                                 @ÛÛ@#");





setcolor(GREEN);
//outtext("1");
moveto(30,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext("                              010 0101 0  010");
setcolor(LIGHTGREEN);
moveto(30,1+(i*6 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@#@#");





setcolor(GREEN);
//outtext("1");
moveto(50,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext("            E@ $@ #@ @tg @#@");
setcolor (LIGHTGREEN);
moveto(50,1+(i*6 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");






setcolor(LIGHTGREEN);
moveto(80,1+(i*5 ));
settextstyle(2,1,5);
//delay(30);
 outtext("$ÛÛE");

setcolor(GREEN);
//outtext("1");
moveto(100,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext("                     @ $@ #@ @tg @#@");




 setcolor(LIGHTGREEN);
moveto(135,1+(i*5 ));
settextstyle(11,1,10);
//delay(30);
 outtext("10@#@");
setcolor(GREEN);
//outtext("1");
moveto(120,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext("              @#@");
			 //NEW  NEW

 setcolor(LIGHTGREEN);
moveto(140,1+(i*20 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");


 setcolor(LIGHTGREEN);
moveto(160,1+(i*3 ));
settextstyle(2,1,5);
//delay(30);
 outtext("                                     10@#@");
setcolor(GREEN);
//outtext("1");
moveto(160,1+(i*1));
settextstyle(2,1,7);
//delay(30);
 outtext("  @#@");

 setcolor(LIGHTGREEN);
moveto(180,1+(i*4 ));
settextstyle(2,1,5);
//delay(30);
 outtext("               ÛÛÛÛ1Û@");
setcolor(GREEN);
//outtext("1");
moveto(180,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext("      4 @%@ @t g   @#@");




 setcolor(LIGHTGREEN);
moveto(210,1+(i*3 ));
settextstyle(2,1,5);
//delay(30);
 outtext(" ÛÛÛÛÛ              ÛÛÛÛ1Û@");

setcolor(GREEN);
//outtext("1");
moveto(210,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext(" 111001 0 101 101 0101 001010 0 01");



 setcolor(LIGHTGREEN);
moveto(220,1+(i*5));
settextstyle(2,1,5);
//delay(30);
 outtext("   Û     ÛÛÛ ");

setcolor(GREEN);
//outtext("1");
moveto(220,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext("    3KGP  010  0" );


 setcolor(LIGHTGREEN);
moveto(235,1+(i*6));
settextstyle(2,1,5);
//delay(30);
 outtext("    ÛÛ        ÛÛ           ÛÛÛÛÛ   ");


setcolor(GREEN);
//outtext("1");
moveto(235,1+(i*5));
settextstyle(2,1,6);
//delay(30);
 outtext("  010  0 013 JD MATRIX");




 setcolor(LIGHTGREEN);
moveto(285,1+(i*15));
settextstyle(2,1,6);
//delay(30);
 outtext("    ÛÛ   ");

 setcolor(GREEN);
moveto(270,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext("01@@3E");

setcolor(GREEN);
//outtext("1");
moveto(300,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext("    10 1 $@ #@ @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(325,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext("  @tg @#@");

setcolor(LIGHTGREEN);
moveto(330,1+(i*5));
settextstyle(11,1,6);
//delay(30);
 outtext("101010");



setcolor(GREEN);
//outtext("1");
moveto(345,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext(" 1010  101 101001");
setcolor(LIGHTGREEN);
moveto(375,1+(i*18 ));
settextstyle(11,1,6);
//delay(30);
 outtext("0111010 010 01");



setcolor(GREEN);
//outtext("1");
moveto(380,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" 0 @tg @#@");

setcolor(LIGHTGREEN);
moveto(400,1+(i*6));
settextstyle(11,1,5);
//delay(30);
 outtext(" Û Û Û    1010  ÛÛ ÛÛ ");



 setcolor(GREEN);
moveto(410,1+(i*5));
settextstyle(2,1,7);
//delay(30);
 outtext(" êëë áàÝâä êáêëëë ëþ");


 setcolor(GREEN);
moveto(435,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext("êáêëëë ëþ");


setcolor(LIGHTGREEN);
//outtext("1");
moveto(450,1+(i*4));
settextstyle(11,1,5);
//delay(30);
 outtext("00101      001010 ");


setcolor(GREEN);
//outtext("1");
moveto(480,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" ##$$g@#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(490,1+(i*4));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛ ");


setcolor(GREEN);
//outtext("1");
moveto(510,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext("  1 1 110 @tg @#@");


setcolor(GREEN);
//outtext("1");
moveto(535,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(545,1+(i*10));
settextstyle(2,1,6);
//delay(30);
 outtext("902áàáàâÝ");


setcolor(GREEN);
//outtext("1");
moveto(560,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext(" g @ #@");



setcolor(GREEN);
//outtext("1");
moveto(580,1+(i*3));
settextstyle(2,1,5);
//delay(30);
 outtext(" #@");
setcolor(LIGHTGREEN);
//outtext("1");
moveto(590,1+(i*9));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛ");

setcolor(GREEN);
//outtext("1");
moveto(600,1+(i*2));
settextstyle(2,1,7);
//delay(30);

  outtext("!4 @%@ @t g   @#@");

 setcolor(LIGHTGREEN);
//outtext("1");
moveto(610,1+(i*9));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");

 delay(20);

}
}


 if(c!=1)
{
 if(c==10)
 END=260;
 if(c==11)
 {
 settextstyle(7,0,6);
 setcolor(GREEN);
/* for(int bo=10;bo<181;bo++)
 {
 settextstyle(7,0,6);
 setcolor(LIGHTGREEN);
 outtextxy(70,bo,"C");// A T R I X");
 setcolor(BLACK);
 outtextxy(70,bo-1,"C");// A T R I X");
 setcolor(GREEN);
 outtextxy(70,bo,"C");// A T R I X");


  settextstyle(7,0,6);
 setcolor(LIGHTGREEN);
 outtextxy(124,bo,"A L");// A T R I X");
 setcolor(BLACK);
 outtextxy(124,bo-1,"A L");// A T R I X");
 setcolor(GREEN);
 outtextxy(124,bo,"A L");// A T R I X");

delay(4);


  settextstyle(7,0,6);
 setcolor(LIGHTGREEN);
 outtextxy(245,bo,"C U");// A T R I X");
 setcolor(BLACK);
 outtextxy(245,bo-1,"C U");// A T R I X");
 setcolor(GREEN);
  outtextxy(245,bo,"C U");// A T R I X");

delay(2);


  settextstyle(7,0,6);
 setcolor(LIGHTGREEN);
 outtextxy(363,bo,"L A");// A T R I X");
 setcolor(BLACK);
 outtextxy(363,bo-1,"L A");// A T R I X");
 setcolor(GREEN);
  outtextxy(363,bo,"L A");// A T R I X");

delay(2);


  settextstyle(7,0,6);
 setcolor(LIGHTGREEN);
 outtextxy(479,bo,"T O R");// A T R I X");
 setcolor(BLACK);
 outtextxy(479,bo-1,"T O R");// A T R I X");
 setcolor(GREEN);
  outtextxy(479,bo,"T O R");// A T R I X");

delay(2);

}
*/
  setcolor(YELLOW);
  settextstyle(7,0,6);
 outtextxy(200,100,"M A T R I X");

 for(int ff=10;ff<255;ff++)
    {

      settextstyle(10,0,5);
   setcolor(LIGHTGREEN );
  outtextxy(ff*24,85,"ÛÛÛÛÛ.");
    setcolor(BLACK);
	delay(1);
outtextxy(ff*24 ,85,"ÛÛÛÛÛ.");

      }

 setcolor(YELLOW);
  settextstyle(7,0,6);
 outtextxy(200,100,"M A T R I X");

 settextstyle(7,0,6);


// outtextxy(70,180,"C A L C U L A T O R");

 delay(500);
 setcolor(LIGHTGREEN);
 outtextxy(200,100,"M A T R I X");


   setcolor(YELLOW);
  settextstyle(7,0,6);
 outtextxy(70,180,"C A L C U L A T O R");

 for(ff=10;ff<255;ff++)
    {

      settextstyle(10,0,5);
   setcolor(LIGHTGREEN );
  outtextxy(ff*24,170,"ÛÛÛÛÛ.");
    setcolor(BLACK);
	delay(1);
outtextxy(ff*24 ,170,"ÛÛÛÛÛ.");

      }

 setcolor(YELLOW);
  settextstyle(7,0,6);
 outtextxy(70,180,"C A L C U L A T O R");

 settextstyle(7,0,6);
   delay(500);


  setcolor(LIGHTGREEN);
 outtextxy(70,180,"C A L C U L A T O R");
 setcolor(RED);
 for(int li=70;li<800;li++)
   {
   delay(4);
   outtextxy(li,194,".");
    }
 while(!kbhit())
 {
  settextstyle(11,0,2);

 for(int bv=10;bv<255;bv++)
 {
    setcolor(LIGHTGREEN);
outtextxy(bv*4,300,"ÛÛÛÛ");
setcolor(BLACK);
delay(2);
outtextxy(bv*4 ,300,"ÛÛÛÛ");
  }

 settextstyle(11,0,2);
 setcolor(GREEN);
   outtextxy(500,300,"Press Any Key");
 delay(300);
  setcolor(LIGHTGREEN);
 outtextxy(500,300,"Press Any Key");
  setcolor(RED);
  outtextxy(610,300,">");
 delay(80);
 outtextxy(615,300,">");
  delay(80);
  outtextxy(620,300,">");
  setcolor(GREEN);
  outtextxy(610,300,">");
 delay(80);
 outtextxy(615,300,">");
  delay(80);
  outtextxy(620,300,">");

 }
getch();


   setcolor(BLACK);
 p[0]=0,p[1]=0,p[2]=630,p[3]=0,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=0;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);


settextstyle(0,0,2);
setcolor(GREEN);
outtextxy(250,200,"Loading");
setfillstyle(10,GREEN);
circle(550,400,50);


	setfillstyle(1,LIGHTGREEN);
	for(int st=0,en=0;en<=360;en++)
	{
pieslice(550,400,0,en,50);
	 delay(10);
	}


settextstyle(0,0,2);
setcolor(BLACK);
outtextxy(250,200,"ÛÛÛÛÛÛÛ");

for(int com=10;com<225;com++)
{
	settextstyle(0,0,2);
    setcolor(LIGHTGREEN);
outtextxy(com*19,200,"ÛÛÛÛ");
setcolor(BLACK);
delay(2);
outtextxy(com*19 ,200,"ÛÛÛÛ");
}



settextstyle(0,0,2);
setcolor(LIGHTGREEN);
outtextxy(250,200,"Complete");

 delay(600);
   setcolor(BLACK);
 p[0]=0,p[1]=30,p[2]=630,p[3]=30,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=30;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);


goto pro;
  }



for(int i=1;i<END;i++)
{
   setcolor(BLACK);
 p[0]=0,p[1]=30,p[2]=630,p[3]=30,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=30;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);


 /*

   setcolor(BLACK);
 p[0]=0,p[1]=2,p[2]=630,p[3]=2,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=2;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);
*/

 // settextjustify(LEFT_TEXT,TOP_TEXT);



setcolor(GREEN);
//outtext("1");
moveto(10,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor(LIGHTGREEN);
moveto(10,1+(i*9 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@ÛÛ@#");





setcolor(GREEN);
//outtext("1");
moveto(30,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" 1 0 01 10 101 011 01 01 101 101 01 01 101 0 101 010 101 010 10110  0110 101 1010 011 0  01 0101 010 0101 010  011 010 101 001 0101 010  01101 10 10 101 10  01101 0110 101 0 01  0 0101 010 011 0 010 010 010 0101 0 101 010 0 10  010");
setcolor(LIGHTGREEN);
moveto(30,1+(i*12 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@#@#");





setcolor(GREEN);
//outtext("1");
moveto(50,1+(i*9));
settextstyle(2,1,7);
//delay(30);
 outtext("  E    D 3F E R T  !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor (LIGHTGREEN);
moveto(50,1+(i*10 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");






setcolor(LIGHTGREEN);
moveto(80,1+(i*15 ));
settextstyle(2,1,5);
//delay(30);
 outtext("$ÛÛE");

setcolor(GREEN);
//outtext("1");
moveto(100,1+(i*7));
settextstyle(2,1,7);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");




 setcolor(LIGHTGREEN);
moveto(135,1+(i*10 ));
settextstyle(11,1,10);
//delay(30);
 outtext("10@#@");
setcolor(GREEN);
//outtext("1");
moveto(120,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");
			 //NEW  NEW

 setcolor(LIGHTGREEN);
moveto(140,1+(i*20 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");


 setcolor(LIGHTGREEN);
moveto(160,1+(i*3 ));
settextstyle(2,1,5);
//delay(30);
 outtext("                                     10@#@");
setcolor(GREEN);
//outtext("1");
moveto(160,1+(i*2));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");

 setcolor(LIGHTGREEN);
moveto(180,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext("               ÛÛÛÛ1Û@");
setcolor(GREEN);
//outtext("1");
moveto(180,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");




 setcolor(LIGHTGREEN);
moveto(210,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext(" ÛÛÛÛÛ              ÛÛÛÛ1Û@");

setcolor(GREEN);
//outtext("1");
moveto(210,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext(" 10 01 110 01010 0101 101 111011 010101 01101 0101 1010101 0101010 00001110 101 0101 001010 0 01");



 setcolor(LIGHTGREEN);
moveto(220,1+(i*12));
settextstyle(2,1,5);
//delay(30);
 outtext("   Û     ÛÛÛ ");

setcolor(GREEN);
//outtext("1");
moveto(220,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext("        453 984 0 49-9-34 KTG -G3-=3 =3G2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0" );


 setcolor(LIGHTGREEN);
moveto(235,1+(i*10));
settextstyle(2,1,5);
//delay(30);
 outtext("    ÛÛ        ÛÛ           ÛÛÛÛÛ   ");


setcolor(GREEN);
//outtext("1");
moveto(235,1+(i*10));
settextstyle(2,1,6);
//delay(30);
 outtext("  2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0 013 JD MATRIX");




 setcolor(LIGHTGREEN);
moveto(285,1+(i*30));
settextstyle(2,1,6);
//delay(30);
 outtext("    ÛÛÛÛÛÛÛÛÛ   ");

 setcolor(GREEN);
moveto(270,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext("$10 010 0101 010 01 10 101 101010 01 010 10 10 101 101 0100 1010010 10 01@@3E");

setcolor(GREEN);
//outtext("1");
moveto(300,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext(" E@$%@^ @^%@^@ 6@%^@^ !@^%              @@^%^ @^@^^&#^%&@*&@( D 3F E R 10 01010 01010 01010 010 010 10 0101010 010 1010 10 1 $@ #@ @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(325,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");

setcolor(LIGHTGREEN);
moveto(330,1+(i*9));
settextstyle(11,1,6);
//delay(30);
 outtext("101010");



setcolor(GREEN);
//outtext("1");
moveto(345,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext(" 10 010 010 1010 0101 010 10 10 1010 1010 10 101 010101 01 010 10101 01 010 10 101 0101 0101 010110 1 10101 10 0110 10 1101 10 01 01 10 01101  110110  101 01 01 0101010 10 010101 0 101010 10101 010 10 101 010 1 010 1 0 10 01  001 01010  101 101001");
setcolor(LIGHTGREEN);
moveto(375,1+(i*18 ));
settextstyle(11,1,6);
//delay(30);
 outtext("0111010 010 01");



setcolor(GREEN);
//outtext("1");
moveto(380,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");

setcolor(LIGHTGREEN);
moveto(400,1+(i*12));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛÛÛÛÛ            101010           ÛÛÛÛÛÛ");



 setcolor(GREEN);
moveto(410,1+(i*5));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


 setcolor(GREEN);
moveto(435,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


setcolor(LIGHTGREEN);
//outtext("1");
moveto(450,1+(i*10));
settextstyle(11,1,5);
//delay(30);
 outtext("00101           001010 ");


setcolor(GREEN);
//outtext("1");
moveto(480,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(490,1+(i*11));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛ ");


setcolor(GREEN);
//outtext("1");
moveto(510,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");


setcolor(GREEN);
//outtext("1");
moveto(535,1+(i*5));
settextstyle(2,1,6);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(545,1+(i*24));
settextstyle(2,1,6);
//delay(30);
 outtext("902áàáàâÝ");


setcolor(GREEN);
//outtext("1");
moveto(560,1+(i*7));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(580,1+(i*3));
settextstyle(2,1,5);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");
setcolor(LIGHTGREEN);
//outtext("1");
moveto(590,1+(i*27));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");

setcolor(GREEN);
//outtext("1");
moveto(600,1+(i*2));
settextstyle(2,1,7);
//delay(30);

  outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");

 setcolor(LIGHTGREEN);
//outtext("1");
moveto(610,1+(i*28));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");


}
       }
}



   setcolor(BLACK);
 p[0]=0,p[1]=0,p[2]=630,p[3]=0,p[4]=630,p[5]=480,p[6]=0,p[7]=480,p[8]=0,p[9]=0;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);




pro :

bo.body();
Screen sc;
sc.screen();
Button button0,button1,button2,button3,button4,button5,button6,button7,
button8,button9,buttonDot,buttonClr,buttonMul,buttonDiv,buttonAdd,buttonSub;
Output output1;
button0.button_u(245,295,280,330,0,7,"0");
buttonDot.button_u(300,295,335,330,1,4,".");
buttonClr.button_u(355,295,390,330,1,4,"C");
button1.button_u(245,245,280,280,0,7,"1");
button2.button_u(300,245,335,280,0,7,"2");
button3.button_u(355,245,390,280,0,7,"3");
button4.button_u(245,195,280,230,0,7,"4");
button5.button_u(300,195,335,230,0,7,"5");
button6.button_u(355,195,390,230,0,7,"6");
button7.button_u(245,145,280,180,0,7,"7");
button8.button_u(300,145,335,180,0,7,"8");
button9.button_u(355,145,390,180,0,7,"9");
buttonMul.button_u(420,145,485,180,1,4,"X");
buttonDiv.button_u(420,195,485,230,1,4,"/");
buttonSub.button_u(420,245,485,280,1,4,"-");
buttonAdd.button_u(420,295,485,330,1,4,"+=");


  output1.Number(0.0);

  const char ESC=27;
  char dstring[80];
  char tempbuf[80];
  int numchars=0;
  char ch;
  char oper;
  int true=1;
  int isfirst;
  int false=0;
  int chain ;
  double number1,number2;
  double answer;
  isfirst=true;
  chain=false;
  while((ch=getch())!=ESC)
  {
  if((ch>='0' && ch<='9') || ch=='.')
  {
     switch(ch)
     {
     case '0': button0.button_p(245,295,280,330,0,7,"0");break;
     case '1': button1.button_p(245,245,280,280,0,7,"1");break;
     case '2': button2.button_p(300,245,335,280,0,7,"2");break;
     case '3': button3.button_p(355,245,390,280,0,7,"3");break;

     case '4': button4.button_p(245,195,280,230,0,7,"4");break;

     case '5': button5.button_p(300,195,335,230,0,7,"5");break;

     case '6': button6.button_p(355,195,390,230,0,7,"6");break;

     case '7': button7.button_p(245,145,280,180,0,7,"7");break;

     case '8': button8.button_p(300,145,335,180,0,7,"8");break;

     case '9': button9.button_p(355,145,390,180,0,7,"9");break;

     case '.': buttonDot.button_p(300,295,335,330,1,4,".");break;

     }
     dstring[numchars++]=ch;
     dstring[numchars]='\0';
     if(atof(dstring)>999999999999.99 || numchars >12)
      {
      delay(100);sound(200);delay(300);nosound();
      dstring[--numchars]='\0';
      }
      output1.Text(dstring);
      }
      else
      if(ch=='/' || ch=='*' || ch=='-' || ch=='+' || ch=='=')
      {
      strcpy(tempbuf,dstring);
      numchars=0;
      dstring[numchars]='\0';
      output1.Text(dstring);
      if(isfirst)
      {
      number1=(chain) ? answer :atof(tempbuf);
      isfirst=false;
      switch(ch)
      {
      case '/' : buttonDiv.button_p(420,195,485,230,1,4,"/");oper='/';break;
      case '*' : buttonMul.button_p(420,145,485,180,1,4,"X");oper='*';break;
      case '-' : buttonSub.button_p(420,245,485,280,1,4,"-");oper='-';break;
      case '+' :
      case '=' :buttonAdd.button_p(420,295,485,330,1,4,"+=");oper='+';break;
      }

      }
  else
    {
    buttonAdd.button_p(420,295,485,330,1,4,"+=");
    number2=atof(tempbuf);
    switch(oper)
       {
       case '/': answer=number1/number2;break;
       case '*': answer=number1*number2;break;
       case '-': answer=number1-number2;break;
       case '+': answer=number1+number2;break;
       }
       if(answer>999999999999.99)
       output1.Text("Mathematical Error ");
       else
       {
       output1.Number(answer);
       number1=answer;
       }
       isfirst=true;
       chain=true;
       }
       }
    else
    if(ch=='C' || ch=='c')
    {
    buttonClr.button_p(355,295,390,330,1,4,"C");
    isfirst=true;
    chain=false;
    numchars=0;
    dstring[numchars]='\0';
    output1.Number(0.0);
    }
    else
    {
    delay(100);sound(200);delay(300);nosound();
    }
	}



   setcolor(BLACK);
 p[0]=0,p[1]=0,p[2]=630,p[3]=0,p[4]=630,p[5]=480,p[6]=0,p[7]=480,p[8]=0,p[9]=0;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);





    int j;
     setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(150);
outtextxy(240,120,"u");
delay(150);
outtextxy(250,120,"i");
delay(150);
outtextxy(257,120,"d");
delay(150);
outtextxy(268,120,"e");
delay(150);
outtextxy(280,120,"d");
delay(150);
outtextxy(297,120,"B");
delay(150);
outtextxy(308,120,"y");

setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(45);
outtextxy(240,120,"u");
delay(45);
outtextxy(250,120,"i");
delay(45);
outtextxy(257,120,"d");
delay(45);
outtextxy(268,120,"e");
delay(45);
outtextxy(280,120,"d");
delay(45);
outtextxy(297,120,"B");
delay(45);
outtextxy(308,120,"y");

setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(100);
outtextxy(240,120,"u");
delay(100);
outtextxy(250,120,"i");
delay(100);
outtextxy(257,120,"d");
delay(100);
outtextxy(268,120,"e");
delay(100);
outtextxy(280,120,"d");
delay(100);
outtextxy(297,120,"B");
delay(100);
outtextxy(308,120,"y");

setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(45);
outtextxy(240,120,"u");
delay(45);
outtextxy(250,120,"i");
delay(45);
outtextxy(257,120,"d");
delay(45);
outtextxy(268,120,"e");
delay(45);
outtextxy(280,120,"d");
delay(45);
outtextxy(297,120,"B");
delay(45);
outtextxy(308,120,"y");

setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(100);
outtextxy(240,120,"u");
delay(100);
outtextxy(250,120,"i");
delay(100);
outtextxy(257,120,"d");
delay(100);
outtextxy(268,120,"e");
delay(100);
outtextxy(280,120,"d");
delay(100);
outtextxy(297,120,"B");
delay(100);
outtextxy(308,120,"y");



for(int m=10;m<350;m++)
{
setcolor(GREEN);
settextstyle(2,0,5);
outtextxy(m,150,"Miss Sindhu");
setcolor(BLACK);

outtextxy(m-1,150,"Miss Anju");

delay(2);
}
setcolor(LIGHTGREEN);
outtextxy(349,150,"Miss Anju");




 delay(2000);
for(m=10;m<255;m++)
{
settextstyle(2,0,5);
setcolor(LIGHTGREEN );
outtextxy(m*3,120,"ÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,120,"ÛÛÛ");
}


setcolor(BLACK);
settextstyle(2,0,6);
outtextxy(230,120,"G");
delay(100);
outtextxy(240,120,"u");
delay(100);
outtextxy(250,120,"i");
delay(100);
outtextxy(257,120,"d");
delay(100);
outtextxy(268,120,"e");
delay(100);
outtextxy(280,120,"d");
delay(100);
outtextxy(297,120,"B");
delay(100);
outtextxy(308,120,"y");


for(m=10,j=m+1;m<350;m++,j++)
{
setcolor(GREEN);
settextstyle(2,0,5);
outtextxy(m,150,"Bimal Joseph");
setcolor(BLACK);
outtextxy(m-1,150,"Bimal Joseph");
setcolor(LIGHTGREEN);
outtextxy(m*3,150,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,150,"ÛÛÛÛ");

setcolor(GREEN);
settextstyle(2,0,5);
outtextxy(m,180,"Prashob S");
setcolor(BLACK);
outtextxy(m-1,180,"Prashob S");
setcolor(LIGHTGREEN);
outtextxy(m*3,180,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,180,"ÛÛÛÛ");


}
setcolor(LIGHTGREEN);
outtextxy(349,150,"Bimal Joseph");
setcolor(LIGHTGREEN);
outtextxy(349,180,"Prashob S");





setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(150);
outtextxy(240,120,"e");
delay(150);
outtextxy(250,120,"v");
delay(150);
outtextxy(257,120,"e");
delay(150);
outtextxy(268,120,"l");
delay(150);
outtextxy(274,120,"o");
delay(150);
outtextxy(285,120,"p");
delay(150);
outtextxy(295,120,"e");
delay(150);
outtextxy(304,120,"d");
delay(150);
outtextxy(319,120,"B");
delay(150);
outtextxy(328,120,"y");



setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(45);
outtextxy(240,120,"e");
delay(45);
outtextxy(250,120,"v");
delay(45);
outtextxy(257,120,"e");
delay(45);
outtextxy(268,120,"l");
delay(45);
outtextxy(274,120,"o");
delay(45);
outtextxy(285,120,"p");
delay(45);
outtextxy(295,120,"e");
delay(45);
outtextxy(304,120,"d");
delay(45);
outtextxy(319,120,"B");
delay(45);
outtextxy(328,120,"y");



setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(100);
outtextxy(240,120,"e");
delay(100);
outtextxy(250,120,"v");
delay(100);
outtextxy(257,120,"e");
delay(100);
outtextxy(268,120,"l");
delay(100);
outtextxy(274,120,"o");
delay(100);
outtextxy(285,120,"p");
delay(100);
outtextxy(295,120,"e");
delay(100);
outtextxy(304,120,"d");
delay(100);
outtextxy(319,120,"B");
delay(100);
outtextxy(328,120,"y");

setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(45);
outtextxy(240,120,"e");
delay(45);
outtextxy(250,120,"v");
delay(45);
outtextxy(257,120,"e");
delay(45);
outtextxy(268,120,"l");
delay(45);
outtextxy(274,120,"o");
delay(45);
outtextxy(285,120,"p");
delay(45);
outtextxy(295,120,"e");
delay(45);
outtextxy(304,120,"d");
delay(45);
outtextxy(319,120,"B");
delay(45);
outtextxy(328,120,"y");

setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(100);
outtextxy(240,120,"e");
delay(100);
outtextxy(250,120,"v");
delay(100);
outtextxy(257,120,"e");
delay(100);
outtextxy(268,120,"l");
delay(100);
outtextxy(274,120,"o");
delay(100);
outtextxy(285,120,"p");
delay(100);
outtextxy(295,120,"e");
delay(100);
outtextxy(304,120,"d");
delay(100);
outtextxy(319,120,"B");
delay(100);
outtextxy(328,120,"y");
delay(2000);
for(m=10;m<255;m++)
{
settextstyle(2,0,5);
setcolor(LIGHTGREEN );
outtextxy(m*3,120,"ÛÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,120,"ÛÛÛÛÛ");
}
setcolor(BLACK);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(100);
outtextxy(240,120,"e");
delay(100);
outtextxy(250,120,"v");
delay(100);
outtextxy(257,120,"e");
delay(100);
outtextxy(268,120,"l");
delay(100);
outtextxy(274,120,"o");
delay(100);
outtextxy(285,120,"p");
delay(100);
outtextxy(295,120,"e");
delay(100);
outtextxy(304,120,"d");
delay(100);
outtextxy(319,120,"B");
delay(100);
outtextxy(328,120,"y");


for(m=10;m<350;m++)
{
setcolor(LIGHTGREEN);
settextstyle(2,0,5);
outtextxy(m,150,"OOP In Turbo C++");
setcolor(BLACK);
outtextxy(m-1,150,"OOP In Turbo C++");
setcolor(LIGHTGREEN);
outtextxy(m*3,150,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,150,"ÛÛÛÛ");

setcolor(LIGHTGREEN);
outtextxy(m,180,"By Robert Lafore");
setcolor(BLACK);
outtextxy(m-1,180,"By Robert Lafore");
setcolor(LIGHTGREEN);
outtextxy(m*3,180,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,180,"ÛÛÛÛ");

 }






setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(150);
outtextxy(240,120,"i");
delay(150);
outtextxy(250,120,"b");
delay(150);
outtextxy(261,120,"l");
delay(150);
outtextxy(268,120,"o");
delay(150);
outtextxy(276,120,"g");
delay(150);
outtextxy(285,120,"r");
delay(150);
outtextxy(295,120,"a");
delay(150);
outtextxy(304,120,"p");
delay(150);
outtextxy(319,120,"h");
delay(150);
outtextxy(328,120,"y");



setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(45);
outtextxy(240,120,"i");
delay(45);
outtextxy(250,120,"b");
delay(45);
outtextxy(261,120,"l");
delay(45);
outtextxy(268,120,"o");
delay(45);
outtextxy(276,120,"g");
delay(45);
outtextxy(285,120,"r");
delay(45);
outtextxy(295,120,"a");
delay(45);
outtextxy(304,120,"p");
delay(45);
outtextxy(319,120,"h");
delay(45);
outtextxy(328,120,"y");



setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(150);
outtextxy(240,120,"i");
delay(150);
outtextxy(250,120,"b");
delay(150);
outtextxy(261,120,"l");
delay(150);
outtextxy(268,120,"o");
delay(150);
outtextxy(276,120,"g");
delay(150);
outtextxy(285,120,"r");
delay(150);
outtextxy(295,120,"a");
delay(150);
outtextxy(304,120,"p");
delay(150);
outtextxy(319,120,"h");
delay(150);
outtextxy(328,120,"y");


setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(45);
outtextxy(240,120,"i");
delay(45);
outtextxy(250,120,"b");
delay(45);
outtextxy(261,120,"l");
delay(45);
outtextxy(268,120,"o");
delay(45);
outtextxy(276,120,"g");
delay(45);
outtextxy(285,120,"r");
delay(45);
outtextxy(295,120,"a");
delay(45);
outtextxy(304,120,"p");
delay(45);
outtextxy(319,120,"h");
delay(45);
outtextxy(328,120,"y");



setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(150);
outtextxy(240,120,"i");
delay(150);
outtextxy(250,120,"b");
delay(150);
outtextxy(261,120,"l");
delay(150);
outtextxy(268,120,"o");
delay(150);
outtextxy(276,120,"g");
delay(150);
outtextxy(285,120,"r");
delay(150);
outtextxy(295,120,"a");
delay(150);
outtextxy(304,120,"p");
delay(150);
outtextxy(319,120,"h");
delay(150);
outtextxy(328,120,"y");





for(m=10;m<350;m++)
{
setcolor(LIGHTGREEN);
settextstyle(2,0,5);
outtextxy(m,150,"RPS");
setcolor(BLACK);
outtextxy(m-1,150,"RPS");
setcolor(LIGHTGREEN);
outtextxy(m*3,150,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,150,"ÛÛÛÛ");

setcolor(LIGHTGREEN);
outtextxy(m,180,"Labortary");
setcolor(BLACK);
outtextxy(m-1,180,"Labortary");
setcolor(LIGHTGREEN);
outtextxy(m*3,180,"ÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,180,"ÛÛÛÛ");

 }

for(m=10;m<255;m++)
{
settextstyle(2,0,5);
setcolor(LIGHTGREEN );
outtextxy(m*3,120,"ÛÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,120,"ÛÛÛÛÛ");
}


setcolor(BLACK);
settextstyle(2,0,6);
outtextxy(230,120,"B");
delay(150);
outtextxy(240,120,"i");
delay(150);
outtextxy(250,120,"b");
delay(150);
outtextxy(261,120,"l");
delay(150);
outtextxy(268,120,"o");
delay(150);
outtextxy(276,120,"g");
delay(150);
outtextxy(285,120,"r");
delay(150);
outtextxy(295,120,"a");
delay(150);
outtextxy(304,120,"p");
delay(150);
outtextxy(319,120,"h");
delay(150);
outtextxy(328,120,"y");





setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(150);
outtextxy(240,120,"e");
delay(150);
outtextxy(250,120,"v");
delay(150);
outtextxy(261,120,"e");
delay(150);
outtextxy(268,120,"l");
delay(150);
outtextxy(276,120,"o");
delay(150);
outtextxy(285,120,"p");
delay(150);
outtextxy(295,120,"e");
delay(150);
outtextxy(304,120,"d");
delay(150);
outtextxy(319,120,"A");
delay(150);
outtextxy(328,120,"t");



setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(45);
outtextxy(240,120,"e");
delay(45);
outtextxy(250,120,"v");
delay(45);
outtextxy(261,120,"e");
delay(45);
outtextxy(268,120,"l");
delay(45);
outtextxy(276,120,"o");
delay(45);
outtextxy(285,120,"p");
delay(45);
outtextxy(295,120,"e");
delay(45);
outtextxy(304,120,"d");
delay(45);
outtextxy(319,120,"A");
delay(45);
outtextxy(328,120,"t");



setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(150);
outtextxy(240,120,"e");
delay(150);
outtextxy(250,120,"v");
delay(150);
outtextxy(261,120,"e");
delay(150);
outtextxy(268,120,"l");
delay(150);
outtextxy(276,120,"o");
delay(150);
outtextxy(285,120,"p");
delay(150);
outtextxy(295,120,"e");
delay(150);
outtextxy(304,120,"d");
delay(150);
outtextxy(319,120,"A");
delay(150);
outtextxy(328,120,"t");


setcolor(LIGHTGREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(45);
outtextxy(240,120,"e");
delay(45);
outtextxy(250,120,"v");
delay(45);
outtextxy(261,120,"e");
delay(45);
outtextxy(268,120,"l");
delay(45);
outtextxy(276,120,"o");
delay(45);
outtextxy(285,120,"p");
delay(45);
outtextxy(295,120,"e");
delay(45);
outtextxy(304,120,"d");
delay(45);
outtextxy(319,120,"A");
delay(45);
outtextxy(328,120,"t");



setcolor(GREEN);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(150);
outtextxy(240,120,"e");
delay(150);
outtextxy(250,120,"v");
delay(150);
outtextxy(261,120,"e");
delay(150);
outtextxy(268,120,"l");
delay(150);
outtextxy(276,120,"o");
delay(150);
outtextxy(285,120,"p");
delay(150);
outtextxy(295,120,"e");
delay(150);
outtextxy(304,120,"d");
delay(150);
outtextxy(319,120,"A");
delay(150);
outtextxy(328,120,"t");



for(m=10;m<255;m++)
{
settextstyle(2,0,5);
setcolor(LIGHTGREEN );
outtextxy(m*3,120,"ÛÛÛÛÛ");
setcolor(BLACK);
delay(1);
outtextxy(m*3 ,120,"ÛÛÛÛÛ");
}





setcolor(BLACK);
settextstyle(2,0,6);
outtextxy(230,120,"D");
delay(150);
outtextxy(240,120,"e");
delay(150);
outtextxy(250,120,"v");
delay(150);
outtextxy(261,120,"e");
delay(150);
outtextxy(268,120,"l");
delay(150);
outtextxy(276,120,"o");
delay(150);
outtextxy(285,120,"p");
delay(150);
outtextxy(295,120,"e");
delay(150);
outtextxy(304,120,"d");
delay(150);
outtextxy(319,120,"A");
delay(150);
outtextxy(328,120,"t");



for(int i=1;i<30;i++)
{
   setcolor(BLACK);
 p[0]=0,p[1]=30,p[2]=630,p[3]=30,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=30;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);


setcolor(GREEN);
moveto(10,1+(i*2));
settextstyle(2,1,6);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor(LIGHTGREEN);
moveto(10,1+(i*9 ));
settextstyle(2,1,5);
 outtext("@ÛÛ@#");





setcolor(GREEN);
//outtext("1");
moveto(30,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" 1 0 01 10 101 011 01 01 101 101 01 01 101 0 101 010 101 010 10110  0110 101 1010 011 0  01 0101 010 0101 010  011 010 101 001 0101 010  01101 10 10 101 10  01101 0110 101 0 01  0 0101 010 011 0 010 010 010 0101 0 101 010 0 10  010");
setcolor(LIGHTGREEN);
moveto(30,1+(i*12 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@#@#");





setcolor(GREEN);
//outtext("1");
moveto(50,1+(i*9));
settextstyle(2,1,7);
//delay(30);
 outtext("  E    D 3F E R T  !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor (LIGHTGREEN);
moveto(50,1+(i*10 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");






setcolor(LIGHTGREEN);
moveto(80,1+(i*15 ));
settextstyle(2,1,5);
//delay(30);
 outtext("$ÛÛE");

setcolor(GREEN);
//outtext("1");
moveto(100,1+(i*7));
settextstyle(2,1,7);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");




 setcolor(LIGHTGREEN);
moveto(135,1+(i*10 ));
settextstyle(11,1,10);
//delay(30);
 outtext("10@#@");
setcolor(GREEN);
//outtext("1");
moveto(120,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");
			 //NEW  NEW

 setcolor(LIGHTGREEN);
moveto(140,1+(i*20 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");


 setcolor(LIGHTGREEN);
moveto(160,1+(i*3 ));
settextstyle(2,1,5);
//delay(30);
 outtext("                                     10@#@");
setcolor(GREEN);
//outtext("1");
moveto(160,1+(i*2));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");

 setcolor(LIGHTGREEN);
moveto(180,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext("               ÛÛÛÛ1Û@");
setcolor(GREEN);
//outtext("1");
moveto(180,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");




 setcolor(LIGHTGREEN);
moveto(210,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext(" ÛÛÛÛÛ              ÛÛÛÛ1Û@");

setcolor(GREEN);
//outtext("1");
moveto(210,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext(" 10 01 110 01010 0101 101 111011 010101 01101 0101 1010101 0101010 00001110 101 0101 001010 0 01");



 setcolor(LIGHTGREEN);
moveto(220,1+(i*12));
settextstyle(2,1,5);
//delay(30);
 outtext("   Û     ÛÛÛ ");

setcolor(GREEN);
//outtext("1");
moveto(220,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext("        453 984 0 49-9-34 KTG -G3-=3 =3G2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0" );


 setcolor(LIGHTGREEN);
moveto(235,1+(i*10));
settextstyle(2,1,5);
//delay(30);
 outtext("    ÛÛ        ÛÛ           ÛÛÛÛÛ   ");


setcolor(GREEN);
//outtext("1");
moveto(235,1+(i*10));
settextstyle(2,1,6);
//delay(30);
 outtext("  2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0 013 JD MATRIX");




 setcolor(LIGHTGREEN);
moveto(285,1+(i*30));
settextstyle(2,1,6);
//delay(30);
 outtext("    ÛÛÛÛÛÛÛÛÛ   ");

 setcolor(GREEN);
moveto(270,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext("$10 010 0101 010 01 10 101 101010 01 010 10 10 101 101 0100 1010010 10 01@@3E");

setcolor(GREEN);
//outtext("1");
moveto(300,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext(" E@$%@^ @^%@^@ 6@%^@^ !@^%              @@^%^ @^@^^&#^%&@*&@( D 3F E R 10 01010 01010 01010 010 010 10 0101010 010 1010 10 1 $@ #@ @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(325,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");

setcolor(LIGHTGREEN);
moveto(330,1+(i*9));
settextstyle(11,1,6);
//delay(30);
 outtext("101010");



setcolor(GREEN);
//outtext("1");
moveto(345,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext(" 10 010 010 1010 0101 010 10 10 1010 1010 10 101 010101 01 010 10101 01 010 10 101 0101 0101 010110 1 10101 10 0110 10 1101 10 01 01 10 01101  110110  101 01 01 0101010 10 010101 0 101010 10101 010 10 101 010 1 010 1 0 10 01  001 01010  101 101001");
setcolor(LIGHTGREEN);
moveto(375,1+(i*18 ));
settextstyle(11,1,6);
//delay(30);
 outtext("0111010 010 01");



setcolor(GREEN);
//outtext("1");
moveto(380,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");

setcolor(LIGHTGREEN);
moveto(400,1+(i*12));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛÛÛÛÛ            101010           ÛÛÛÛÛÛ");



 setcolor(GREEN);
moveto(410,1+(i*5));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


 setcolor(GREEN);
moveto(435,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


setcolor(LIGHTGREEN);
//outtext("1");
moveto(450,1+(i*10));
settextstyle(11,1,5);
//delay(30);
 outtext("00101           001010 ");


setcolor(GREEN);
//outtext("1");
moveto(480,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(490,1+(i*11));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛ ");


setcolor(GREEN);
//outtext("1");
moveto(510,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");


setcolor(GREEN);
//outtext("1");
moveto(535,1+(i*5));
settextstyle(2,1,6);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(545,1+(i*24));
settextstyle(2,1,6);
//delay(30);
 outtext("902áàáàâÝ");


setcolor(GREEN);
//outtext("1");
moveto(560,1+(i*7));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(580,1+(i*3));
settextstyle(2,1,5);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");
setcolor(LIGHTGREEN);
//outtext("1");
moveto(590,1+(i*27));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");

setcolor(GREEN);
//outtext("1");
moveto(600,1+(i*2));
settextstyle(2,1,7);
//delay(30);

  outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");

 setcolor(LIGHTGREEN);
//outtext("1");
moveto(610,1+(i*28));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");


}

   setcolor(BLACK);
 p[0]=0,p[1]=30,p[2]=630,p[3]=30,p[4]=630,p[5]=475,p[6]=0,p[7]=475,p[8]=0,p[9]=30;
 setfillstyle(SOLID_FILL,BLACK);
 fillpoly(5,p);

setcolor(GREEN);
//outtext("1");
moveto(10,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor(LIGHTGREEN);
moveto(10,1+(i*9 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@ÛÛ@#");





setcolor(GREEN);
//outtext("1");
moveto(30,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" 1 0 01 10 101 011 01 01 101 101 01 01 101 0 101 010 101 010 10110  0110 101 1010 011 0  01 0101 010 0101 010  011 010 101 001 0101 010  01101 10 10 101 10  01101 0110 101 0 01  0 0101 010 011 0 010 010 010 0101 0 101 010 0 10  010");
setcolor(LIGHTGREEN);
moveto(30,1+(i*12 ));
settextstyle(2,1,5);
//delay(30);
 outtext("@#@#");





setcolor(GREEN);
//outtext("1");
moveto(50,1+(i*9));
settextstyle(2,1,7);
//delay(30);
 outtext("  E    D 3F E R T  !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");
setcolor (LIGHTGREEN);
moveto(50,1+(i*10 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");






setcolor(LIGHTGREEN);
moveto(80,1+(i*15 ));
settextstyle(2,1,5);
//delay(30);
 outtext("$ÛÛE");

setcolor(GREEN);
//outtext("1");
moveto(100,1+(i*7));
settextstyle(2,1,7);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");




 setcolor(LIGHTGREEN);
moveto(135,1+(i*10 ));
settextstyle(11,1,10);
//delay(30);
 outtext("10@#@");
setcolor(GREEN);
//outtext("1");
moveto(120,1+(i*4));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");
			 //NEW  NEW

 setcolor(LIGHTGREEN);
moveto(140,1+(i*20 ));
settextstyle(2,1,5);
//delay(30);
 outtext("ÛÛÛÛ");


 setcolor(LIGHTGREEN);
moveto(160,1+(i*3 ));
settextstyle(2,1,5);
//delay(30);
 outtext("                                     10@#@");
setcolor(GREEN);
//outtext("1");
moveto(160,1+(i*2));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@   @t g      @#@");

 setcolor(LIGHTGREEN);
moveto(180,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext("               ÛÛÛÛ1Û@");
setcolor(GREEN);
//outtext("1");
moveto(180,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");




 setcolor(LIGHTGREEN);
moveto(210,1+(i*7 ));
settextstyle(2,1,5);
//delay(30);
 outtext(" ÛÛÛÛÛ              ÛÛÛÛ1Û@");

setcolor(GREEN);
//outtext("1");
moveto(210,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext(" 10 01 110 01010 0101 101 111011 010101 01101 0101 1010101 0101010 00001110 101 0101 001010 0 01");



 setcolor(LIGHTGREEN);
moveto(220,1+(i*12));
settextstyle(2,1,5);
//delay(30);
 outtext("   Û     ÛÛÛ ");

setcolor(GREEN);
//outtext("1");
moveto(220,1+(i*2));
settextstyle(2,1,5);
//delay(30);
 outtext("        453 984 0 49-9-34 KTG -G3-=3 =3G2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0" );


 setcolor(LIGHTGREEN);
moveto(235,1+(i*10));
settextstyle(2,1,5);
//delay(30);
 outtext("    ÛÛ        ÛÛ           ÛÛÛÛÛ   ");


setcolor(GREEN);
//outtext("1");
moveto(235,1+(i*10));
settextstyle(2,1,6);
//delay(30);
 outtext("  2\P BK9B437 HN 37  4764393 F4H74Y84 HGN3G4 JNG 4 GRJ9 M8J4OI4M0 9 4M0GG09 3KGP  010  0 013 JD MATRIX");




 setcolor(LIGHTGREEN);
moveto(285,1+(i*30));
settextstyle(2,1,6);
//delay(30);
 outtext("    ÛÛÛÛÛÛÛÛÛ   ");

 setcolor(GREEN);
moveto(270,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext("$10 010 0101 010 01 10 101 101010 01 010 10 10 101 101 0100 1010010 10 01@@3E");

setcolor(GREEN);
//outtext("1");
moveto(300,1+(i*6));
settextstyle(2,1,6);
//delay(30);
 outtext(" E@$%@^ @^%@^@ 6@%^@^ !@^%              @@^%^ @^@^^&#^%&@*&@( D 3F E R 10 01010 01010 01010 010 010 10 0101010 010 1010 10 1 $@ #@ @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(325,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U I2 2G ER 4R E5 D7 4D D4 YT 7Y6 6Y8 6 YY Y6 Y65 6 6Y RE 7ER RE6 RT  RT TR5  55Y YH UJJJ JUJ JUJ JUJ JUJ DFD G5 55 5TT  RT TRT TRTR RTRT  TRT TRTR TRT TRT THYHY YHY 22@@ @@ @@ @@ !! @@# $$ #@# $@ #$@$@ $@ #@ @tg @#@");

setcolor(LIGHTGREEN);
moveto(330,1+(i*9));
settextstyle(11,1,6);
//delay(30);
 outtext("101010");



setcolor(GREEN);
//outtext("1");
moveto(345,1+(i*4));
settextstyle(2,1,6);
//delay(30);
 outtext(" 10 010 010 1010 0101 010 10 10 1010 1010 10 101 010101 01 010 10101 01 010 10 101 0101 0101 010110 1 10101 10 0110 10 1101 10 01 01 10 01101  110110  101 01 01 0101010 10 010101 0 101010 10101 010 10 101 010 1 010 1 0 10 01  001 01010  101 101001");
setcolor(LIGHTGREEN);
moveto(375,1+(i*18 ));
settextstyle(11,1,6);
//delay(30);
 outtext("0111010 010 01");



setcolor(GREEN);
//outtext("1");
moveto(380,1+(i*2));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");

setcolor(LIGHTGREEN);
moveto(400,1+(i*12));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛÛÛÛÛ            101010           ÛÛÛÛÛÛ");



 setcolor(GREEN);
moveto(410,1+(i*5));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


 setcolor(GREEN);
moveto(435,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext("áàÝâäêáêëëá àÝâäêáê ëëáàÝâ äêáêëëá àÝâäêáê ëëáàÝâä êáêëëá àÝâäêá êëë á àÝâä êáê  áàÝâä êáêëë áàÝâä êáêëëë ëþ");


setcolor(LIGHTGREEN);
//outtext("1");
moveto(450,1+(i*10));
settextstyle(11,1,5);
//delay(30);
 outtext("00101           001010 ");


setcolor(GREEN);
//outtext("1");
moveto(480,1+(i*3));
settextstyle(2,1,7);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(490,1+(i*11));
settextstyle(11,1,5);
//delay(30);
 outtext("ÛÛ ");


setcolor(GREEN);
//outtext("1");
moveto(510,1+(i*3));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");


setcolor(GREEN);
//outtext("1");
moveto(535,1+(i*5));
settextstyle(2,1,6);
//delay(30);
 outtext(" ÛÛÛÛÛÛÛ9ÛÛÛÛ2À2E@$%@^ @^%@^@ 6@%^@^ !@^% @@^%^ @^@^^&#^%&@*&@ D 3F E R  #@ @tg @#@");

setcolor(LIGHTGREEN);
//outtext("1");
moveto(545,1+(i*24));
settextstyle(2,1,6);
//delay(30);
 outtext("902áàáàâÝ");


setcolor(GREEN);
//outtext("1");
moveto(560,1+(i*7));
settextstyle(2,1,6);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");



setcolor(GREEN);
//outtext("1");
moveto(580,1+(i*3));
settextstyle(2,1,5);
//delay(30);
 outtext(" E D 3F E R T Y U 1010 01010 0101 01010 010 010 10 0101 100101 0101010 01010 01 0101 010101 010 10101  10101 1 10101  10 @tg @#@");
setcolor(LIGHTGREEN);
//outtext("1");
moveto(590,1+(i*27));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");

setcolor(GREEN);
//outtext("1");
moveto(600,1+(i*2));
settextstyle(2,1,7);
//delay(30);

  outtext(" E#E @$$ #@$@ #$@$@ $@#@  @%@%% @% @525 @%!^^ !%@^% !%@$&@$ !6!4 @%@ @t g   @#@");

 setcolor(LIGHTGREEN);
//outtext("1");
moveto(610,1+(i*28));
settextstyle(2,1,6);
//delay(30);
 outtext("ÛÛÛÛÛÛ");


int sq[40];
setcolor(LIGHTGREEN);
sq[0]=200,sq[1]=200,sq[2]=400,sq[3]=200,sq[4]=400,sq[5]=240,sq[6]=200,sq[7]=240,sq[8]=200,sq[9]=200;
setfillstyle(SOLID_FILL,BLACK);
fillpoly(5,sq);
settextstyle(11,0,2);
outtextxy(365,217,"PROGRAM TERMINATED");
delay(3500);
setcolor(LIGHTGREEN);
sq[0]=200,sq[1]=200,sq[2]=400,sq[3]=200,sq[4]=400,sq[5]=240,sq[6]=200,sq[7]=240,sq[8]=200,sq[9]=200;
setfillstyle(SOLID_FILL,BLACK);
fillpoly(5,sq);
settextstyle(11,0,2);
outtextxy(240,217,"T");
delay(150);
outtextxy(255,217,"H");
delay(150);
outtextxy(270,217,"E");
delay(150);
outtextxy(310,217,"E");
delay(150);
outtextxy(325,217,"N");
delay(150);
outtextxy(340,217,"D");

delay(500);
getch();
//    closegraph();

 }