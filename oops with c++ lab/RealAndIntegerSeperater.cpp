            // Program to Seperat real and integer part

#include<iostream>
using namespace std;

class Seprater
{
    private:
        float numb;
        float integer;
        int real;
    public:
        Seprater()          //Default Constructor
        {
            float number;
            cout<<"Enter the number => ";
            cin>>number;
            numb = number;
            Seprate();
        }
        Seprater(float N)           //Parametrized Constructor
        {
            numb = N;
            Seprate();
        }
        Seprater(Seprater &object)          //Copy Constructor
        {
            numb = object.numb;
            integer = object.integer;
            real = object.real;
        }
        void Seprate()      // Member Function
        {
            real = numb;
            integer = numb - real;

        }
        void Show()     // Member Function
        {
            cout<<"The Real Part => "<<real<<endl;
            cout<<"The Integer Part =>"<<integer<<endl;
            cout<<"*****************************************************************"<<endl;
        }
        ~Seprater()
        {
        }
};

int main()
{
    float number;
    cout<<"Enter the number => ";
    cin>>number;
    Seprater num1, num2(number), numb3(num2);
    num1.Show();
    num2.Show();
    numb3.Show();
    return 0;
}