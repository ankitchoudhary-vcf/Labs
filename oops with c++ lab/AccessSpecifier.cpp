    // Write a program to implement the use of access Specifier


#include<iostream>
using namespace std;

// Public Access Specifier
class A
{
    public:
        int num1, num2;
        int add()
        {
            return num1 + num2;
        }
};

// Protected Access Specifier
class B
{
    protected:
        int num1 = 10, num2 = 20;
    public:
        int add()
            {
                return num1 + num2;
            }
};

// Private Access Specifier
class C
{
    private:
        int num1 = 10, num2 = 20;
    public:
        int add()
            {
                return num1 + num2;
            }
};

int main()
{
    //Public
    cout<<"Useing Public Access Specifier "<<endl;
    A a;
    a.num1 = 15;
    a.num2 = 20;
    cout<<"Num1 : "<<a.num1<<"\nNum2 : "<<a.num2<<"\nSum : " <<a.add()<<endl;
    cout<<"-------------***********-------------------"<<endl;
    
    //Protected
    cout<<"Useing Protected Access Specifier "<<endl;
    B b;
    /**----------Not Accessable
    a.num1 = 15;
    a.num2 = 20;
    ----------------------**/
    cout<<"\nSum : " <<b.add()<<endl;
    cout<<"-------------***********-------------------"<<endl;


    //Private
    cout<<"Useing Private Access Specifier "<<endl;
    C c;
    /**----------Not Accessable
    a.num1 = 15;
    a.num2 = 20;
    -----------*/
    cout<<"\nSum : " <<c.add()<<endl;
    cout<<"-------------***********-------------------"<<endl;

    return 0;
}
