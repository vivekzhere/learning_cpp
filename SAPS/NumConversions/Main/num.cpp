#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
#include<stdlib.h>
long int getnum();
int bichk(long int);
int octchk(long int);
int decchk(long int);
int hexchk(long int);
long int bi2dec(long int);
long int oct2dec(long int);
long int hex2dec(long int);
long int dec2bi(long int);
long int dec2oct(long int);
void dec2hex(long int);
void main()
{
	clrscr();
	cout<<"\tWelcome To Number Conversion System.";
	getch();
	int m=0;
	long int n1,n2,n3;
	while(m<=5)
	{
		main:
		clrscr();
		cout<<"\t\tNumber Conversion System\n\n1. Binary\n2. Octal\n3. Decimal\n4. Hexa Decimal\n5. Exit\nEnter Your Choice :";
		wr:;
		cin>>m;
		if(m==1)
		{
			clrscr();
			int m1=0;
			while(m1<5)
			{
				bin:
				clrscr();
				cout<<"\tBinary Conversions\n1. Octal\n2. Decimal\n3. Hexa Decimal\n4. Back\nEnter Your Choice :";
				wr1:;
				cin>>m1;
				if(m1==1)
				{
					int f;
					wrf11:
					clrscr();
					cout<<"Binary To Octal Conversion\n\n";
					n1=getnum();
					f=bichk(n1);
					if(f==0)
					{
						n2=bi2dec(n1);
						n3=dec2oct(n2);
						cout<<"Octal equivalent = "<<n3<<"\nDo you want to do another Binary conversion(y/n):";
						char ch;
						wr11:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto bin;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr11;
						}
					}
					else
					{
						cout<<"The number you have entered is not a binary number.";
						getch();
						goto wrf11;
					}
				}
				else if(m1==2)
				{
					int f;
					wrf12:
					clrscr();
					cout<<"Binary To Decimal Conversion\n\n";
					n1=getnum();
					f=bichk(n1);
					if(f==0)
					{
						n2=bi2dec(n1);
						cout<<"Decimal equivalent = "<<n2<<"\nDo you want to do another Binary conversion(y/n):";
						char ch;
						wr12:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto bin;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr12;
						}
					}
					else
					{
						cout<<"The number you have entered is not a binary number.";
						getch();
						goto wrf12;
					}
				}
				else if(m1==3)
				{
					int f;
					wrf13:
					clrscr();
					cout<<"Binary To Hexa Decimal Conversion\n\n";
					n1=getnum();
					f=bichk(n1);
					if(f==0)
					{
						n2=bi2dec(n1);
						dec2hex(n2);
						cout<<"\nDo you want to do another Binary conversion(y/n):";
						char ch;
						wr13:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto bin;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr13;
						}
					}
					else
					{
						cout<<"The number you have entered is not a binary number.";
						getch();
						goto wrf13;
					}
				}
				else if(m1==4)
				{
					m1=5;
					m=0;
				}
				else
				{
					cout<<"Wrong Input\nEnter a digit between 1 & 4:";
					goto wr1;
				}
			}
		}
		else if(m==2)
		{
			clrscr();
			int m2=0;
			while(m2<5)
			{
				oct:
				clrscr();
				cout<<"\tOctal Conversions\n1. Binary\n2. Decimal\n3. Hexa Decimal\n4. Back\nEnter Your Choice :";
				wr2:;
				cin>>m2;
				if(m2==1)
				{
					int f;
					wrf21:
					clrscr();
					cout<<"Octal To Binary Conversion\n\n";
					n1=getnum();
					f=octchk(n1);
					if(f==0)
					{
						n2=oct2dec(n1);
						n3=dec2bi(n2);
						cout<<"Binary equivalent = "<<n3<<"\nDo you want to do another Octal conversion(y/n):";
						char ch;
						wr21:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto oct;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr21;
						}
					}
					else
					{
						cout<<"The number you have entered is not a octal number.";
						getch();
						goto wrf21;
					}
				}
				else if(m2==2)
				{
					int f;
					wrf22:
					clrscr();
					cout<<"Octal To Decimal Conversion\n\n";
					n1=getnum();
					f=octchk(n1);
					if(f==0)
					{
						n2=oct2dec(n1);
						cout<<"Decimal equivalent = "<<n2<<"\nDo you want to do another Octal conversion(y/n):";
						char ch;
						wr22:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto oct;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr22;
						}
					}
					else
					{
						cout<<"The number you have entered is not a octal number.";
						getch();
						goto wrf22;
					}
				}
				else if(m2==3)
				{
					int f;
					wrf23:
					clrscr();
					cout<<"Octal To Hexa Decimal Conversion\n\n";
					n1=getnum();
					f=octchk(n1);
					if(f==0)
					{
						n2=oct2dec(n1);
						dec2hex(n2);
						cout<<"\nDo you want to do another Octal conversion(y/n):";
						char ch;
						wr23:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto oct;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr23;
						}
					}
					else
					{
						cout<<"The number you have entered is not a octal number.";
						getch();
						goto wrf23;
					}
				}
				else if(m2==4)
				{
					m2=5;
					m=0;
				}
				else
				{
					cout<<"Wrong Input\nEnter a digit between 1 & 4:";
					goto wr2;
				}
			}
		}
		else if(m==3)
		{
			clrscr();
			int m3=0;
			while(m3<5)
			{
				dec:
				clrscr();
				cout<<"\tDecimal Conversions\n1. Binary\n2. Octal\n3. Hexa Decimal\n4. Back\nEnter Your Choice :";
				wr3:;
				cin>>m3;
				if(m3==1)
				{
					int f;
					wrf31:
					clrscr();
					cout<<"Decimal To Binary Conversion\n\n";
					n1=getnum();
					f=decchk(n1);
					if(f==0)
					{
						n2=dec2bi(n1);
						cout<<"Binary equivalent = "<<n2<<"\nDo you want to do another Decimal conversion(y/n):";
						char ch;
						wr31:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto dec;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr31;
						}
					}
					else
					{
						cout<<"The number you have entered is not a decimal number.";
						getch();
						goto wrf31;
					}
				}
				else if(m3==2)
				{
					int f;
					wrf32:
					clrscr();
					cout<<"Decimal To Octal Conversion\n\n";
					n1=getnum();
					f=decchk(n1);
					if(f==0)
					{
						n2=dec2oct(n1);
						cout<<"Octal equivalent = "<<n2<<"\nDo you want to do another Decimal conversion(y/n):";
						char ch;
						wr32:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto dec;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr32;
						}
					}
					else
					{
						cout<<"The number you have entered is not a decimal number.";
						getch();
						goto wrf32;
					}
				}
				else if(m3==3)
				{
					int f;
					wrf33:
					clrscr();
					cout<<"Decimal To Hexa Decimal Conversion\n\n";
					n1=getnum();
					f=decchk(n1);
					if(f==0)
					{
						dec2hex(n1);
						cout<<"\nDo you want to do another Decimal conversion(y/n):";
						char ch;
						wr33:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto dec;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr33;
						}
					}
					else
					{
						cout<<"The number you have entered is not a decimal number.";
						getch();
						goto wrf33;
					}
				}
				else if(m3==4)
				{
					m3=5;
					m=0;
				}
				else
				{
					cout<<"Wrong Input\nEnter a digit between 1 & 4:";
					goto wr3;
				}
			}
		}
		else if(m==4)
		{
			clrscr();
			int m4=0;
			while(m4<5)
			{
				hex:
				clrscr();
				cout<<"\tHexa Decimal Conversions\n1. Binary\n2. Octal\n3. Decimal\n4. Back\nEnter Your Choice :";
				wr4:;
				cin>>m4;
				if(m4==1)
				{
					int f;
					wrf41:
					clrscr();
					cout<<"Hexa Decimal To Binary Conversion\n\n";
					n1=getnum();
					f=hexchk(n1);
					if(f==0)
					{
						n2=hex2dec(n1);
						n3=dec2bi(n2);
						cout<<"Binary equivalent = "<<n3<<"\nDo you want to do another Hexa Decimal conversion(y/n):";
						char ch;
						wr41:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto hex;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr41;
						}
					}
					else
					{
						cout<<"The number you have entered is not a hexa decimal number.";
						getch();
						goto wrf41;
					}
				}
				else if(m4==2)
				{
					int f;
					wrf42:
					clrscr();
					cout<<"Hexa Decimal To Octal Conversion\n\n";
					n1=getnum();
					f=hexchk(n1);
					if(f==0)
					{
						n2=hex2dec(n1);
						n3=dec2oct(n2);
						cout<<"Octal equivalent = "<<n3<<"\nDo you want to do another Hexa Decimal conversion(y/n):";
						char ch;
						wr42:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto hex;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr42;
						}
					}
					else
					{
						cout<<"The number you have entered is not a hexa decimal number.";
						getch();
						goto wrf42;
					}
				}
				else if(m4==3)
				{
					int f;
					wrf43:
					clrscr();
					cout<<"Hexa Decimal To Decimal Conversion\n\n";
					n1=getnum();
					f=hexchk(n1);
					if(f==0)
					{
						n2=hex2dec(n1);
						cout<<"Decimal equivalent = "<<n2<<"\nDo you want to do another Hexa Decimal conversion(y/n):";
						char ch;
						wr43:
						cin>>ch;
						switch(ch)
						{
							case 'y':
							case 'Y':
								goto hex;
							case 'n':
							case 'N':
								goto main;
							default:
								cout<<"Wrong input.Press either y or n :";
								goto wr43;
						}
					}
					else
					{
						cout<<"The number you have entered is not a hexa decimal number.";
						getch();
						goto wrf43;
					}
				}
				else if(m4==4)
				{
					m4=5;
					m=0;
				}
				else
				{
					cout<<"Wrong Input\nEnter a digit between 1 & 4:";
					goto wr4;
				}
			}
		}
		else if(m==5)
		{
			clrscr();
			cout<<"\t\a\a\aDeveloped By 4Knights Digital Solutions";
			getch();
			_exit(0);
		}
		else
		{
			cout<<"Wrong Input\nEnter a digit between 1 & 5:";
			goto wr;
		}
	}
}
long int getnum()
{
	int n;
	cout<<"Enter A Number:";
	cin>>n;
	return n;
}
int bichk(long int n)
{
	int a=0,b=0;
	while(n>0)
	{
		a=fmod(n,10);
		if(a>1)
			{
				b=1;
			}
		n=n/10;
	}
	return(b);
}
int octchk(long int n)
{
	int a=0,b=0;
	while(n>0)
	{
		a=fmod(n,10);
		if(a>7)
			{
				b=1;
			}
		n=n/10;
	}
	return(b);
}
int decchk(long int n)
{
	int a=0,b=0;
	while(n>0)
	{
		a=fmod(n,10);
		if(a>9)
			{
				b=1;
			}
		n=n/10;
	}
	return(b);
}
int hexchk(long int n)
{
	int a=0,b=0;
	while(n>0)
	{
		a=fmod(n,10);
		if(a>15)
			{
				b=1;
			}
		n=n/10;
	}
	return(b);
}
long int bi2dec(long int n)
{
	int i=0;
	long int r=0;
	while(n>0)
	{
	r+=(n%10)*(pow(2,i));
	n/=10;
	i++;
	}
	return(r);
}
long int oct2dec(long int n)
{
	int i=0;
	long int r=0;
	while(n>0)
	{
	r+=(n%10)*(pow(8,i));
	n/=10;
	i++;
	}
	return(r);
}
long int hex2dec(long int n)
{
	int i=0;
	long int r=0;
	while(n>0)
	{
	r+=(n%10)*(pow(16,i));
	n/=10;
	i++;
	}
	return(r);
}
long int dec2bi(long int n)
{
	long int a[16],r=0;
	int i=0;
	while(n>0)
	{
	a[i]=fmod(n,2);
	n/=2;
	i++;
	}
	--i;
	while(i>=0)
	{
		r=(r*10)+a[i];
		i--;
	}
	return(r);
}
long int dec2oct(long int n)
{
	long int a[16],r=0;
	int i=0;
	while(n>0)
	{
	a[i]=fmod(n,8);
	n/=8;
	i++;
	}
	--i;
	while(i>=0)
	{
		r=(r*10)+a[i];
		i--;
	}
	return(r);
}
void dec2hex(long int n)
{
	int a[11],i=0;
	while(n>0)
	{
	a[i]=fmod(n,16);
	n/=16;
	i++;
	}
	--i;
	while(i>=0)
	{
		
			switch(a[i])
			{
				case 10:
					cout<<"A";
					break;
				case 11:
					cout<<"B;";
					break;
				case 12:
					cout<<"c";
					break;
				case 13:
					cout<<"D";
					break;
				case 14:
					cout<<"E";
					break;
				case 15:
					cout<<"F";
					break;
				default:
					cout<<a[i];
					break;
			}	
		i--;
	}
}

