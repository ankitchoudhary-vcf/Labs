        // Methord Hiding

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
       using A::fun;
        void fun(int a)
        {
            cout<<"I am Child "<<a<<endl;
        }
};

int main()
{
    B b;
    b.fun();
    b.fun(3);
    return 0;
}