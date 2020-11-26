							// structure return type function
#include<iostream>
using namespace std;

//creating structure

struct Person
{
	char name[30];
	int age;
	float salary;
};

//declaring function

struct Person getData(struct Person); // function with return type structure
void displayData(struct Person);

int main()
{
	struct Person p; // creating structure variable
	p = getData(p);  //calling function
	displayData(p);	
	return 0;
}

//defining function

struct Person getData(struct Person p)
{
	cout<<"Enter your name:";
	cin>>p.name;
	cout<<"Enter age:";
	cin>>p.age;
	cout<<"Enter salary:";
	cin>>p.salary;
	return p; // returning structure variable p to p in main
}

void displayData(struct Person p)
{
	cout<<"Displaying the details"<<endl;
	cout<<"Name:"<<p.name<<endl;
	cout<<"Age:"<<p.age<<endl;
	cout<<"Salary:"<<p.salary;
}
