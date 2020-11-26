            /***
             * Mini Bank Project
             ***/

#include <iostream>
using namespace std;


/***
 * Creating a BankMember Class
 ***/
class BankMember
{
private:
    /***
     * Creating a Singly Linked List to store the Bank Members Details
     ***/
    struct BankMembersDetail
    {
        long int Acc_Number;       // To store Account Number Of the Bank Member.
        char Acc_Holder_Name[30]; // To Store Account Holder Name Of Bank Member.
        float Acc_Balance;        // To Store Account Balance Of Bank Member.
        struct BankMembersDetail *next;
    };
public:
    struct BankMembersDetail *Start = NULL;
    
    /***
     * getAccount Function is to get the Account templet for the new Bank Member.
     ***/
    struct BankMembersDetail *getAccount()
    {
        struct BankMembersDetail *n;
        n = new BankMembersDetail;
        return (n);
    }

    /***
     * OpenAccount Function is used to Create a Account for the new Bank Member.
     ***/
    void OpenAccount()
    {
        struct BankMembersDetail *temp, *t;
        int ch, n, i;
        temp = getAccount();
        cout<<"Your Choices are :-> "<<endl;
        cout<<"\t\t1.To Open a Single account"<<endl;
        cout<<"\t\t2.To Open Multiple account at a time"<<endl;
        cout<<"************************************************************************"<<endl;
        cout<<"\tEnter your choice for Creating an Account => ";
        cin>>ch;
        cout<<"************************************************************************"<<endl;

        switch (ch)
        {
        case 1:
            cout<<"Enter the following details to Open an account :->"<<endl;
            cout<<"Enter Account Number => ";
            cin>>temp->Acc_Number;
            cout<<"Enter Account Holder Name => ";
            cin>>temp->Acc_Holder_Name;
            temp->Acc_Balance = 0;
            temp->next = NULL;
            if(Start == NULL)
            {
                Start = temp;
            }
            else
            {
                t = Start;
                while (t->next != NULL)
                {
                    t = t->next;
                }
                t->next = temp;
            }
            cout<<"------------------------Account has been Susscessfully Open------------------------"<<endl;
            cout<<"************************************************************************"<<endl;
            cout<<"************************************************************************"<<endl;  
            break;
        case 2:
            cout<<"Enter the following details to Open an account :->"<<endl;
            cout <<"Enter the Number of account you need to Open => ";
            cin>>n;
            for(i = 1; i<=n; i++)
            {
                temp = getAccount();
                cout<<"Enter Account Number => ";
                cin>>temp->Acc_Number;
                cout<<"Enter Account Holder Name => ";
                cin>>temp->Acc_Holder_Name;
                temp->Acc_Balance = 0;
                temp->next = NULL;
                if(Start == NULL)
                {
                    Start = temp;
                }
                else
                {
                    t = Start;
                    while (t->next != NULL)
                    {
                        t = t->next;
                    }
                    t->next = temp;
                }

            }
            cout<<"------------------------Account has been Susscessfully Open------------------------"<<endl;
            cout<<"************************************************************************"<<endl;
            cout<<"************************************************************************"<<endl;
            break;
        default:
            cout<<"------------Please Enter the valid choice------------"<<endl;
            OpenAccount();
            break;
        }
    }

    /***
     * ShowAccount Function is used to Display the Bank Accounts Details
     ***/
    void ShowAccount()
    {
        struct BankMembersDetail *temp;
        temp = Start;
        if (temp == NULL)
        {
            cout<<"---------------The Bank doesn't have any account---------------"<<endl;
        }
        else
        {
            cout<<"Bank Account Details are :-> "<<endl;
            while (temp != NULL)
            {
                cout<<"Account Number => "<<temp->Acc_Number<<endl;
                cout<<"Account Holder Name => "<<temp->Acc_Holder_Name<<endl;
                cout<<"Account Balance => "<<temp->Acc_Balance<<endl;
                cout<<"------------------------------------------------------------------------------"<<endl;
                temp = temp->next;
            }
            cout<<"------------------------Account Details has been Susscessfully Displayed------------------------"<<endl;
            cout<<"************************************************************************"<<endl;
        }
        cout<<"************************************************************************"<<endl;  
    }

    /***
     * ShowAccountAtPos Function is used to see the status of a particular Bank Account
     ***/
    void ShowAccountAtPos(int pos)
    {
        struct BankMembersDetail *temp;
        temp = Start;
        int ctr = 1;
        while (ctr<pos)
        {
            temp = temp->next;
            ctr++;
        }
        cout<<"Account Number => "<<temp->Acc_Number<<endl;
        cout<<"Account Holder Name => "<<temp->Acc_Holder_Name<<endl;
        cout<<"Account Balance => "<<temp->Acc_Balance<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        
    }

    /***
     * SearchforAccount Function is used to search for a particular Bank Account
     ***/
    int searchforAccount(long int AccountNumber, struct BankMembersDetail *ptr);

    /***
     * DepositAmount Function is used to Deposit an Amount to the particular Bank Account
     ***/
    void DepositAmount(struct BankMembersDetail *ptr);

    /***
     * WithdrawalAmount Function is used to Withdrawal an Amount from the particular Bank Account
     ***/
    void WithdrawalAmount(struct BankMembersDetail *ptr);
};

/***
 * Asscessing the searchforAccount Function using Scope Resolution Operater(::)
 ***/
int BankMember::searchforAccount(long int AccountNumber, struct BankMembersDetail *ptr)
{
    struct BankMembersDetail *temp;
    temp = ptr;
    if(temp == NULL)
    {
        cout<<"---------------The Bank doesn't have any account---------------"<<endl;
    }
    else
    {
        int ctr, found = 0;
        ctr = 1;
        while (temp->next != NULL)
        {
            if(temp->Acc_Number == AccountNumber)
            {
                found++;
                break;
            }
            else
            {
                ctr++;
                temp = temp->next;
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
    return 0;
}

/***
 * Asscessing the DepositAmount Function using Scope Resolution Operater(::)
 ***/
void BankMember::DepositAmount(struct BankMembersDetail *ptr)
{
    struct BankMembersDetail *temp;
    temp = ptr;
    long int AccountNumber;
    float Amount;
    int pos, ctr = 1;
    cout<<"Enter the Account Number in which you want to deposit amount => "<<endl;
    cin>>AccountNumber;
    pos = searchforAccount(AccountNumber, ptr);
    if (pos == 0)
    {
        cout<<"---------------Account doesn't Exist---------------"<<endl;
    }
    else
    {
        while (ctr<pos)
        {
            temp = temp->next;
            ctr++;
        }
        cout<<"Enter the amount you want to deposit => ";
        cin>>Amount;
        temp->Acc_Balance += Amount;
        cout<<"------------------------You have Susscessfully deposited the amount------------------------"<<endl;
        cout<<"************************************************************************"<<endl;
        cout<<"The Net Balance => "<< temp->Acc_Balance<<endl;
        cout<<"************************************************************************"<<endl;
    }
    cout<<"************************************************************************"<<endl;
}

/***
 * Asscessing the WithdrawalAmount Function using Scope Resolution Operater(::)
 ***/
void BankMember::WithdrawalAmount(struct BankMembersDetail *ptr)
{
    struct BankMembersDetail *temp;
    temp = ptr;
    long int AccountNumber;
    float Amount;
    int pos, ctr = 1;
    cout<<"Enter the Account Number from which you want to withdrawal amount => "<<endl;
    cin>>AccountNumber;
    pos = searchforAccount(AccountNumber, ptr);
    if (pos == 0)
    {
        cout<<"---------------Account doesn't Exist---------------"<<endl;
    }
    else
    {
        while (ctr<pos)
        {
            temp = temp->next;
            ctr++;
        }
        cout<<"Enter the amount you want to withdrawal => ";
        cin>>Amount;
        if (temp->Acc_Balance >= Amount)
        {
            temp->Acc_Balance -= Amount;
            cout<<"------------------------You have Susscessfully withdrawal amount------------------------"<<endl;
            cout<<"************************************************************************"<<endl;
        }
        else
        {
            cout<<"-------------------Your Account doesn't have enough Amount to withdrawal-------------------"<<endl;
        }
        cout<<"The Net Balance => "<< temp->Acc_Balance<<endl;
        cout<<"************************************************************************"<<endl;
    }
    cout<<"************************************************************************"<<endl;
}

/***
 * Menu Card to perform the Operation in Bank
 ***/
void menu()
{
    cout << "\n\nMenu of operation" << endl;
    cout << "\t\t1.To open a new Account" << endl;
    cout << "\t\t2.To see the Account Details" << endl;
    cout << "\t\t3.To Deposit the money in your Account" << endl;
    cout << "\t\t4.To Withdrawal the money in your Account" << endl;
    cout << "\t\t5.To Search and see your Account details" << endl;
    cout << "\t\t6.Exit";
    cout << "--------------------------------------------------------------" << endl;
}

/***
 * Main Function to Run the Bank Management System
 ***/
int main()
{
    int ch, pos;
    long int AccountNumber;
    BankMember Bank;
    menu();
    while (1)
    {
        cout<<"Enter your Choice => ";
        cin>>ch;
        cout<<"------------------------------------------------------------------------------------"<<endl;
        switch (ch)
        {
        case 1:
            Bank.OpenAccount();
            break;
        case 2:
            Bank.ShowAccount();
            break;
        case 3:
            Bank.DepositAmount(Bank.Start);
            break;
        case 4:
            Bank.WithdrawalAmount(Bank.Start);
            break;
        case 5:
            cout<<"Enter the account Number you want to search => ";
            cin>>AccountNumber;
            pos = Bank.searchforAccount(AccountNumber, Bank.Start);
            Bank.ShowAccountAtPos(pos);
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"----------------Please Enter the valid choice----------------"<<endl;
            break;
        }
    }
    return 0;
}