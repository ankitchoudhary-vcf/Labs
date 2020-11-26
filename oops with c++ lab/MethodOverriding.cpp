    //  Method Overriding or function overriding

#include<iostream>
using namespace std;

class A
{
    public:
        void fun()
        {
            cout<<"I am Parent "<<endl;
        }
};

class B:public A
{
    public:
        void fun()
        {
            cout<<"I am Child "<<endl;
        }
};

int main()
{
    B b;
    b.fun();
    return 0;
}