#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c,n;
	cout<<"Enter limit:";
	cin>>n;
   cout<<"\n(c*c)+(b*b)=(a*a)\nc\tb\ta\n\n";
	for(a=1;a<=n;a++)
		for(b=1;b<a;b++)
			for(c=1;c<=b;c++)
				if(((b*b)+c*c)==(a*a))
					cout<<c<<"\t"<<b<<"\t"<<a<<"\n";
	getch();
}