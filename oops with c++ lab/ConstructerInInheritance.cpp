#include<iostream>
using namespace std;

class Add
{
    protected:
        int num1, num2;
    public:
        Add()
        {
            cout<<"-----------------Parant class Default Constructor-----------"<<endl;
            cout<<"Enter the Value of num1 => ";
            cin>>num1;
            cout<<"Enter the Value of num2 => ";
            cin>>num2;
            cout<<"Sum = "<< num1 + num2<<endl;
        }
        Add(int n1, int n2)
        {
            cout<<"-----------------Parant class Parametrized Constructor-----------"<<endl;
            cout<<"Sum = "<< n1 + n2<<endl;
        }
        ~Add()
        {
            cout<<"----------Parent class Destructors------------"<<endl;
        }
};

class Child:public Add
{
    private:
        int num3, num4;
    public:
        Child():Add(4,5)
        {
            cout<<"-----------------Child class Default Constructor-----------"<<endl;
            cout<<"Enter the Value of num3 => ";
            cin>>num3;
            cout<<"Enter the Value of num4 => ";
            cin>>num4;
            cout<<"Sum = "<< num3 + num4<<endl;
        }
        ~Child()
        {
            cout<<"-----------Child class Destructor------------"<<endl;
        }
};

class Child1:public Add
{
    private:
        int num3, num4;
    public:
        Child1():Add()
        {
            cout<<"-----------------Child1 class Default Constructor-----------"<<endl;
            cout<<"Enter the Value of num3 => ";
            cin>>num3;
            cout<<"Enter the Value of num4 => ";
            cin>>num4;
            cout<<"Sum = "<< num3 + num4<<endl;
        }
        ~Child1()
        {
            cout<<"-----------Child1 class Destructor------------"<<endl;
        }
};

class Child2:public Add
{
    private:
        int num3, num4;
    public:
        Child2()
        {
            cout<<"-----------------Child2 class Default Constructor-----------"<<endl;
            cout<<"Enter the Value of num3 => ";
            cin>>num3;
            cout<<"Enter the Value of num4 => ";
            cin>>num4;
            cout<<"Sum = "<< num3 + num4<<endl;
        }
        ~Child2()
        {
            cout<<"-----------Child2 class Destructor------------"<<endl;
        }
};

class Child3:public Add
{
    private:
        int num3, num4;
    public:
        Child3(int a, int b):Add(4,5)
        {
            cout<<"-----------------Child3 class Parametrized Constructor-----------"<<endl;
            cout<<"Enter the Value of num3 => ";
            cin>>num3;
            cout<<"Enter the Value of num4 => ";
            cin>>num4;
            cout<<"Sum = "<< num3 + num4<<endl;
        }
        ~Child3()
        {
            cout<<"-----------Child3 class Destructor------------"<<endl;
        }
};

int main()
{
    Child c;
    Child1 c1;
    Child2 c2;
    Child3 c3(5,6);
    return 0;
}