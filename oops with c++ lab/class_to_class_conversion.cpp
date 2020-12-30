#include <bits/stdc++.h>
using namespace std;

class Class_type_one
{
    string a = " ";

public:
    void insert()
    {
        cout << "Enter the String : ";
        cin >> a;
    }
    string get_string()
    {
        return (a);
    }

    void display()
    {
        cout << a << endl;
    }
};
class Class_type_two
{
    string b;

public:
    void operator=(Class_type_one a)
    {
        b = a.get_string();
    }
    void display()
    {
        cout << b << endl;
    }
};

int main()
{
    Class_type_one a;
    Class_type_two b;

    a.insert();

    // CLass type conversion
    // using operator overloading
    b = a;

    a.display();
    b.display();

    return 0;
}