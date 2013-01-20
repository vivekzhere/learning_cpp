#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void pat(int);
	cout<<"Enter limit : ";
	int n;
	cin>>n;
	pat(n);
	getch();
}
void pat(int n)
{
	for(int i=n;i>0;i--)
		cout<<i<<"\t";
   cout<<"\n";
	if(n>1)
		pat(n-1);
}
