#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	top:
	clrscr();
	int m,m1,m2,m3,m4;
	cout<<"1.Binary\n2.Octal\n3.Decimal\n4.Hexa-Decimal\n5.Exit\nEnter your choice :";
	cin>>m;
	switch(m)
	{
		case 1:
		{
			clrscr();
			cout<<"1.Octal\n2.Decimal\n3.Hexa-Decimal\nEnter your choice :";
			cin>>m1;
			cout<<"Enter a Binary Number :";
			long int bin;
			cin>>bin;
			switch(m1)
			{
				case 1:
				{
					for(int dec=0,i=0;bin>0;i++,bin/=10)
						dec+=(bin%10)*pow(2,i);
					int oct=0;
					for(i=0;dec>0;i++,dec/=8)
						oct+=(dec%8)*pow(10,i);
					cout<<"Octal equivalent :"<<oct;
					getch();
					goto top;
				}
				case 2:
				{
					for(int dec=0,i=0;bin>0;i++,bin/=10)
						dec+=(bin%10)*pow(2,i);
					cout<<"Decimal equivalent :"<<dec;
					getch();
					goto top;
				}
				case 3:
				{
					for(int dec=0,i=0;bin>0;i++,bin/=10)
						dec+=(bin%10)*pow(2,i);
					int t[10];
					char hex[10];
					for(i=0;dec>0;i++,dec/=16)
					{
						t[i]=dec%16;
						switch(t[i])
						{
							case 10:
								hex[i]='A';
								break;
							case 11:
								hex[i]='B';
								break;
							case 12:
								hex[i]='C';
								break;
							case 13:
								hex[i]='D';
								break;
							case 14:
								hex[i]='E';
								break;
							case 15:
								hex[i]='F';
								break;
							default:
								t[i]+=48;
								hex[i]=(char)t[i];
								break;
						}
					}
					cout<<"Hexa-Decimal equivalent :";
					for(i=i-1;i>=0;i--)
						cout<<hex[i];
					getch();
					goto top;
				}
				default:
					cout<<"Wrong Choice";
					getch();
					goto top;
			}
		}
		case 2:
		{
			clrscr();
			cout<<"1.Binary\n2.Decimal\n3.Hexa-Decimal\nEnter your choice :";
			cin>>m2;
			cout<<"Enter a Octal Number :";
			long int oct;
			cin>>oct;
			switch(m2)
			{
				case 1:
				{
					for(int dec=0,i=0;oct>0;i++,oct/=10)
						dec+=(oct%10)*pow(8,i);
					int bin=0;
					for(i=0;dec>0;i++,dec/=2)
						bin+=(dec%2)*pow(10,i);
					cout<<"Binary equivalent :"<<bin;
					getch();
					goto top;
				}
				case 2:
				{
					for(int dec=0,i=0;oct>0;i++,oct/=10)
						dec+=(oct%10)*pow(8,i);
					cout<<"Decimal equivalent :"<<dec;
					getch();
					goto top;
				}
				case 3:
				{
					for(int dec=0,i=0;oct>0;i++,oct/=10)
						dec+=(oct%10)*pow(8,i);
					int t[10];
					char hex[10];
					for(i=0;dec>0;i++,dec/=16)
					{
						t[i]=dec%16;
						switch(t[i])
						{
							case 10:
								hex[i]='A';
								break;
							case 11:
								hex[i]='B';
								break;
							case 12:
								hex[i]='C';
								break;
							case 13:
								hex[i]='D';
								break;
							case 14:
								hex[i]='E';
								break;
							case 15:
								hex[i]='F';
								break;
							default:
								t[i]+=48;
								hex[i]=(char)t[i];
								break;
						}
					}
					cout<<"Hexa-Decimal equivalent :";
					for(i=i-1;i>=0;i--)
						cout<<hex[i];
					getch();
					goto top;
				}
				default:
					cout<<"Wrong Choice";
					getch();
					goto top;
			}
		}
		case 3:
		{
			clrscr();
			cout<<"1.Binary\n2.Octal\n3.Hexa-Decimal\nEnter your choice :";
			cin>>m3;
			cout<<"Enter a Decimal Number :";
			int dec;
			cin>>dec;
			switch(m3)
			{
				case 1:
				{
					for(int i=0,bin=0;dec>0;i++,dec/=2)
						bin+=(dec%2)*pow(10,i);
					cout<<"Binary equivalent :"<<bin;
					getch();
					goto top;
				}
				case 2:
				{
					for(int oct=0,i=0;dec>0;i++,dec/=8)
						oct+=(dec%8)*pow(10,i);
					cout<<"Octal equivalent :"<<oct;
					getch();
					goto top;
				}
				case 3:
				{
					int t[10];
					char hex[10];
					for(int i=0;dec>0;i++,dec/=16)
					{
						t[i]=dec%16;
						switch(t[i])
						{
							case 10:
								hex[i]='A';
								break;
							case 11:
								hex[i]='B';
								break;
							case 12:
								hex[i]='C';
								break;
							case 13:
								hex[i]='D';
								break;
							case 14:
								hex[i]='E';
								break;
							case 15:
								hex[i]='F';
								break;
							default:
								t[i]+=48;
								hex[i]=(char)t[i];
								break;
						}
					}
					cout<<"Hexa-Decimal equivalent :";
					for(i=i-1;i>=0;i--)
						cout<<hex[i];
					getch();
					goto top;
				}
				default:
					cout<<"Wrong Choice";
					getch();
					goto top;
			}
		}
		case 4:
		{
			clrscr();
			cout<<"1.Binary\n2.Octal\n3.Decimal\nEnter your choice :";
			cin>>m4;
			cout<<"Enter a Hexa-Decimal Number :";
			char hex[10];
			gets(hex);
			int t[10];
			for(int i=0;hex[i]!='\0';i++)
			{
				switch(hex[i])
				{
					case 'A':
					case 'a':
						t[i]=10;
						break;
					case 'B':
					case 'b':
						t[i]=11;
						break;
					case 'C':
					case 'c':
						t[i]=12;
						break;
					case 'D':
					case 'd':
						t[i]=13;
						break;
					case 'E':
					case 'e':
						t[i]=14;
						break;
					case 'F':
					case 'f':
						t[i]=15;
						break;
					default:
						hex[i]-=48;
						t[i]=(int)hex[i];
						break;
				}
			}
			int dec=0,j=0;
			for(i=i-1;i>=0;i--,j++)
				dec+=t[i]*pow(16,j);
			switch(m4)
			{
				case 1:
				{
					for(int i=0,bin=0;dec>0;i++,dec/=2)
						bin+=(dec%2)*pow(10,i);
					cout<<"Binary equivalent :"<<bin;
					getch();
					goto top;
				}
				case 2:
				{
					for(int i=0,oct=0;dec>0;i++,dec/=8)
						oct+=(dec%8)*pow(10,i);
					cout<<"Octal equivalent :"<<oct;
					getch();
					goto top;
				}
				case 3:
				{
					cout<<"Decimal equivalent :"<<dec;
					getch();
					goto top;
				}
				default:
					cout<<"Wrong Choice";
					getch();
					goto top;
			}
		}
		case 5:
			break;
		default:
			cout<<"Wrong Choice";
			getch();
			goto top;
	}
}