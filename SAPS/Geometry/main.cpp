#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<iomanip.h>
#include<math.h>
void main()
{
	int m;
	a:
	clrscr();
	cout<<"\tWelcome To Interactive Educational Program\n";
	getch();
	cout<<"\n\tGeometrical Shapes\n1.Triangle\n2.Circle\n3.Square\n4.Rectangle\n5.Parallelogram\n6.Exit\nEnter your choice(1-6):";
	cin>>m;
	switch(m)
	{
		case 1:
		{
			int m1;
			t:
			clrscr();
			cout<<"\tTriangle\n1.Perimeter\n2.Area(1/2bh)\n3.Area(Hero's Formulae)\n4.Back\nEnter your choice(1-4):";
			cin>>m1;
			switch(m1)
			{
				case 1:
				{
					float a,b,c,p;
					t1:
					clrscr();
					cout<<"\tPerimeter of a triangle\nEnter three sides:";
					cin>>a>>b>>c;
					p=a+b+c;
					cout<<"Perimeter = "<<setprecision(3)<<p;
					t1w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto t;
						case 'n':
						case 'N':
							goto t1;
						default:
							cout<<"Wrong input";
							goto t1w;
					}
				}
				case 2:
				{
					float b,h,a;
					t2:
					clrscr();
					cout<<"\tArea of a triangle\nEnter base & height:";
					cin>>b>>h;
					a=(b*h)/2;
					cout<<"Area = "<<setprecision(3)<<a;
					t2w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto t;
						case 'n':
						case 'N':
							goto t2;
						default:
							cout<<"Wrong input";
							goto t2w;
					}
				}
				case 3:
				{
					float a,b,c,ar,s;
					t3:
					clrscr();
					cout<<"\tArea of a triangle\nEnter three sides:";
					cin>>a>>b>>c;
					s=(a+b+c)/2;
					ar=sqrt(s*(s-a)*(s-b)*(s-c));
					cout<<"Area = "<<setprecision(3)<<ar;
					t3w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto t;
						case 'n':
						case 'N':
							goto t3;
						default:
							cout<<"Wrong input";
							goto t3w;
					}
				}
				case 4:
					goto a;
				default:
					cout<<"Wrong input.";
					getch();
					goto t;
			}
		}
		case 2:;
		{
			float pi=3.142;
			int m2;
			c:
			clrscr();
			cout<<"\tCircle\n1.Pie\n2.Circumference\n3.Area\n4.Back\nEnter your choice(1-4):";
			cin>>m2;
			switch(m2)
			{
				case 1:
					float d,c,p;
					c1:
					clrscr();
					cout<<"\tPie\nEnter diameter & circumference:";
					cin>>d>>c;
					p=c/d;
					if(p>=3.13&&p<=3.16)
					{
						cout<<"Pie = "<<setprecision(3)<<p<<"\nThe value is approximately correct.";
					}
					else
						cout<<"Pie = "<<setprecision(3)<<p<<"\nThe value is wrong\nSo a circle with diameter "<<d<<" & circumference "<<c<<" is not possible";
					c1w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto c;
						case 'n':
						case 'N':
							goto c1;
						default:
							cout<<"Wrong input";
							goto c1w;
					}
				case 2:
				{
					float r,c;
					c2:
					clrscr();
					cout<<"\tCircuference of a circle\nEnter radius:";
					cin>>r;
					c=pi*r*2;
					cout<<"Circumference = "<<setprecision(3)<<c;
					c2w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto c;
						case 'n':
						case 'N':
							goto c2;
						default:
							cout<<"Wrong input";
							goto c2w;
					}
				}
				case 3:
				{
					float r,a;
					c3:
					clrscr();
					cout<<"\tArea of a Circle\nEnter radius:";
					cin>>r;
					a=pi*r*r;
					cout<<"Area = "<<setprecision(3)<<a;
					c3w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto c;
						case 'n':
						case 'N':
							goto c3;
						default:
							cout<<"Wrong input";
							goto c3w;
					}
				}
				case 4:
					goto a;
				default:
					cout<<"Wrong input.";
					getch();
					goto c;
			}
		}
		case 3:
		{
			int m3;
			s:
			clrscr();
			cout<<"\tSquare\n1.Perimeter\n2.Area\n3.Back\nEnter your choice(1-3):";
			cin>>m3;
			switch(m3)
			{
				case 1:
				{
					float a,p;
					s1:
					clrscr();
					cout<<"\tPerimeter of a Square\nEnter side:";
					cin>>a;
					p=4*a;
					cout<<"Perimeter = "<<setprecision(3)<<p;
					s1w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto s;
						case 'n':
						case 'N':
							goto s1;
						default:
							cout<<"Wrong input";
							goto s1w;
					}
				}
				case 2:
				{
					float a,ar;
					s2:
					clrscr();
					cout<<"\tArea of a Square\nEnter side:";
					cin>>a;
					ar=a*a;
					cout<<"Area = "<<setprecision(3)<<ar;
					s2w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto s;
						case 'n':
						case 'N':
							goto s2;
						default:
							cout<<"Wrong input";
							goto s2w;
					}
				}
				case 3:
					goto a;
				default:
					cout<<"Wrong input.";
					getch();
					goto s;
			}
		}
		case 4:
		{
			int m4;
			r:
			clrscr();
			cout<<"\tRectangle\n1.Perimeter\n2.Area\n3.Back\nEnter your choice(1-3):";
			cin>>m4;
			switch(m4)
			{
				case 1:
				{
					float l,b,p;
					r1:
					clrscr();
					cout<<"\tPerimeter of a Rectangle\nEnter length & breadth:";
					cin>>l>>b;
					p=2*(l+b);
					cout<<"Perimeter = "<<setprecision(3)<<p;
					r1w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto r;
						case 'n':
						case 'N':
							goto r1;
						default:
							cout<<"Wrong input";
							goto r1w;
					}
				}
				case 2:
				{
					float l,b,ar;
					r2:
					clrscr();
					cout<<"\tArea of a Rectangle\nEnter length & breadth:";
					cin>>l>>b;
					ar=l*b;
					cout<<"Area = "<<setprecision(3)<<ar;
					r2w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto r;
						case 'n':
						case 'N':
							goto r2;
						default:
							cout<<"Wrong input";
							goto r2w;
					}
				}
				case 3:
					goto a;
				default:
					cout<<"Wrong input.";
					getch();
					goto r;
			}
		}
		case 5:
		{
			int m5;
			p:
			clrscr();
			cout<<"\tParallelogram\n1.Perimeter\n2.Area\n3.Back\nEnter your choice(1-3):";
			cin>>m5;
			switch(m5)
			{
				case 1:
				{
					float b,h,p;
					p1:
					clrscr();
					cout<<"\tPerimeter of a Parallelogram\nEnter 2 adjacent sides:";
					cin>>b>>h;
					p=2*(b+h);
					cout<<"Perimeter = "<<setprecision(3)<<p;
					p1w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto p;
						case 'n':
						case 'N':
							goto p1;
						default:
							cout<<"Wrong input";
							goto p1w;
					}
				}
				case 2:
				{
					float b,h,ar;
					p2:
					clrscr();
					cout<<"\tArea of a Parallelogram\nEnter base & height:";
					cin>>b>>h;
					ar=b*h;
					cout<<"Area = "<<setprecision(3)<<ar;
					p2w:
					cout<<"\nDo you want to go to pervious menu(y/n):";
					char ch;
					cin>>ch;
					switch(ch)
					{
						case 'y':
						case 'Y':
							goto p;
						case 'n':
						case 'N':
							goto p2;
						default:
							cout<<"Wrong input";
							goto p2w;
					}
				}
				case 3:
					goto a;
				default:
					cout<<"Wrong input.";
					getch();
					goto p;
			}
		}
		case 6:
			clrscr();
			cout<<"\tDeveloped by 4Knights digital solutions";
			getch();
			_exit(0);
		default:
			cout<<"Wrong input.";
			getch();
         goto a;
	}
}
