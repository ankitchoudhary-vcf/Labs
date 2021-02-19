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
    // void operator delete(void *p){
    //     cout << "delete" << endl;
    //     free(p);
    // }
    ~Demo()
    {
        cout << "destructed" << endl;
    }
};

int main()
{
    Demo *d = new Demo;
    delete d;
}
