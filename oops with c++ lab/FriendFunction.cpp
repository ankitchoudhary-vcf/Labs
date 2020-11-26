// Friend Function

#include <iostream>
using namespace std;

class House
{
private:
    int chocolates;
    int jellies;
    int pastries;

public:
    House() //Default constructer
    {
        chocolates = 0;
        jellies = 0;
        pastries = 0;
    }
    House(int NumOfChocolates, int NumOfJellies, int NumOfPastries) //Parametrized constructor
    {
        chocolates = NumOfChocolates;
        jellies = NumOfJellies;
        pastries = NumOfPastries;
    }
    House(House &object) //copy constructor
    {
        chocolates = object.chocolates;
        jellies = object.jellies;
        pastries = object.pastries;
    }
    void eat(); // Instant mamber function
    void set()
    {
        cout << "\nEnter the value of chocolates => ";
        cin >> chocolates;
        cout << "Enter the value of jellies => ";
        cin >> jellies;
        cout << "Enter the value of pastries => ";
        cin >> pastries;
        cout << "*******************************************" << endl;
    }
    void show()
    {
        cout << "Chocolates left => " << chocolates << "\njellies left => " << jellies << "\npastries left => " << pastries << endl;
        cout << "**************************************************" << endl;
    }
    friend House hungary(House); //Friend function
    ~House()              //Destructor
    {
    }
};

void House::eat()
{
    int n, m;
    cout << "What you would like to eat:->" << endl;
    cout << "1. Chocolates" << endl;
    cout << "2. Jellies" << endl;
    cout << "3. pastries" << endl;
    cout << "4. nothing" << endl;
    cout<<"******************************"<<endl;
    while (1)
    {
        cout << "\tEnter your choice => ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "\t\tEnter the amount of chocolates you want to eat => ";
            cin >> m;
            if (m <= chocolates)
            {
                chocolates -= m;
            }
            else
            {
                cout << "\t\tDoesn't having the sufficient amount of chocolates" << endl;
            }

            break;
        case 2:
            cout << "\t\tEnter the amount of jellies you want to eat => ";
            cin >> m;
            if (m <= jellies)
            {
                jellies -= m;
            }
            else
            {
                cout << "\t\tDoesn't having the sufficient amount of jellies" << endl;
            }
            break;
        case 3:
            cout << "\t\tEnter the amount of pastries you want to eat => ";
            cin >> m;
            if (m <= pastries)
            {
                pastries -= m;
            }
            else
            {
                cout << "\t\tDoesn't having the sufficient amount of pastries" << endl;
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "\t\tInvalid choice " << endl;
            break;
        }
    }
}

House hungary(House &obj) //Friend function
{
    obj.eat();
    return obj;
}

int main()
{
    House Rohan; //creation of object
    Rohan.set();
    hungary(Rohan);
    Rohan.show();
}