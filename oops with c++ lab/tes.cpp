#include<iostream>
using namespace std;

void fun1(int a)
{
    cout<<"a => "<<a<<endl;
}
int main()
{
    fun1(5);
    //fun1(11.5);
    fun1(float(11.5));
    return 0;
}