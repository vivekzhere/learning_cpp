int chknum(char num[],int &a)
{
	int i,c=0;
	for(i=0;num[i]!='\0';i++)
		if(!(isdigit(num[i])))
			c++;
	if(c!=0)
		return(1);
	a=0;
	for(i=0;num[i]!='\0';i++)
	a=a*10+((int)num[i]-48);
	return(0);
}
char ch[6];               //variable for chking whether a number
int f;                    //variable for chking whether a number
////////////////////////////////////////////////////////////////////
struct _date
{
	int dd,mm,yy;
};
void get_date(_date &d)
{
	date dt;
	getdate(&dt);
	d.dd=dt.da_day;
	d.mm=dt.da_mon;
	d.yy=dt.da_year;
}
void mandate(_date &d,int x)
{
	d.dd+=x;
	if(d.mm==4||d.mm==6||d.mm==9||d.mm==11)
	{
		if(d.dd>30)
		{
			d.mm++;
			d.dd-=30;
		}
	}
	else if(d.mm==1||d.mm==3||d.mm==5||d.mm==7||d.mm==8||d.mm==10||d.mm==12)
	{
		if(d.dd>31)
		{
			d.mm++;
			d.dd-=31;
		}
	}
	else
	{
		if((d.yy%4==0&&d.yy%100!=0)||d.yy%400==0)
		if(d.dd>29)
		{
			d.mm++;
			d.dd-=29;
		}
		else
		if(d.dd>28)
		{
			d.mm++;
			d.dd-=29;
		}
	}
	if(d.mm>12)
	{
		d.mm-=12;
		d.yy++;
	}
}
int datecomp(_date a,_date b)
{
	if((a.dd==b.dd)&&(a.mm==b.mm)&&(a.yy==b.yy))
		return(0);
	else
		return(-1);
}
int finecal(_date a,_date b)
{
	int d;
	if(a.yy>=b.yy)
	{
		if(a.mm>=b.mm)
		{
			if(a.dd>=b.dd)
				return(0);
			else
				d=b.dd-a.dd;
		}
		else
		{
			d=((b.mm-a.mm)-1)*30;
			if(a.dd>=b.dd)
				d+=30-(a.dd-b.dd);
			else
				d+=30+(b.dd-a.dd);
		}
	}
	else
	{
		d=((b.yy-a.yy)-1)*365;
		if(a.mm>=b.mm)
		{
			d+=(12-(a.mm-b.mm)-1)*30;
			if(a.dd>=b.dd)
				d+=(30-(a.dd-b.dd));
			else
				d+=(30+(b.dd-a.dd));
		}
		else
		{
			d+=(12+(b.mm-a.mm)-1)*30;
			if(a.dd>=b.dd)
				d+=(30-(a.dd-b.dd));
			else
				d+=(30+(b.dd-a.dd));
		}
	}
	return(2*d);
}
////////////////////////////////////////////////////////////////////
int confirm()
{
	char con;
	do
	{
		cout<<"Press 'Y'/'N' as confirmation of the entry : ";
		cin>>con;
		switch(con)
		{
			case 'Y':
			case 'y':
				cout<<"The entry is recorded\nPress any key to contine..";
				getch();
				return(0);
			case 'N':
			case 'n':
				cout<<"The entry will not be recorded\nPress any key to continue..";
				getch();
				return(1);
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter 'Y' or 'N'.\n";
				cout<<"Press any key to continue..";
				getch();
				con='A';
		}
	}while(con=='A');
	return(1);
}
int substring(char a[],char b[])
{
	char t[50];
	int i,j,k,l;
	for(i=0;a[i]!='\0';i++);
	l=i;
	for(i=0;b[i]!='\0';i++)
	{
		for(j=i,k=0;k<l;j++,k++)
			t[k]=b[j];
		t[k]='\0';
		if(strcmp(t,a)==0)
			return(0);
	}
	return(-1);
}
/////////////////////////////////////////////////
fstream fs;
class book
{
	int bno,price;
	char name[30],auth[25],type[20],pub[30],stat;
	_date dop;
	public:
	int add();
	int mod();
	int dis();
	friend void disp_b(int);
	friend int issue();
	friend int retrn();
	friend void delb();
	friend void search_b(int ,char []);
	friend int searchb(int);
}bk;
int kbook=101;
class member
{
	int mbrno,rno,clas,cd;
	char name[30],div,stat;
	public:
	int add();
	int mod();
	int dis();
	friend void disp_m();
	friend int issue();
	friend int retrn();
	friend void delm();
	friend void search_m(int ,char []);
	friend int searchm(int);
}mbr;
int kmbr=101;
struct issued
{
	int bno,mno,fine;
	_date doi,exdor,dor;
}is;
/////////////////////////////////////////////////
int searchb(int x)
{
	int loc;
	fs.open("BookData.dat",ios::in);
	while(!fs.eof())
	{
		loc=fs.tellg();
		fs.read((char *)&bk,sizeof(bk));
		if(x==bk.bno)
		{
			fs.close();
			return(loc);
		}
	}
	fs.close();
	cout<<"Sorry. The Book No. you entered is invalid.";
	getch();
	return(-1);
}
void delb()
{
	fstream f2;
	int loc,bn;
	char choice;
	clrscr();
	cout<<"\tDelete Book\n";
	loc=bk.dis();
	if(loc==-1)
		return;
	bn=bk.bno;
	cout<<"\nAre you sure you want to delete this book from the record.";
	do
	{
		cout<<"\nPress 'Y'/'N' as confirmation of the delete : ";
		cin>>choice;
		switch(choice)
		{
			case 'Y':
			case 'y':
				fs.open("BookData.dat",ios::in);
				f2.open("temp.dat",ios::app|ios::binary);
				while(fs.read((char *)&bk,sizeof(bk)))
				{
					if(bk.bno!=bn)
						f2.write((char *)&bk,sizeof(bk));
				}
				fs.close();
				f2.close();
				remove("BookData.dat");
				rename("temp.dat","BookData.dat");
				cout<<"The book is deleted\nPress any key to continue..";
				getch();
				break;
			case 'N':
			case 'n':
				cout<<"The book will not be deleted\nPress any key to continue..";
				getch();
				break;
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter 'Y' or 'N'.\n";
				cout<<"Press any key to continue..";
				getch();
				choice='A';
		}
	}while(choice=='A');
}
/////////////////////////////////////////////////
int searchm(int x)
{
	int loc;
	fs.open("Mbrdata.dat",ios::in);
	while(!fs.eof())
	{
		loc=fs.tellg();
		fs.read((char *)&mbr,sizeof(mbr));
		if(mbr.mbrno==x)
		{
			fs.close();
			return(loc);
		}
	}
	fs.close();
	cout<<"Sorry. The Member No. you entered is invalid.";
	getch();
	return(-1);
}
void delm()
{
	fstream f2;
	int loc,mn;
	char choice;
	clrscr();
	cout<<"\tDelete Member\n";
	loc=mbr.dis();
	if(loc==-1)
		return;
	mn=mbr.mbrno;
	cout<<"\nAre you sure you want to delete the member from the record.";
	do
	{
		cout<<"\nPress 'Y'/'N' as confirmation of the delete : ";
		cin>>choice;
		switch(choice)
		{
			case 'Y':
			case 'y':
				fs.open("MbrData.dat",ios::in);
				f2.open("temp.dat",ios::app|ios::binary);
				while(fs.read((char *)&mbr,sizeof(mbr)))
				{
					if(mbr.mbrno!=mn)
						f2.write((char *)&mbr,sizeof(mbr));
				}
				fs.close();
				f2.close();
				remove("MbrData.dat");
				rename("temp.dat","MbrData.dat");
				cout<<"The member is deleted\nPress any key to continue..";
				getch();
				break;
			case 'N':
			case 'n':
				cout<<"The member will not be deleted\nPress any key to continue..";
				getch();
				break;
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter 'Y' or 'N'.\n";
				cout<<"Press any key to continue..";
				getch();
				choice='A';
		}
	}while(choice=='A');
}
////////////////////////////////////////////////
int book::add()
{
	clrscr();
	cout<<"\tAdd Book\n\nBook No. : "<<kbook<<"\n";
	bno=kbook;
	cout<<"Name of Book : ";
	gets(name);
	cout<<"Author : ";
	gets(auth);
	cout<<"Category : ";
	gets(type);
	cout<<"Price : ";
	cin>>ch;
	f=chknum(ch,price);
	cout<<"Publisher : ";
	gets(pub);
	get_date(dop);
	stat='N';
	if(f!=0)
	{
		cout<<"The price you entered is not valid\nSorry. ";
		cout<<"The entry cannot be recorded";
		getch();
		return(1);
	}
	if(confirm()==0)
	{
		kbook++;
		return(0);
	}
	return(1);
}
int book::mod()
{
	int men,loc;
	do
	{
		clrscr();
		cout<<"\tModify Book\n";
		loc=dis();
		if(loc==-1)
			return(-1);
		cout<<"\nWhich field you want to modify\n1.Name of Book\n2.Author\n";
		cout<<"3.Category\n4.Price\n5.Publisher\n6.All\n7.Back\nEnter your choice : ";
		cin>>ch;
		f=chknum(ch,men);
		if(f!=0)
			men=8;
		if(men>0&&men<7)
			cout<<"Enter Corrected Details\n";
		switch(men)
		{
			case 6:
			case 1:
				cout<<"Name of Book : ";
				gets(name);
				if(men!=6)
					break;
			case 2:
				cout<<"Author : ";
				gets(auth);
				if(men!=6)
					break;
			case 3:
				cout<<"Category : ";
				gets(type);
				if(men!=6)
					break;
			case 4:
				cout<<"Price : ";
				cin>>ch;
				f=chknum(ch,price);
				if(f)
				{
					cout<<"The price you entered is not valid\nSorry. ";
					cout<<"The entry cannot be recorded";
					getch();
					continue;
				}
				if(men!=6)
					break;
			case 5:
				cout<<"Publisher : ";
				gets(pub);
				break;
			case 7:
				continue;
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter a number between 1 & 7.";
				cout<<"\nPress any key to continue..";
				getch();
				continue;
		}
		if(confirm()==0)
			return(loc);
		else
			break;
	}while(men!=7);
	return(-1);
}
int book::dis()
{
	int bn,loc;
	cout<<"\nEnter the Book No. of the book  : ";
	cin>>ch;
	f=chknum(ch,bn);
	if(f!=0)
		bn=0;
	loc=searchb(bn);
	if(loc!=-1)
	{
		cout<<"Name of Book : "<<name<<"\nAuthor : "<<auth<<"\nCategory : ";
		cout<<type<<"\nPrice : "<<price<<"\nPublisher : "<<pub;
		cout<<"\nDate of Purchase : "<<dop.dd<<"/";
		cout<<dop.mm<<"/"<<dop.yy<<"\nStatus : ";
		if(stat=='N')
			cout<<"In stock";
		else
			cout<<"Issued";
		return(loc);
	}
	return(-1);
}
////////////////////////////////////////////////////
int member::add()
{
	clrscr();
	cout<<"\tAdd Member\n\nMember No. : "<<kmbr<<"\n";
	mbrno=kmbr;
	cout<<"Name of Student : ";
	gets(name);
	cout<<"Class : ";
	cin>>ch;
	f=chknum(ch,clas);
	if(f!=0||clas<4||clas>12)
	{
		cout<<"The class you entered is not valid\nSorry. ";
		cout<<"The entry cannot be recorded";
		getch();
		return(1);
	}
	cout<<"Division : ";
	cin>>div;
	cout<<"Roll No. : ";
	cin>>ch;
	f=chknum(ch,rno);
	if(f!=0)
	{
		cout<<"The rollno you entered is not valid\nSorry. ";
		cout<<"The entry cannot be recorded";
		getch();
		return(1);
	}
	cout<<"You have to pay Rs. 500 as caution deposit.\n";
	cout<<"Press any key to continue.";
	cd=500;
	stat='N';
	getch();
	cout<<"\n";
	if(confirm()==0)
	{
		kmbr++;
		return(0);
	}
	return(1);
}
int member::mod()
{
	int men,loc;
	do
	{
		clrscr();
		cout<<"\tModify Member\n";
		loc=dis();
		if(loc==-1)
			return(-1);
		cout<<"\nWhich field you want to modify\n1.Name of Member\n2.Class\n3.";
		cout<<"Division\n4.Roll No.\n5.Caution Deposit\n6.All\n";
		cout<<"7.Back\nEnter your choice : ";
		cin>>ch;
		f=chknum(ch,men);
		if(f!=0)
			men=7;
		if(men>0&&men<6)
			cout<<"Enter Corrected Details\n";
		switch(men)
		{
			case 6:
			case 1:
				cout<<"Name of Member : ";
				gets(name);
				if(men!=6)
					break;
			case 2:
				cout<<"Class : ";
				cin>>ch;
				f=chknum(ch,clas);
				if(f!=0||clas<4||clas>12)
				{
					cout<<"The class you entered is not valid\nSorry. ";
					cout<<"The entry cannot be recorded";
					getch();
					continue;
				}
				if(men!=6)
					break;
			case 3:
				cout<<"Division : ";
				cin>>div;
				if(men!=6)
					break;
			case 4:
				cout<<"Roll No. : ";
				cin>>ch;
				f=chknum(ch,rno);
				if(f)
				{
					cout<<"The Roll No. you entered is not valid\nSorry. ";
					cout<<"The entry cannot be recorded";
					getch();
					continue;
				}
				if(men!=6)
					break;
			case 5:
				cout<<"Caution Deposit : ";
				cin>>ch;
				f=chknum(ch,cd);
				if(f)
				{
					cout<<"The amount you entered is not valid\nSorry. ";
					cout<<"The entry cannot be recorded";
					getch();
					continue;
				}
				if(men!=6)
					break;
			case 7:
				continue;
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
				cout<<"1 & 6.\nPress any key to continue..";
				getch();
				continue;
		}
		if(confirm()==0)
			return(loc);
		else
			break;
	}while(men!=6);
	return(-1);
}
int member::dis()
{
	int mn,loc;
	cout<<"\nEnter the Member No. of the Member : ";
	cin>>ch;
	f=chknum(ch,mn);
	if(f!=0)
		mn=0;
	loc=searchm(mn);
	if(loc!=-1)
	{
		cout<<"Name of Member : "<<name<<"\nClass : "<<clas<<"\nDivision : ";
		cout<<div<<"\nRoll No. : "<<rno;
		cout<<"\nDeposit : "<<cd<<"\nStatus : ";
		if(stat=='Y')
			cout<<" Borrowed";
		else
			cout<<"Not Borrowed";
		return(loc);
	}
	return(-1);
}
//////////////////////////////////////////////////
int searchi(int x,int y)
{
	int loc;
	fs.open("Issue.dat",ios::in);
	while(!fs.eof())
	{
		loc=fs.tellg();
		fs.read((char *)&is,sizeof(is));
		if(is.mno==x)
		{
			if(is.bno==y)
			{
				fs.close();
				return(loc);
			}
			else
			{
				cout<<"\nThe Book No. you entered is invalid. Sorry.\n";
				cout<<"Press any key to continue..";
				getch();
				fs.close();
				return(-1);
			}
		}
	}
	fs.close();
	return(-1);
}
int issue()
{
	clrscr();
	int mn,locm,locb;
	cout<<"\tIssue Book\n";
	cout<<"\nEnter your Member No. : ";
	cin>>ch;
	f=chknum(ch,mn);
	if(f!=0)
		mn=0;
	locm=searchm(mn);
	if(locm!=-1)
	{
		if(mbr.stat=='Y')
		{
			cout<<"\nYou already has a book to be returned.\nSorry. You cannot hire";
			cout<<" any book now.\nPress any key to continue.";
			getch();
			return(-1);
		}
		locb=bk.dis();
		if(locb!=-1)
		{
			if(mbr.cd<=.3*bk.price)
			{
				cout<<"\nYour caution deposit is too low to make this transaction.\n";
				cout<<"Sorry you cannot make this transaction.\n";
				cout<<"Press any key to continue..";
				getch();
				return(-1);
			}
			if(bk.stat=='Y')
			{
				cout<<"\nThe book is currently rented.\nSorry. You cannot hire this ";
				cout<<"book now.\nPress any key to continue.";
				getch();
				return(-1);
			}
			is.bno=bk.bno;
			is.mno=mbr.mbrno;
			get_date(is.doi);
			get_date(is.exdor);
			mandate(is.exdor,10);
			is.dor.dd=0;
			is.dor.mm=0;
			is.dor.yy=0;
			is.fine=0;
			cout<<"\nYou have to return the book on or before : "<<is.exdor.dd;
			cout<<"/"<<is.exdor.mm<<"/"<<is.exdor.yy<<"\n";
			if(confirm()==0)
			{
				bk.stat='Y';
				mbr.stat='Y';
				fs.open("BookData.dat",ios::out|ios::in|ios::binary);
				fs.seekp(locb);
				fs.write((char *)&bk,sizeof(bk));
				fs.close();
				fs.open("MbrData.dat",ios::in|ios::out|ios::binary);
				fs.seekp(locm);
				fs.write((char *)&mbr,sizeof(mbr));
				fs.close();
				return(0);
			}
		}
	}
	return(-1);
}
int retrn()
{
	clrscr();
	cout<<"\tReturn Book\n";
	int mn,locm,locb,loci;
	cout<<"\nEnter your Member No. : ";
	cin>>ch;
	f=chknum(ch,mn);
	if(f!=0)
		mn=0;
	locm=searchm(mn);
	if(locm!=-1)
	{
		if(mbr.stat=='N')
		{
			cout<<"\nYou dont have any book to be returned.\nPress any key to continue.";
			getch();
			return(-1);
		}
		locb=bk.dis();
		cout<<"\n";
		if(locb!=-1)
		{
			loci=searchi(mbr.mbrno,bk.bno);
			if(loci==-1)
				return(-1);
			else if(bk.bno!=is.bno)
			{
				cout<<"\nThe Book No. you entered is wrong.\nPress any key to continue.";
				getch();
				return(-1);
			}
			else
			{
				get_date(is.dor);
				is.fine=finecal(is.exdor,is.dor);
				if(is.fine!=0)
				{
					cout<<"\nYou have to pay Rs. "<<is.fine<<" as fine.\nIt will be deducted";
					cout<<" from your caution deposit.\nPress any key to continue.\n";
					mbr.cd-=is.fine;
					getch();
				}
				if(confirm()==0)
				{
					bk.stat='N';
					mbr.stat='N';
					fs.open("BookData.dat",ios::out|ios::in|ios::binary);
					fs.seekp(locb);
					fs.write((char *)&bk,sizeof(bk));
					fs.close();
					fs.open("MbrData.dat",ios::in|ios::out|ios::binary);
					fs.seekp(locm);
					fs.write((char *)&mbr,sizeof(mbr));
					fs.close();
					return(loci);
				}
			}
		}
	}
	return(-1);
}
/////////////////////////////////////////////////////////////////
void search_b(int n,char temp[])
{
	clrscr();
	int i=5;
	cout<<"\tBook Details\n\nBook No.";
	gotoxy(10,3);
	cout<<"Name\t\tAuthor\tCategory  Price\t  Publisher\tDOP\tStatus\n\n";
	fs.open("BookData.dat",ios::in);
	while(fs.read((char *)&bk,sizeof(bk)))
	{
		switch(n)
		{
			case 1:
				if(substring(temp,bk.name))
					continue;
			case 2:
				if(substring(temp,bk.auth))
					continue;
				break;
			case 3:
				if(substring(temp,bk.type))
					continue;
				break;
			default:
				cout<<"Invalid call of the funtion";
				getch();
				exit(0);
		}
		cout<<bk.bno;
		gotoxy(10,i);
		cout<<bk.name;
		gotoxy(26,i);
		cout<<bk.auth;
		gotoxy(34,i);
		cout<<bk.type;
		gotoxy(44,i);
		cout<<bk.price;
		gotoxy(52,i);
		cout<<bk.pub;
		gotoxy(65,i);
		cout<<bk.dop.dd<<"/"<<bk.dop.mm<<"/"<<bk.dop.yy;
		cout<<"  "<<bk.stat<<"\n";
		i++;
	}
	fs.close();
}
void search_m(int n,char temp[])
{
	clrscr();
	int i=5,cls;
	cout<<"\tMember Details\n\nMember No.";
	cout<<"\tName\t\tClass\tDivision  Roll No.\tStatus  Deposit\n";
	fs.open("MbrData.dat",ios::in);
	while(fs.read((char *)&mbr,sizeof(mbr)))
	{
		switch(n)
		{
			case 1:
				if(substring(temp,mbr.name))
					continue;
				break;
			case 2:
				f=chknum(temp,cls);
				if(f!=0||cls<4||cls>12)
				{
					cout<<"The class you entered is not valid\nSorry. ";
					cout<<"The entry cannot be searched";
					fs.close();
					return;
				}
				else if(cls!=mbr.clas)
					continue;
				break;
			default:
				cout<<"Invalid call of the funtion";
				getch();
				exit(0);
		}
		cout<<"\n"<<mbr.mbrno;
		gotoxy(17,i);
		cout<<mbr.name;
		gotoxy(33,i);
		cout<<mbr.clas;
		gotoxy(42,i);
		cout<<mbr.div;
		gotoxy(52,i);
		cout<<mbr.rno;
		gotoxy(68,i);
		cout<<mbr.stat;
		gotoxy(74,i);
		cout<<mbr.cd;
		i++;
	}
	fs.close();
}
/////////////////////////////////////////////////////////////
void disp_b(int n)
{
	clrscr();
	int i=5;
	cout<<"\tBook Details\n\nBook No.";
	gotoxy(10,3);
	cout<<"Name\t\tAuthor\tCategory  Price\t  Publisher\tDOP\tStatus\n\n";
	fs.open("BookData.dat",ios::in);
	while(fs.read((char *)&bk,sizeof(bk)))
	{
		switch(n)
		{
			case 1:
				break;
			case 2:
				if(bk.stat=='Y')
					continue;
				break;
			case 3:
				if(bk.stat=='N')
					continue;
				break;
			default:
				cout<<"Invalid call of the funtion";
				getch();
				exit(0);
		}
		cout<<bk.bno;
		gotoxy(10,i);
		cout<<bk.name;
		gotoxy(26,i);
		cout<<bk.auth;
		gotoxy(34,i);
		cout<<bk.type;
		gotoxy(44,i);
		cout<<bk.price;
		gotoxy(52,i);
		cout<<bk.pub;
		gotoxy(65,i);
		cout<<bk.dop.dd<<"/"<<bk.dop.mm<<"/"<<bk.dop.yy;
		cout<<"  "<<bk.stat<<"\n";
		i++;
	}
	fs.close();
}
void disp_m()
{
	clrscr();
	int i=5;
	cout<<"\tMember Details\n\nMember No.";
	cout<<"\tName\t\tClass\tDivision  Roll No.\tStatus  Deposit\n";
	fs.open("MbrData.dat",ios::in);
	while(fs.read((char *)&mbr,sizeof(mbr)))
	{
		cout<<"\n"<<mbr.mbrno;
		gotoxy(17,i);
		cout<<mbr.name;
		gotoxy(33,i);
		cout<<mbr.clas;
		gotoxy(42,i);
		cout<<mbr.div;
		gotoxy(52,i);
		cout<<mbr.rno;
		gotoxy(68,i);
		cout<<mbr.stat;
		gotoxy(74,i);
		cout<<mbr.cd;
		i++;
	}
	fs.close();
}
////////////////////////////////////////////////////////////////
void disp_issbks(int n)
{
	clrscr();
	int i=5;
	_date dt;
	get_date(dt);
	cout<<"\tIssue Details \n\nBook No.";
	gotoxy(10,3);
	cout<<"Member No  Dof Issue \tDof Expected Return  Dof Return\t  Fine\n\n";
	fs.open("Issue.dat",ios::in);
	while(fs.read((char *)&is,sizeof(is)))
	{
		switch(n)
		{
			case 1:
				break;
			case 2:
				if(datecomp(dt,is.doi))
					continue;
				break;
			case 3:
				if(datecomp(dt,is.dor))
					continue;
				break;
			case 4:
				if(datecomp(dt,is.exdor))
					continue;
				break;
			default:
				cout<<"Invalid call of the funtion";
				getch();
				exit(0);
		}
		cout<<is.bno;
		gotoxy(10,i);
		cout<<is.mno;
		gotoxy(20,i);
		cout<<is.doi.dd<<"/"<<is.doi.mm<<"/"<<is.doi.yy;
		gotoxy(34,i);
		cout<<is.exdor.dd<<"/"<<is.exdor.mm<<"/"<<is.exdor.yy;
		gotoxy(54,i);
		if(is.dor.dd==0)
		{
			cout<<"-";
			gotoxy(68,i);
			cout<<"-\n";
		}
		else
		{
			cout<<is.dor.dd<<"/"<<is.dor.mm<<"/"<<is.dor.yy;
			gotoxy(67,i);
			cout<<is.fine<<"\n";
		}
		i++;
	}
	fs.close();
}
//////////////////////////////////////////////////////////////////
