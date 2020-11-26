        // To Calculate the mean value of two number

#include<iostream>
using namespace std;

class Demo
{
    private:
        float num1, num2;
    public:
        Demo()
        {
            cout<<"Enter the value of num1 => ";
            cin>>num1;
            cout<<"Enter the value of num2 => ";
            cin>>num2;
        }
        Demo(float numb1, float numb2)
        {
            num1 = numb1;
            num2 = numb2;
        }
        Demo(Demo &obj)
        {
            num1 = obj.num1;
            num2 = obj.num2;
        }
        void show()
        {
            cout<<"The value of num1 => "<<num1<<"\nThe Value of num2 => "<<num2;
        }
        friend void Mean(Demo);
        ~Demo()
        {
        }
};

void Mean(Demo obj)
{
    float mean;
    mean = (obj.num1 + obj.num2)/2;
    cout<<"\nThe Mean of "<<obj.num1<< "and "<<obj.num2<<" => "<<mean<<endl;
    cout<<"*********************************"<<endl;

}

int main()
{
    float numb1, numb2;
    cout<<"Enter the value of num1 => ";
    cin>>numb1;
    cout<<"Enter the value of num2 => ";
    cin>>numb2;
    cout<<"***************************"<<endl;
    Demo mean1, mean2(numb1, numb2);
    cout<<"Mean1 is :- "<<endl;
    mean1.show();
    Mean(mean1);
    cout<<"Mean2 is :- "<<endl;
    mean2.show();
    Mean(mean2);
    return 0;
}