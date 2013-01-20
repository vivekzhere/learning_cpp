//To check whether an inputed string is a palindrome.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,len,leng,f=0;
	char str[30];
	cout<<"Enter a string:\n";
	gets(str);
	len=strlen(str);
	leng=len-1;
	for(i=0;i<=len/2;i++,leng--)
		if(str[i]!=str[leng])
		{
			f=1;
			break;
		}

	if(f==0)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
	getch();

}