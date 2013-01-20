//To check whether a given number is a palindrome
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long n,r,rev=0,a;
	cout<<"Enter a number:";
	cin>>n;
	a=n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}while(n>0);
	if(a==rev)
		cout<<a<<" is a palindrome";
	else
		cout<<a<<" is not a palindrome";

	getch();
}