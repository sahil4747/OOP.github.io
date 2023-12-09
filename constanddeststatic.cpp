#include<iostream>
#include<string.h>
using namespace std;
class student
{
	char name[10];
	int rollno;
	char class_name[3];
	char address[10];
	long int tellno;
	long int licno;
	char blood_group[10];
	int dob;
	public:
		student()
		{
			strcpy(name," ABC");
			rollno=6;
			strcpy(class_name,"SE");
			strcpy(address,"Malegaon");
			tellno=1234567889;
			licno=23456779;
			strcpy(blood_group,"A+ve");
			dob=2004;
		}
                       student(char n[],int r,char c[],char a[],int t,int l,char b[],int d)
		{
			strcpy(name,n);
			rollno=r;
			strcpy(class_name,c);
			strcpy(address,a);
			tellno=t;
			licno=l;
			strcpy(blood_group,b);
			dob=d;
		}
		student(const student & x)
		{
			strcpy(name,x.name);
			rollno=x.rollno;
			strcpy(class_name,x.class_name);
			strcpy(address,x.address);
			tellno=x.tellno;
			licno=x.licno;
			strcpy(blood_group,x.blood_group);
			dob=x.dob;
		}
		void display();
	};
	void student::display()
	{
	cout<<"\n name="<<name;
		
		cout<<"\n rollno="<<rollno;
		
		cout<<"\n class name"<<class_name;
		
		cout<<"\n address="<<address;
		
		cout<<"\n tellno"<<tellno;
		
		cout<<"\n licno"<<licno;
		
		cout<<"\n blood_group"<<blood_group;
		
		cout<<"\n dob="<<dob;
	};
	int main()
	{
		student dobj;
		cout<<"\n default constructor";
		dobj.display();
		cout<<"\n parametarized constructor"<<"\n enter parameters";
		char pname[20],pclass_name[3],paddress[20],pblood_group[10];
		int prollno,pdob;
		long int ptellno,plicno;
            	cout<<"\n enter name:";
            	cin>>pname;
		
		cout<<"\n enter class_name:";
		cin>>pclass_name;
		
		cout<<"\n enter address:";
		cin>>paddress;
		cout<<"\n blood group:";
		cin>>pblood_group;
		
		cout<<"\n enter roll no:";
		cin>>prollno;
		
		cout<<"\n enter dob:";
		cin>>pdob;
		
		cout<<"\n enter tellno:";
		cin>>ptellno;
		
		cout<<"\n licno:";
		cin>>plicno;
		
		
student pobj(pname,prollno,pclass_name,paddress,ptellno,plicno,pblood_group,pdob);
		pobj.display();
		cout<<"\n copy constructor";
		student newobj=pobj;
		
		newobj.display();
		return 0;
		
	}
