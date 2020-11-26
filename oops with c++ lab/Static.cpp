//Static variables, Static Member variables and Static Member function.

#include <iostream>
using namespace std;

class KiteFunction
{
private:
    int NumberOfKites;  //Instance variable or Member variable
    static int charkha; //Static Variable
public:
    void SetNumberOfKites(int n)
    {
        NumberOfKites = n;
        cout << "No of Kites udai => " << NumberOfKites << endl;
        charkha++;
    }
    void displayCharkhaUse() //Instant Member Function.
    {
        cout << "Charkha used => " << charkha << endl;
    }
    static void see() //Static Member function.
    {
        cout << "Charkha used => " << charkha << endl;
    }
};
int KiteFunction::charkha = 0;

int main()
{
    KiteFunction::see(); // Without Creating object, calling of static member variable using static member function.
    KiteFunction harry, roman, johan;
    harry.displayCharkhaUse();
    roman.displayCharkhaUse();
    johan.displayCharkhaUse();
    harry.SetNumberOfKites(5);
    harry.displayCharkhaUse();
    roman.SetNumberOfKites(10);
    roman.displayCharkhaUse();
    johan.SetNumberOfKites(15);
    johan.displayCharkhaUse();

    return 0;
}