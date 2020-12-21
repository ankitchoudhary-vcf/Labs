                    /**
                    * Exception Handling
                    **/
#include<iostream>
using namespace std;

void fun()
{
    throw 100;
}

int main()
{
    int i;
    cout<<"Enter the value of i : ";
    cin>>i;
    try
    {
        if(i==1)
            throw 20;
        if(i==2)
            throw 50;
        if(i==3)
            fun();
    }
    catch(int e)
    {
        cout<<"Exception no. "<<e<<endl;
    }

    return 0;
}