#include <iostream>
using namespace std;

class Swap
{
public:
    void swap(int &, int &);
    void swap(float *, float *);
    void swap(char &, char &);
};

void Swap::swap(int &a, int &b)
{
    cout << "---------Befor Swap---------" << endl;
    cout << "The first integer value => " << a << endl;
    cout << "The second integer value => " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void Swap::swap(float *a, float *b)
{
    cout << "---------Befor Swap---------" << endl;
    cout << "The first integer value => " << *a << endl;
    cout << "The second integer value => " << *b << endl;
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Swap::swap(char &a, char &b)
{
    cout << "---------Befor Swap---------" << endl;
    cout << "The first integer value => " << a << endl;
    cout << "The second integer value => " << b << endl;
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Swap s;
    int a, b, ch;
    float a1, b1;
    char a2, b2;
    cout << "------Menu for Operation-----------" << endl;
    cout << "\t 1. To Swap integer Values " << endl;
    cout << "\t 1. To Swap Float Values " << endl;
    cout << "\t 1. To Swap Char Values " << endl;
    cout << "\t 4. Exit" << endl;
    while (1)
    {
        cout << "\nEnter your Choice => ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Swaping the Integer values" << endl;
            cout << "Enter the first integer value => ";
            cin >> a;
            cout << "Enter the second integer value => ";
            cin >> b;
            s.swap(a, b);
            cout << "---------After Swap---------" << endl;
            cout << "The first integer value => " << a << endl;
            cout << "The second integer value => " << b << endl;
            cout << "**************************" << endl;
            break;
        case 2:
            cout << "Swaping the Float values" << endl;
            cout << "Enter the first float value => ";
            cin >> a1;
            cout << "Enter the second float value => ";
            cin >> b1;
            s.swap(&a1, &b1);
            cout << "---------After Swap---------" << endl;
            cout << "The first float value => " << a1 << endl;
            cout << "The second float value => " << b1 << endl;
            cout << "**************************" << endl;
            break;
        case 3:
            cout << "Swaping the Char values" << endl;
            cout << "Enter the first char value => ";
            cin >> a2;
            cout << "Enter the second char value => ";
            cin >> b2;
            s.swap(a2, b2);
            cout << "---------After Swap---------" << endl;
            cout << "The first char value => " << a2 << endl;
            cout << "The second char value => " << b2 << endl;
            cout << "**************************" << endl;
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }

    return 0;
}