#include<iostream>
using namespace std;
struct Person
{
	char name[30];
	int age;
	float salary;
};

void display(struct Person);//declaration of function
int main()
{
	struct Person s1;
	cout<<"Enter your name:";
	cin>>s1.name;
	cout<<"Enter your age:";
	cin>>s1.age;
	cout<<"Enter your salary:";
	cin>>s1.salary;
	display(s1);//calling of function
	return 0;
}
void display(struct Person p)
{
	cout<<"Displaying the details"<<endl;
	cout<<"Name:"<<p.name<<endl;
	cout<<"Age:"<<p.age<<endl;
	cout<<"Salary:"<<p.salary;
	
}
