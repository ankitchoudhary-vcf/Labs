#include<iostream>
using namespace std;

int a = 30; // Global Variable

class Cuboid
{
	private:							//Access specifiers
		int l, b, h;									//Encapsulation-Binging of data and methods into a single unit
	public:											//Access specifiers
		void setdata(int x, int y, int z)					//Member Functions - They are defined inside the class
		{
			l=x;
			b=y;
			h=z;	
		}
		void showdata()
		{
			cout<<"Cuboid length is: ";
			cout<<l<<endl;
			cout<<"Cuboid breadth is: ";
			cout<<b<<endl; 
			cout<<"Cuboid height is: ";
			cout<<h<<endl;  
		}
		void volume();
};
void Cuboid::volume() // :: is scope resolution operator
{
	cout<<"Volume of cuboid is: ";
	cout<<l*b*h<<endl;
}
class Cube
{
	public:
		int side;
		int getvolume();
};
int Cube::getvolume()  // outside class we are giving the body of member function using scope resolution operater
{
	return side*side*side;
}
int main()
{
	int a = 20; // local variable
	cout<<"The value of local variable a is: "<<a<<endl<<endl;
	cout<<"The value of Global variable a is: "<<::a<<endl<<endl;

	Cuboid c;
	Cube c1;
	c.setdata(6,7,8); 
	c.volume();
	c1.side = 4;
	cout<<"Volume of Cube is : "<<c1.getvolume();
	return 0;
}
