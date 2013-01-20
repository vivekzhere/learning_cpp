#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[50],b[50],t[50];
	int i,j,k,l;
	cout<<"Enter main string : ";
	gets(a);
	cout<<"Enter sub string : ";
	gets(b);
	for(i=0;b[i]!='\0';i++);
	l=i;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i,k=0;k<l;j++,k++)
			t[k]=a[j];
		t[k]='\0';
		if(strcmp(t,b)==0)
		{
			cout<<"Sub string found\n";
			goto last;
		}
	}
	cout<<"Sub string not found\n";
	last:
	getch();
}
