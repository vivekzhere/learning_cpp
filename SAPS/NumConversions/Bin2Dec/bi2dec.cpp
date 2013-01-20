#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int n,i=0,re=0;
	cin>>n;
	while(n>0)
	{
	re+=(n%10)*(pow(2,i));
	n/=10;
   i++;
	}
	cout<<"\n\a"<<re;
	getch();
}