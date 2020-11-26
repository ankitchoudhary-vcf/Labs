        // Use of Protected function in Public Inheritance

#include<iostream>
using namespace std;

class Parant
{
    protected:
        int x, y;
    public:
        void getdata()
        {
            cout<<"Enter the Value of x => ";
            cin>>x;
            cout<<"Enter the Value of y => ";
            cin>>y;
        }
};

class Child:public Parant
{
    private:
        int sum;
    public:
        void Add()
        {
            getdata();
            sum = x + y;
            cout<<x<<" + "<<y<<" = "<<sum<<endl;
        }
};

int main()
{
    Child c;
    c.Add();
    return 0;
}