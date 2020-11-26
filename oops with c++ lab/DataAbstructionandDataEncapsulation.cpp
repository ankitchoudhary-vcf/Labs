            /***
             * To Determine the Milage of a Car
             ***/

#include<iostream>
using namespace std;

class Car
{
    private:
        float Milage, Petrol, Distance;
    public:
        void getdata()
        {
            cout<<"\nEnter the Distance Traveled = > ";
            cin>>Distance;
            cout<<"Enter the Petrol used to Travel "<< Distance << " distance => ";
            cin>>Petrol;
            calculate();
        }
        void calculate()
        {
            Milage = Distance / Petrol;
            Show();
        }
        void Show()
        {
            cout<<"The Milage of the Car => "<<Milage<<endl;
            cout<<"***************************************************************"<<endl;
        }
};


int main()
{
    Car HondaCity, Civic;
    HondaCity.getdata();
    Civic.getdata();
    return 0;
}