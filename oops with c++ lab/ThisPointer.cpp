/**
 * This Pointer:-
 *  - This is a keyword.
 *  - This is a local object pointer in every instant member function containing the address of the caller object.
 *  - This pointer used to refers to Caller object of member function.
 * **/

#include<iostream>
using namespace std;

class Box
{
    private:
        int l, b, h;
    public:
        void setdata(int l, int b, int h)
        {
            this->l=l;
            this->b=b;
            this->h=h;
        }
        void show()
        {
            cout<<"Length => "<<this->l<<endl;
            cout<<"Breath => "<<this->b<<endl;
            cout<<"Height => "<<this->h<<endl;
        }
};

int main()
{
    Box smallBox;
    smallBox.setdata(12,14,16);
    smallBox.show();
    return 0;
}