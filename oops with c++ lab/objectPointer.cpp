// concept of object pointer

#include<iostream>
using namespace std;

class Box
{
    private:
        int l, b, h;
    public:
        void setdata(int x, int y, int z)
        {
            l=x;
            b=y;
            h=z;
        }
        void show()
        {
            cout<<"Length => "<<l<<endl;
            cout<<"Breath => "<<b<<endl;
            cout<<"Height => "<<h<<endl;
        }
};

int main()
{
    Box *p, smallBox;
    p = &smallBox;  //This is an object pointer that stores the address of object
    p->setdata(12,14,16);
    p->show();
    return 0;
}