//To add, substract & multiply 2 matrices using functions.
#include<iostream.h>
#include<conio.h>
void getm(int,int,int a[20][20]);
void prim(int,int,int a[20][20]);
void addm(int,int,int a[20][20],int b[20][20]);
void subm(int,int,int a[20][20],int b[20][20]);
void mulm(int,int,int,int a[20][20],int b[20][20],int c[20][20]);
void main()
{
	clrscr();
	int m,n,p,q,a[20][20],b[20][20],c[20][20];
	cout<<"Enter no:of rows & columns of first matrix:";
	cin>>m>>n;
	cout<<"Enter no:of rows & columns of second matrix:";
	cin>>p>>q;
	if(m!=p||n!=q)
		cout<<"Matrix addition and substraction not possible.\n";
	else
	{
		cout<<"Enter elements of First matrix:\n";
		getm(m,n,a);
		cout<<"Enter elements of Second matrix:\n";
		getm(p,q,b);
		clrscr();
		cout<<"First matrix:\n";
		prim(m,n,a);
		cout<<"Second matrix:\n";
		prim(p,q,b);
		cout<<"Matrix Sum:\n";
		addm(m,n,a,b);
		cout<<"Matrix Difference:\n";
		subm(m,n,a,b);
	}
	if(m!=q)
		cout<<"Matrix multiplication not possible.";
	else
	{
		if(m!=p||n!=q)
		{
			cout<<"Enter elements of First matrix:\n";
			getm(m,n,a);
			cout<<"Enter elements of Second matrix:\n";
			getm(p,q,b);
			clrscr();
			cout<<"First matrix:\n";
			prim(m,n,a);
			cout<<"Second matrix:\n";
			prim(p,q,b);
		}
		cout<<"Matrix Product:\n";
		mulm(m,n,q,a,b,c);
	}
	getch();
}
void getm(int m,int n,int a[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
}
void prim(int m,int n,int a[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
}
void addm(int m,int n,int a[20][20],int b[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]+b[i][j]<<"\t";
		cout<<"\n";
	}
}
void subm(int m,int n,int a[20][20],int b[20][20])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]-b[i][j]<<"\t";
		cout<<"\n";
	}
}
void mulm(int m,int n,int q,int a[20][20],int b[20][20],int c[20][20])
{
	int i,j,k;
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
