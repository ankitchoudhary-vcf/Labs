/***
 * Write a program to input and add two times i.e hours, minutes, and seconds using objects as an function arguments and return value.
 ***/

#include<iostream>
using namespace std;

class timmer
{
    private:
       int Hours, Minutes, Seconds; //Instant variables
    public:
        timmer()    //Default Constructor
        {
            Hours = 0;
            Minutes = 0;
            Seconds = 0;
        }
        void settime()  //Instant Member Function
        {
            cout<<"Enter the value of Hours => ";
            cin>>Hours;
            cout<<"Enter the value of Minutes => ";
            cin>>Minutes;
            cout<<"Enter the value of Seconds => ";
            cin>>Seconds;
            cout<<"********************************************"<<endl;
        }
        timmer* AddTime(timmer obj1, timmer obj2)   //Instant Member Function
        {
            this->Seconds += obj1.Seconds + obj2.Seconds;
            this->Minutes += (obj1.Minutes + obj2.Minutes);
            this->Hours += obj1.Hours + obj2.Hours;
            if (this->Seconds >= 60)
            {
                this->Minutes += this->Seconds/60;
                this->Seconds = this->Seconds%60;
            }
            if (this->Minutes >= 60)
            {
                this->Hours += this->Minutes/60;
                this->Minutes = this->Minutes%60;
            }

            return this;
        }
        void show() //Intant Member function
        {
            cout<<"The Time is:- "<<endl;
            cout<<Hours<<":"<<Minutes<<":"<<Seconds<<endl;
            cout<<"************************************"<<endl;
        }

};


int main()
{
    timmer time1, time2, *t , time3; //Declaring object of Class
    cout<<"Enter the time1 Details:- "<<endl;
    time1.settime();
    cout<<"Enter the time1 Details:- "<<endl;
    time2.settime();
    t = &time3; 
    t = t->AddTime(time1,time2);
    time3.show();
    return 0;
}