struct user
{
	char usr[15],pas[15],t;
};
user us;
int searchu(char usr[])
{
	int loc;
	fs.open("UserData.dat",ios::in);
	while(!fs.eof())
	{
		loc=fs.tellg();
		fs.read((char *)&us,sizeof(us));
		if(strcmp(usr,us.usr)==0)
		{
			fs.close();
			return(loc);
		}
	}
	fs.close();
	cout<<"Sorry. The User Name you entered is invalid.";
	getch();
	return(-1);
}
int usr_add()
{
	clrscr();
	char t,pas[10];
	int i,m;
	cout<<"\tAdd User\n\nType : \n\t1.Administrator\n\t";
	cout<<"2.Member\n\tEnter your choice : ";
	cin>>ch;
	f=chknum(ch,m);
	if(f!=0)
		m=6;
	switch(m)
	{
		case 1:
			us.t='A';
			break;
		case 2:
			us.t='U';
			break;
		default:
			cout<<"Sorry. Invalid choice.\nPlease enter 1 or 2.\nEntry will not ";
			cout<<"be recorded.\nPress any key to continue..";
			getch();
			return(-1);
	}
	cout<<"User Name : ";
	gets(us.usr);
	flagpass1:
	i=0;
	cout<<"Enter your password : ";
	t=getch();
	while(t!=13)
	{
		if((t>=65)&&(t<=90))
		{
			cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
			cout<<"Press any key to contine.\n";
			getch();
			goto flagpass1;
		}
		if(t!=8)
		{
			cout<<"*";
			us.pas[i]=t;
			i++;
		}
		else
		{
			i--;
			cout<<(char)8;
		}
		t=getch();
	}
	us.pas[i]='\0';
	flagpass2:
	i=0;
	cout<<"\nConfirm your password : ";
	t=getch();
	while(t!=13)
	{
		if((t>=65)&&(t<=90))
		{
			cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
			cout<<"Press any key to contine.\n";
			getch();
			goto flagpass2;
		}
		if(t!=8)
		{
			cout<<"*";
			pas[i]=t;
			i++;
		}
		else
		{
			i--;
			cout<<(char)8;
		}
		t=getch();
	}
	pas[i]='\0';
	cout<<"\n";
	if(strcmp(pas,us.pas)==0)
	{
		if(confirm()==0)
			return(0);
	}
	else
	{
		cout<<"\nConfirmation is not correct.\nEntry will not be ";
		cout<<"recorded.\nPress any key to continue.";
		getch();
	}
	return(1);
}
int usr_mod()
{
	clrscr();
	char t,pas2[10],usr[10];
	int i,loc,m;
	cout<<"\tModify User\n\nUser Name : ";
	gets(usr);
	loc=searchu(usr);
	if(loc==-1)
		return(-1);
	cout<<"Type : \n\t1.Administrator\n\t2.Member\n\tEnter your choice : ";
	cin>>ch;
	f=chknum(ch,m);
	if(f!=0)
		m=3;
	switch(m)
	{
		case 1:
			us.t='A';
			break;
		case 2:
			us.t='U';
			break;
		default:
			cout<<"Sorry. Invalid choice.\nPlease enter 1 or 2.\nEntry will ";
			cout<<"not be recorded.\nPress any key to continue..";
			getch();
			return(-1);
	}
	flagpass1:
	i=0;
	cout<<"Enter new password : ";
	t=getch();
	while(t!=13)
	{
		if((t>=65)&&(t<=90))
		{
			cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
			cout<<"Press any key to contine.\n";
			getch();
			goto flagpass1;
		}
		if(t!=8)
		{
			cout<<"*";
			us.pas[i]=t;
			i++;
		}
		else
		{
			i--;
			cout<<(char)8;
		}
		t=getch();
	}
	us.pas[i]='\0';
	flagpass2:
	i=0;
	cout<<"\nConfirm your password : ";
	t=getch();
	while(t!=13)
	{
		if((t>=65)&&(t<=90))
		{
			cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
			cout<<"Press any key to contine.\n";
			getch();
			goto flagpass2;
		}
		if(t!=8)
		{
			cout<<"*";
			pas2[i]=t;
			i++;
		}
		else
		{
			i--;
			cout<<(char)8;
		}
		t=getch();
	}
	pas2[i]='\0';
	cout<<"\n";
	if(strcmp(us.pas,pas2)==0)
	{
		if(confirm()==0)
			return(loc);
	}
	else
	{
		cout<<"\nConfirmation is not correct.\nEntry will not be ";
		cout<<"recorded.\nPress any key to continue.";
		getch();
	}
	return(-1);
}
void usr_del()
{
	fstream f2;
	int loc;
	char choice,usr[10],uname[10];
	clrscr();
	cout<<"\tDelete User Account\n";
	cout<<"\nEnter the username : ";
	gets(usr);
	loc=searchu(usr);
	if(loc==-1)
		return;
	strcpy(uname,us.usr);
	cout<<"\nAre you sure you want to delete this User Account from the record.";
	do
	{
		cout<<"\nPress 'Y'/'N' as confirmation of the delete : ";
		cin>>choice;
		switch(choice)
		{
			case 'Y':
			case 'y':
				fs.open("UserData.dat",ios::in);
				f2.open("temp.dat",ios::app|ios::binary);
				while(fs.read((char *)&us,sizeof(us)))
				{
					if(strcmp(uname,us.usr)!=0)
						f2.write((char *)&us,sizeof(us));
				}
				fs.close();
				f2.close();
				remove("UserData.dat");
				rename("temp.dat","UserData.dat");
				cout<<"The User Account is deleted\nPress any key to continue..";
				getch();
				break;
			case 'N':
			case 'n':
				cout<<"The User account will not be deleted\nPress any key to continue..";
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
char login()
{
	clrscr();
	char usr[10],pas[10],t;
	int i,c=0,f;
	do
	{
		clrscr();
		cout<<"\n\tLibrary Management System\n\nEnter your username : ";
		gets(usr);
		if(strcmp(usr,"4knights")!=0)
		{
			f=searchu(usr);
			if(f!=-1)
			{
				flagpassf:
				i=0;
				cout<<"Enter your password : ";
				t=getch();
				while(t!=13)
				{
					if((t>=65)&&(t<=90))
					{
						cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
						cout<<"Press any key to contine.\n";
						getch();
						goto flagpassf;
					}
					if(t!=8)
					{
						cout<<"*";
						pas[i]=t;
						i++;
					}
					else
					{
						i--;
						cout<<(char)8;
					}
					t=getch();
				}
				pas[i]='\0';
				if(strcmp(pas,us.pas)==0)
						return(us.t);
				else
				{
					c++;
					cout<<"\nSorry. The password you entered is incorrect.\nTry again.";
					cout<<"\nYou have "<<(3-c)<<" chances left.";
					getch();
					continue;
				}
			}
			else
			{
				c++;
				cout<<"\nTry again.\nYou have "<<(3-c)<<" chance(s) left.";
				getch();
				continue;
			}
		}
		else
		{
			flagpass:
			i=0;
			cout<<"Enter your password : ";
			t=getch();
			while(t!=13)
			{
				if((t>=65)&&(t<=90))
				{
					cout<<"\nCAPS is on.\nTurn of CAPS & try again.\n";
					cout<<"Press any key to contine.\n";
					getch();
					goto flagpass;
				}
				if(t!=8)
				{
					cout<<"*";
					pas[i]=t;
					i++;
				}
				else
				{
					i--;
					cout<<(char)8;
				}
				t=getch();
			}
			pas[i]='\0';
			if(strcmp(pas,"hai123")!=0)
			{
				c++;
				cout<<"\nSorry. The password you entered is incorrect.\n";
				cout<<"Try again.\nYou have "<<(3-c)<<" chances left.";
				getch();
				continue;
			}
			return('4');
		}
	}while(c<3);
	/*clrscr();
	gotoxy(20,10);
	cout<<"Saving your settings  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Deleting temporary file used   ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Clearing memory area  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}*/
	exit(0);
	return(0);
}
