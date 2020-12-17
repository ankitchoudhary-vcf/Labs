#include<iostream>
using namespace std;

class A
{
	private:
		int n1, n2;
	public:
		A()
		{
			n1=0;
			n2=0;
		}
		A(int t, int w)
		{
			n1=t;
			n2=w;
		}
		void display()
		{
			cout<<"Feet : "<<n1<<" INCH : "<<n2<<endl;
		}
		A operator +()
		{
			n1=+n1;
			n2=+n2;
			return A(n1, n2);
		}
        A operator *()
		{
            
			n1=n1*n1;
			n2=n2*n2;
			return A(n1, n2);
		}
};

int main()
{
	A D(11,3);
	A D2(-5,12);
	+D;
	+D2;
    D.display();
	D2.display();
    cout<<"*************************"<<endl;
    *D;
    *D2;
	D.display();
	D2.display();
	return 0;
}

