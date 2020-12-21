                    /**
                    * Exception Handling
                    **/
#include<iostream>
using namespace std;

int main()
{
    cout<<"Hi Today is Monday"<<endl;
    try
    {
        throw 20;
        cout<<"am in Try"<<endl;
    }
    catch(int e)
    {
        cout<<"Exception no. "<<e<<endl;
    }
    cout<<"Last line of the program"<<endl;

    return 0;
}