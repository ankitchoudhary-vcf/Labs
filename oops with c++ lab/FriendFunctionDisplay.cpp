// Using display function as Friend Function

#include<iostream>
using namespace std;

class Account
{
    private:
       char Name[30];
       float Balance;
       int Age;
    public:
        Account();
        Account(char name, float balance, int age)
        {
            Name = name;
            Balance = balance;
            Age = age;
        }
        Account(Account obj)
        {
            Name = obj.Name;
            Balance = obj.Balance;
            Age = obj.Age;
        }
        friend void display(Account obj);
        ~Account()
        {
        }
};
Account::Account()
{
    cout<<"Enter the Name: ";
    cin>>Name;
    cout<<"Enter the Balance: ";
    cin>>Balance;
    cout<<"Enter the Age: ";
    cin>>Age;
}

void display(Account obj)
{
    cout<<"\t\tName: "<<obj.Name<<endl;
    cout<<"\t\tBalance: "<<obj.Balance<<endl;
    cout<<"\t\tAge: "<<obj.Age<<endl;
    cout<<"****************************"<<endl;
}

int main()
{
    char name[30];
    float balance;
    int age;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your balance: ";
    cin>>balance;
    cout<<"Enter your Age: ";
    cin>>age;
    Account memb1, memb2(name, balance, age), memb3(memb2);
    cout<<"**********************"<<endl;
    display(memb1);
    display(memb2);
    display(memb3);
    return 0;
}