#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int n,a[16],i=0,r=0;
	cin>>n;
	while(n>0)
	{
	a[i]=n%2;
	n/=2;
	i++;
	}
	--i;
	while(i>=0)
	{
		r=(r*10)+a[i];
		i--;
	}
	cout<<r;
	getch();
}