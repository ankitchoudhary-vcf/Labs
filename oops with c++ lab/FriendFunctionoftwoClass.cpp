            //Adding the instant variable of to classes

#include<iostream>
using namespace std;
class Car2;
class Car1
{
    private:
        float Petrol, Distance;
    public:
        Car1()
        {
            cout<<"\t\tEnter the value of Petrol => ";
            cin>>Petrol;
            cout<<"\t\tEnter the value of Distance => ";
            cin>>Distance;
        }
        Car1(float P, float D)
        {
            Petrol = P;
            Distance = D;
        }
        Car1(Car1 &obj)
        {
            Petrol = obj.Petrol;
            Distance = obj.Distance;
        }
        friend void Add(Car1 obj1, Car2 obj2);
        ~Car1()
        {
        }
};

class Car2
{
    private:
        float Petrol, Distance;
    public:
        Car2()
        {
            cout<<"\t\tEnter the value of Petrol => ";
            cin>>Petrol;
            cout<<"\t\tEnter the value of Distance => ";
            cin>>Distance;
        }
        Car2(float P, float D)
        {
            Petrol = P;
            Distance = D;
        }
        Car2(Car2 &obj)
        {
            Petrol = obj.Petrol;
            Distance = obj.Distance;
        }
        friend void Add(Car1 obj1, Car2 obj2);
        ~Car2()
        {
        }
};

void Add(Car1 obj1, Car2 obj2)
{
    cout<<"Petrol of car1 => "<<obj1.Petrol<<endl;
    cout<<"Petrol of car2 => "<<obj2.Petrol<<endl;
    cout<<"Distance of car1 => "<<obj1.Distance<<endl;
    cout<<"Distance of car2 => "<<obj2.Distance<<endl;
    cout<<"Total Petrol => "<< obj1.Petrol + obj2.Petrol<<endl;
    cout<<"Total Distance => "<< obj1.Distance + obj2.Distance<<endl;
}

int main()
{
    float P, D;
    cout<<"Car1 objects Details:-  "<<endl;
    Car1 honda;
    cout<<"\t\t*****************************"<<endl;
    cout<<"\t\tEnter the value of Petrol => ";
    cin>>P;
    cout<<"\t\tEnter the value of Distance => ";
    cin>>D;
    Car1 audi(P,D), audi2(audi);
    cout<<"***********************************************"<<endl;
    cout<<"Car2 objects Details:-  "<<endl;
    Car2 civic;
    cout<<"\t\t*****************************"<<endl;
    cout<<"\t\tEnter the value of Petrol => ";
    cin>>P;
    cout<<"\t\tEnter the value of Distance => ";
    cin>>D;
    Car2 bmw(P,D), bmw2(bmw);
    cout<<"********************************************"<<endl;
    Add(honda, civic);
    cout<<"***************************"<<endl;
    Add(audi, bmw);
    cout<<"***************************"<<endl;
    Add(audi2, bmw2);
    cout<<"***************************"<<endl;
    return 0;
}