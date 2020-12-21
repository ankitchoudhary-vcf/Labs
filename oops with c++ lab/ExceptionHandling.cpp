                    /**
                    * Exception Handling
                    **/
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter the value of i : ";
    cin>>i;
    try
    {
        if(i==1)
            throw 20.1;
        if(i==2)
            throw "XYZ";
        if(i==3)
            throw 100;
    }
    catch(...)
    {
        cout<<"Exception aya hai so proced with some different value"<<endl;
    }

    return 0;
}