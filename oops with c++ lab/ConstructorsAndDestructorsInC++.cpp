                    //Constructor and Destructor
/***
 * Types of constructers:->
 *  - Default Constructor :- A constructer that accepts no parameters known as default constructer.
 *  - Parametrized Constructor :- A constructer that can take argument/parameter known as parametrized constructer.
 *  - Copy Constructor :- A constructer that is used to declare and initials an object from another object.
 * 
 * Copy Constructor:=>
 *          - It is used to declare and initialize an objects from another object.
 *          - A copy constructor is a constructor of the form classname(classname &).
 *          - It is used to initialize an instance using values of another instance of sametype.
 *          - A copy constructor  takes a reference to an object of the same Class as argument.
 * 
 * Q. If we haven't make any constructor in C++ program then whether the compiler will make Default constructor behind the scenes?.
 * ans:- yes, Only Default constructor but it can't be visible in source but it is there in object file. and If we have make any of the constructor the compiler will not make any default constructor, so In this case you have to make the default constructor by you own.
 * 
 * 
 * Destructor:=>
 *          - Destructor is an instance member function of a Class.
 *          - The name of destructor is same as the name of class but it is preceded by tilde(~) sign.
 *          - Destructor can never be static.
 *          - Destructor has no return type.
 *          - Destructor takes no argument (No overloading is possible).
 *          - There can be only one destructor in each class.
 *          - Destructor automatically called as soon as object goes out of Scope.
 ***/



#include<iostream>
using namespace std;

/***
 * Creating a Class of Car
 ***/
class Car
{
private:    //Acces Specifier
    float petrol, distance;     //Instance Variable
public:
    Car();  //Default Constructor
    Car(float p)       //Single parametrized constructer.
    {
        petrol = p;
        distance = 0;
    }
    Car(float p, float d)       //Multiple parametrized constructer or Constructer overloading
    {
        petrol = p;
        distance = d;
    }
    Car(Car &object)            //Copy Constructer
    {
        petrol = object.petrol;
        distance = object.distance;
    }
    void show()
    {
        cout<<"The value of Petrol is "<<petrol<<" liter"<<endl;
        cout<<"The value of Distance traveled is "<<distance<<" Km"<<endl;
        cout<<"**********************************************************************************"<<endl;

    }
    ~Car()
    {
        
    }
};

Car::Car()
{
    petrol = 70;
    distance = 0;
}

int main()
{
    Car hondacity(80,5), civic(50, 0), audi, bmw(hondacity); //creating an object
    cout<<"Details of hondacity:-> "<<endl;
    hondacity.show();
    cout<<"Details of civic:-> "<<endl;
    civic.show();
    cout<<"Details of audi:-> "<<endl;
    audi.show();
    cout<<"Details of bmw:-> "<<endl;
    bmw.show();
    return 0;
}
