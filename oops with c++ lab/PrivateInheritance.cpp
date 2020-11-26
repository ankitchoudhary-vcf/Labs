    //  Private Inheritance

#include<iostream>
using namespace std;

class Parent
{
    public:
        void display()
        {
            cout<<"Mai Parent Hoon"<<endl;
        }
};
class child:private Parent
{
    public:
        void show()
        {
            display();
            cout<<"Mai Bacha Hoon"<<endl;

        }
};

int main()
{
    child c;
    c.show();
    return 0;
}