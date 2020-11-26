        // Function Overloading

#include<iostream>
#define pi 3.14

using namespace std;

class Area
{
        public:
                void area(int);
                void area(int, int);
                void area(float, int, int);
};

void Area::area(int a)
{
        cout<<"Area of Circle => "<< pi * a<<endl;
}
void Area::area(int a, int b)
{
        cout<<"Area of Rectangle => "<<a*b<<endl;
}
void Area::area(float t, int a, int b)
{
        cout<<"Area of Triangle => "<<t*a*b<<endl;
}


int main()
{
        int Ch, a, b;
        Area A;
        float t = 0.5;
        cout<<"------Menu for Operation-----------"<<endl;
        cout<<"\t 1. To Calculate area of Circle "<<endl;
        cout<<"\t 1. To Calculate area of Rectangle "<<endl;
        cout<<"\t 1. To Calculate area of Triangle "<<endl;
        cout<<"\t 4. Exit"<<endl;
        while (1)
        {
               cout<<"\nEnter your Choice => ";
               cin>>Ch;
               switch (Ch)
               {
               case 1:
                       cout<<"Enter the radius of circle => ";
                       cin>>a;
                       A.area(a);
                       break;
               case 2:
                       cout<<"Enter the Length of Rectangle => ";
                       cin>>a;
                       cout<<"Enter the Width of Rectangle => ";
                       cin>>b;
                       A.area(a,b);
                       break;
               case 3:
                       cout<<"Enter the base of Triangle => ";
                       cin>>a;
                       cout<<"Enter the height of Triangle => ";
                       cin>>b;
                       A.area(t,a,b);
                       break;
               case 4:
                       exit(0);
                       break; 
               default:
                       cout<<"Invalid Choice "<<endl; 
                       break;
               }
        }

        return 0;
}