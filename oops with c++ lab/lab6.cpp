                /***
                 * Bank 
                 ***/

#include <iostream>
using namespace std;

class Bank
{
private:
    int Acc_Number;
    char Acc_Holder_Name[30];
    float Acc_Balance;

public:
    void open_Account()
    {
        cout << "TO a new Open Account Enter the following details : " << endl;
        cout << "Enter the Acc_Number => ";
        cin >> Acc_Number;
        cout << "Enter the Acc_Holder_Name => ";
        cin >> Acc_Holder_Name;
        cout << "Enter the Acc_Balance => ";
        cin >> Acc_Balance;
    }
    void Show_Account()
    {
        cout<<"The Account Details are :-> "<<endl;
        cout<<"ACC_Number => "<<Acc_Number<<endl;
        cout<<"ACC_Holder_Name => "<<Acc_Holder_Name<<endl;
        cout<<"ACC_Balance => "<<Acc_Balance<<endl;
        cout<<"--------------------------------------------"<<endl;
        cout<<"*******************************************************************"<<endl;
    }
    void Deposit(float b)
    {
        Acc_Balance += b;
    }
    void Withdraw(float b);
    int Search(int n, int ACC_No, Bank memb[]);
};

int Bank::Search(int n, int ACC_No, Bank memb[])
{
    int ctr = 1, found = 0;
    for(int i = 1; i<=n; i++)
    {
        if(memb[i].Acc_Number != ACC_No)
        {
            ctr++;
        }
        else
        {
            found++;
            break;
        }
        
    }
    if(found == 0)
    {
        return 0;
    }
    else
    {
        return ctr;
    }
    
}

void Bank::Withdraw(float b)
{
    if (Acc_Balance >= b)
    {
        Acc_Balance -= b;
    }
    else
    {
        cout<<"-------------Your Account doesn't have enough money to withdrawal-------------"<<endl;
    }
    
}

void menu()
{
    cout<<"\n\nMenu of operation"<<endl;
    cout<<"\t\t1.To open a new Account"<<endl;
    cout<<"\t\t2.To see the Account Details"<<endl;
    cout<<"\t\t3.To Deposit the money in your Account"<<endl;
    cout<<"\t\t4.To Withdrawal the money in your Account"<<endl;
    cout<<"\t\t5.To Search and see your Account details"<<endl;
    cout<<"\t\t6.Exit";
    cout<<"--------------------------------------------------------------"<<endl;
}

int main()
{   
    int n, i, ch, m;
    cout<<"\n\n-----Enter the number of Accounts you want to create => ";
    cin>>n;
    m = n*n;
    Bank memb[m];
    for(int i = 1; i<= n; i++)
    {
        memb[i].open_Account();
    }
    menu();
    
    while(1)
    {
        cout<<"\nEnter Your Choice => ";
        cin>>ch;
        if (ch == 1)
        {
            n += 1;
            memb[n].open_Account();
            cout<<"--------------You have created a new Account Susscessfully--------------"<<endl;
            cout<<"*******************************************************************"<<endl;

        }
        else if(ch == 2)
        {
            for(int i = 1; i<=n; i++)
            {
                memb[i].Show_Account();
            }
        }
        else if (ch == 3)
        {
            int AccNO;
            float b;
            cout<<"Enter the Account Number in which you want to deposit money => ";
            cin>>AccNO;
            cout<<"Enter the amount you want to deposit => ";
            cin>>b;
            int pos = memb->Search(n, AccNO, memb);
            if(pos == 0)
            {
                cout<<"-------------Account doesn't exist------------"<<endl;
            }
            else
            {
                memb[pos].Deposit(b);
                cout<<"-----------You have deposited Rs. "<<b<<"amount into "<<AccNO<<" account-----------"<<endl;
                memb[pos].Show_Account();
                cout<<"*******************************************************************"<<endl;
            }
        }
        else if (ch == 4)
        {
            int AccNO;
            float b;
            cout<<"Enter the Account Number from which you want to withdrawal money => ";
            cin>>AccNO;
            cout<<"Enter the amount you want to withdrawal => ";
            cin>>b;
            int pos = memb->Search(n, AccNO, memb);
            if(pos == 0)
            {
                cout<<"-------------Account doesn't exist------------"<<endl;
            }
            else
            {
                memb[pos].Withdraw(b);
                cout<<"-----------You have withdrawl Rs. "<<b<<"amount from "<<AccNO<<" account-----------"<<endl;
                memb[pos].Show_Account();
                cout<<"*******************************************************************"<<endl;
            }
        }
        else if (ch == 5)
        {
            int AccNo, pos;
            cout<<"Enter the Account Number you want to see => ";
            cin>>AccNo;
            pos = memb->Search(n, AccNo, memb);
            if(pos == 0)
            {
                cout<<"-------------Account doesn't exist------------"<<endl;   
            }
            else
            {
                memb[pos].Show_Account();
                cout<<"*******************************************************************"<<endl;
            }
            
        }
        else if(ch == 6)
        {
            exit(0);
        }
        else
        {
            cout << "Wrong Option" << endl;
        }
        
        
    }
    
    return 0;
}