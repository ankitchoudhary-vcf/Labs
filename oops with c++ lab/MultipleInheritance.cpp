// Multiple Inheritance

#include<iostream>
#include<math.h>
using namespace std;

class A
{
    protected:
        int a, b, c;
    public:
        void get()
        {
            cout<<"Enter the value of a, b : ";
            cin>>a>> b;
            c = a+b;
        }
};

class B
{   protected:
        int s;
    public:
        void sumOfSquare()
        {
            int a = 10, b = 20;
            s = pow(a,2) + pow(b,3);
        }

};

class C:public A, public B
{
    public:
        void SumOfCube()
        {
            int d;
            d = pow(a,3) + pow(b,3);
            cout<<"Sum of Cubes : "<<d<<endl;
            cout<<"Added Value are : "<<c<<endl;
            cout<<"Sum of square : "<<s<<endl;
        }
};


//Parant Class
class Car
{
    protected:
        int color_code;
        char Fuel_type[10];
    public:
        void inputdata()
        {
            cout<<"Color of car  as \n 1. Silver \n 2. White \n 3. Black \n Enter the Color of your car => ";
            cin>>color_code;
            cout<<"Enter your car fuel type => ";
            cin>>Fuel_type;
            cout<<"---------------*************************------------------------"<<endl;
        }
};

class SportsCar
{
    protected:
        int max_speed;
        int alarm;
        int airbags;
    public:
        void getdata()
        {
            cout<<"Enter the maximum speed of your car => ";
            cin>>max_speed;
            cout<<"Enter the number of alarm in your car => ";
            cin>>alarm;
            cout<<"Enter the number of airbags in your car => ";
            cin>>airbags;
            cout<<"---------------*************************------------------------"<<endl;
        }
};

class luxurycar:public Car, public SportsCar
{
    private:
        int sunroof;
        int qled;
    public:
        void data()
        {
            cout<<"Enter the number of sunroof : ";
            cin>>sunroof;
            cout<<"Enter the number of qled : ";
            cin>>qled;
            cout<<"---------------*************************------------------------"<<endl;
        }
        void viewdata()
        {
            if(color_code == 1)
            {
                cout<<"Color of your car is Silver "<<endl;
            }
            else if(color_code == 2)
            {
                cout<<"Color of your car is White "<<endl;
            }
            else if(color_code == 3)
            {
                cout<<"Color of your car is Black "<<endl;
            }
            cout<<"Fuel type of your car is "<<Fuel_type<<endl;
            cout<<"Maximum speed of your car => "<<max_speed<<endl;
            cout<<"Number of alarm in your car => "<<alarm<<endl;
            cout<<"Number of airbags in your car => "<<airbags<<endl;
            cout<<"Number of sunroof in your car => "<<sunroof<<endl;
            cout<<"Number of qled in your car => "<<qled<<endl;
            cout<<"---------------*************************------------------------"<<endl;
        }

};

int main()
{
    C obj;
    obj.get();
    obj.sumOfSquare();
    obj.SumOfCube();
    cout<<"****************************************"<<endl;

    luxurycar rollroyce;
    rollroyce.inputdata();
    rollroyce.getdata();
    rollroyce.data();
    rollroyce.viewdata();

    return 0;
}