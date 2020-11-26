#include<iostream>
using namespace std;
void swap_V(int,int);
void swap_A(int*,int*);
void swap_R(int&,int&);
int main()
{
    int a = 10, b = 20;
    cout<<"Before Swap using call by Value a = "<<a<<endl;
    cout<<"Before Swap using call by Value b = "<<b<<endl;
    swap_V(a,b);
    cout<<"After Swap using call by Value a = "<<a<<endl;
    cout<<"After Swap using call by Value b = "<<b<<endl;
    cout<<"Before Swap using call by Addres a = "<<a<<endl;
    cout<<"Before Swap using call by Addres b = "<<b<<endl;
    swap_A(&a,&b);
    cout<<"After Swap using call by Addres a = "<<a<<endl;
    cout<<"After Swap using call by Addres b = "<<b<<endl;
    cout<<"Before Swap using call by Reference a = "<<a<<endl;
    cout<<"Before Swap using call by Reference b = "<<b<<endl;
    swap_R(a,b);
    cout<<"After Swap using call by Reference a = "<<a<<endl;
    cout<<"After Swap using call by Reference b = "<<b<<endl;
    return 0;
}

void swap_V(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_A(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap_R(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}