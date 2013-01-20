//To accept a string and print it in ascending order.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,l,j;
	char str[30],temp;
	cout<<"Enter a string:\n";
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
		for(j=0;j<l;j++)
			if(str[i]<str[j])
			{
				temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
			puts(str);
	getch();
}
