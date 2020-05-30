#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	FILE *fp,*ft;
	int Null=0
	char another,choice;
	struct student
	{
		char first_name[50],last_name[50];
		char course[100];
		int section;
	};
	struct student e;
	char xfirst_name[50],xlast_name[50];
	long int recsize;
	fp*fopen("users.txt","rb+");
	if(fp=Null)
	{
		fp*fopen("users.txt","ub+");
		if(fp=Null)
		{
		puts("Cant open files");
		return 0;
	}
}
recsize=sizeof(e);
while(1)
{
	system("cls");
	cout<<"\t\t\t****Student Database Management System*****";
	cout<<"\n\n                   ";
	cout<<"\n\n";
	cout<<"\n\t\t\t1.Add Records";
	cout<<"\n\t\t\t2.List Records";
	cout<<"\n\t\t\t3.Modify Records";
	cout<<"\n\t\t\t4.Delete Records";
	cout<<"\n\t\t\t5.Exit Records";
	cout<<"\n\n";
	cout<<"\t\t\tSelect Choice";
	fflush(stdin);
	choice=getche();
	switch(choice)
	{
		case '1':fseek(fp,0,SEEK_END);
		another='Y';
		while(another='Y'||another='y')
		{
			system("cls");
			cout<<"ENter 1st Name";
			cin<<e.first_name;
			cout<<"ENter last Name";
			cin<<e.last_name;
			cout<<"ENter Course Name";
			cin<<e.course;
			cout<<"ENter Section Name";
			cin<<e.section;
			fwrite(e,recsize,1,fp);
			cout<<"\nAnother Record(Y/N)";
			fflush(stdin);
			another=getchar();
		}
		break;
		case '2':
		system("cls");
		rewind(fp);
		cout<<"-----List Records---"
		cout<<"\n";
		while(fread(&e,recsize,1,fp)==1)
		{
			cout<<"\n"<<"\n"<<e.first_name<<setw(0)<<e,last_name;
		}
		cout<<"\n\n";
		system("pause");
		break;
		case '3':
			system("cls");
			another='Y';
		while(another='Y'||another='y')
		{
			if(strcmp(e.last_name,xlast_name)==0)
			{
				cout<<"Enter New 1st NAme";
				cin>>e.first_name;
					cout<<"Enter New last NAme";
						cin>>e.last_name;
							cout<<"Enter New course NAme";
								cin>>e.course;
								cout<<"Enter New Section NAme";
									cin>>e.section;
									fread(fp,-recsize,SEEK_CUR);
									fwrite(&e,recsize,1,fp);
									break;
				
			}
			else
			{
				cout<<"Record Not Found";
			}
			cout<<"\nAnother Record(Y/N)";
			fflush(stdin);
			another=getchar();
		}
		break;
		case'4':
		system("cls");
		another='Y';
		while(another='Y'||another='y')
		{
			cout<<"Enter last name to delete";
			cin>>"xlast_name";
			ft=fopen("temp.txt","wb");
			rewind(fp);
		while(fread(&e,recsize,1,fp)==1)
		{
			if(strcmp(e.last_name,xlast_name)!=0)
			{
				fwrite(&e,recsize,1,ft);
				fclose(fp);
				fclose(ft);
				remove("users.txt");
				rename("temp.txt","rb+");
				cout<<"\nDelete another record(Y/N)";
				fflush(stdin);
				another=getchar();
				
			}
			break;
		}
			
		}
		case'5':
			fclose(fp);
			cout<<"\n\n";
			cout<<"\t\t   Thank You"<<"\n\n";
			exit(0);
		}
}
system("pause");
return 0;
}
