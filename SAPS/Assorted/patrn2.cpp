#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	void pat(int,int);
	cout<<"Enter limit : ";
	int n;
	cin>>n;
	pat(n,1);
	getch();
}
void pat(int n,int i)
{
	for(int j=1;j<=i;j++)
		cout<<j<<"\t";
	cout<<"\n";
	if(i<n)
		pat(n,i+1);
}
