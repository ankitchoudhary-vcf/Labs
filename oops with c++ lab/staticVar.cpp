#include<iostream>
using namespace std;

void setValue()
{
    int a = 2;
    static int b = 3;
    a++;
    b++;
    printf("%d ", a);
    printf("%d\n", b);
}

class Account
{
    private:
        int balance;
    public:
        static float rateofinterest;    // Static member Variable or class Variable
    public:
        void setData(int a)
        {
            balance = a;
            cout<<balance;
        }
        static void setr(float b)       // Static Member Function
        {
            rateofinterest = b;
            cout<<"\n"<<rateofinterest;
        }
};
float Account::rateofinterest = 0;

int main()
{
    cout<<Account::rateofinterest<<"\n";
    Account a;
    a.setData(5000);
    a.setr(10);
    Account::setr(50);
    // setValue();
    // setValue();

    
    return 0;
}