        //Hierarchical

#include<iostream>
#include<math.h>
using namespace std;

class Area
{
    protected:
        float area;
    public:
        Area()
        {
            area = 0;
        }
};

class Rectangle:public Area
{
    private:
        float length;
        float width;
    public:
        void get()
        {
            cout<<"Enter the length of Rectangle => ";
            cin>>length;
            cout<<"Enter the width of Rectangle => ";
            cin>>width;
        }
        Rectangle()
        {
            get();
        }
        Rectangle(float a, float b)
        {
            length = a;
            width = b;
        }
        void show()
        {
            area = length*width;
            cout<<"Area of Rectangle : "<<area<<endl;
        }
};

class IsosalasTriangle:public Area
{
    private:
        float side_a;
        float side_b;
    public:
        void get1()
        {
            cout<<"Enter the side 'a' of Isosalas Triangle => ";
            cin>>side_a;
            cout<<"Enter the side 'b' of Isosalas Triangle => ";
            cin>>side_b;
        }
        IsosalasTriangle()
        {
            get1();
        }
        void show1()
        {
            area = side_b*sqrt((4*pow(side_a,2) - pow(side_b,2)))/4;
            cout<<"Area of Isosalas Triangle : "<<area<<endl;     
        }
};

class Cylinder:public Area
{
    private:
        float radius;
        float height;
    public:
        void get2()
        {
            cout<<"Enter the base radius of cylinder => ";
            cin>>radius;
            cout<<"Enter the height Of cylinder => ";
            cin>>height;
        }
        Cylinder()
        {
            get2();
        }
        Cylinder(float a, float b)
        {
            radius = a;
            height = b;
        }
        void show2()
        {
            area = 3.14*pow(radius,2)*height;
            cout<<"Area of Cylinder : "<<area<<endl;
        }
};

int main()
{
    Rectangle R;
    cout<<"------------------------------"<<endl;
    R.show();
    cout<<"************************************"<<endl;
    IsosalasTriangle T;
    cout<<"------------------------------"<<endl;
    T.show1();
    cout<<"************************************"<<endl;
    Cylinder C;
    cout<<"------------------------------"<<endl;
    C.show2();
    cout<<"************************************"<<endl;
    return 0;
}