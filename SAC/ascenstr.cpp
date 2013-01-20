/*To print a string in the pattern:
	a
	ab
	abc
	.... */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int i,l,c=0;
	char str[30];
	cout<<"Enter a string:\n";
	gets(str);
	for(i=0;str[i]!='\0';i++)
		c++;
	for(l=1;l<=c;l++)
	{
		for(i=0;i<l;i++)
			cout<<str[i];
		cout<<"\n";
	}
	getch();

}