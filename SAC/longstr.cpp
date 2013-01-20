//To accept a 2 strings and print longer string.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,l1,l2;
	char str1[30],str2[30];
	cout<<"Enter 2 string:\n";
	gets(str1);
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1>l2)
		cout<<"Longer string ="<<str1;
	else
	{
		if(l1==l2)
			cout<<"Both strings are of equal length";
		else
			cout<<"Longer string : "<<str2;
	}
	getch();
}
