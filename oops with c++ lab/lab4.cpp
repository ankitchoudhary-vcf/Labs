							// Array of Structure

#include<iostream>
using namespace std;

struct Person
{
	int Id;
	char name[30];
	int age;
};

int main()
{
	int n;
	cout<<"Enter the number of Employee you need to add : ";
	cin>>n;
	Person emp[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Employee"<<i+1<<" ID : ";
		cin>>emp[i].Id;
		cout<<"Enter Employee"<<i+1<<" Name : ";
		cin>>emp[i].name;
		cout<<"Enter Employee"<<i+1<<" age : ";
		cin>>emp[i].age;
	}
	
	cout<<endl<<"Employee Details :"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"Employee"<< i+1<<" ID :"<<emp[i].Id<<endl;
		cout<<"Employee"<< i+1<<" Name :"<<emp[i].name<<endl;
		cout<<"Employee"<< i+1<<" Age :"<<emp[i].age<<endl;
		
	}
	
	return 0;
}
