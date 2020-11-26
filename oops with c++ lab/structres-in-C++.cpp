#include<iostream>
using namespace std;
class Complex
{
	private:										//Access specifiers
		int r, i;									//Encapsulation-Binging of data and methods into a single unit
	public:											//Access specifiers
		void setdata(int x, int y)					//Member Functions - They are defined inside the class
		{
			r=x;
			i=y;	
		}
		void showdata()
		{
			cout<<"Complex Number is: ";
			cout<<r<<"+"<<i<<"i"<<endl; 
		}
};
int main()
{
	Complex c;
	/**
	c.r=20;
	c.i=30; //you can't access privae directly from outside the class.
	**/
	c.setdata(6,7); //Here variable of complex type can access the variable of class complex vai member function.
	c.showdata();
	return 0;
}

// Write the syntax of declaring the member functionoutside the class?
/**
Yes, using scope resolution operator.

#include<iostream>
using namespace std;
Class Complex
{
	private:										//Access specifiers
		int r, i;									//Encapsulation-Binging of data and methods into a single unit
	public:											//Access specifiers
		void setdata(int, int);					//Member Functions - They are defined inside the class
		void showdata()
		{
			cout<<"Complex Number is: ";
			cout<<r<<"+"<<i<<"i"<<endl; 
		}
};
void Complex::setdata(int x, int y)
{
	r=x;
	i=y;
}
int main()
{
	Complex c;
	c.setdata(6,7); //Here variable of complex type can access the variable of class complex vai member function.
	c.showdata();
	return 0;
}

**/
