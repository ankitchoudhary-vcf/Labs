            // Program to Calculate Simple Intrest

#include<iostream>
using namespace std;

class SimpleInterst
{
    private:
        float Amount, Intrest, S_I;
        int Time;
    public:
        SimpleInterst()
        {
            Amount = 0;
            Intrest = 0;
            Time = 0;
            S_I = Calculator();
        }
        SimpleInterst(SimpleInterst &object)
        {
            Amount = object.Amount;
            Intrest = object.Intrest;
            Time = object.Time;

            S_I = Calculator();
        }
        SimpleInterst(float P, float R, float T)
        {
            Amount = P;
            Intrest = R;
            Time = T;
            S_I = Calculator();
        }
        int Calculator()
        {
            S_I = Amount*Intrest*Time/100;
            return S_I;
        }
        void Show()
        {
            cout<<"The Simple Intrest => "<<S_I<<endl;
            cout<<"******************************************************"<<endl;
        }
};

int main()
{
    SimpleInterst a, b(1000, 20, 4), c(b);
    a.Show();
    b.Show();
    c.Show();
    return 0;
}