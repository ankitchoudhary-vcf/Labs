						//pointer to structres

#include<iostream>

using namespace std;

struct Book
{
	int BookId;
	float Price;
};

int main()
{
	Book b, *ptr;
	ptr = &b;
	cout<<"Enter book Id : ";
	cin>>(*ptr).BookId;
	cout<<"Enter book Price : ";
	cin>>ptr->Price;
	cout<<"Details of Book"<<endl<<"Book Id is: "<<(*ptr).BookId<<endl<<"Book Price is : "<<(*ptr).Price;
	return 0;
}
