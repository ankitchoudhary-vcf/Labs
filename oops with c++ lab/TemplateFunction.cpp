/**
* Template Function
**/

#include<iostream>
using namespace std;
template<class T>

T getmax(T a, T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int i= 5, j= 6, k;
    long l=10, m=5, n;
    k=getmax(i,j);
    n=getmax(l,m);
    cout<<k<<endl;
    cout<<n<<endl;
    return 0;
}