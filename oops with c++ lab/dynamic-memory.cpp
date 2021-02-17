#include<iostream>
using namespace std;

class Demo
{
    public:
    int data;
    Demo()
    {
        data = 10;
        cout<<"Constructer"<<endl;
    }
    void show(){
        cout << "data is : " << data<<endl;
    }
    void operator delete(void *p){
        cout << "destructed" << endl;
        free(p);
    }
};

int main()
{
    Demo *d = new Demo;
    d->show();
    delete d;
}
