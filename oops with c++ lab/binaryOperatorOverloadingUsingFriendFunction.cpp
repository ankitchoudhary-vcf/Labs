#include <iostream>

using namespace std;

class A
{
private:
  int a;

public:
  void set_a();
  void get_a();
  friend A operator-(A); // Friend function which takes an object of A and
                         // return an object of A type.
};

// Definition of set_a() function
void A ::set_a() { a = 10; }

// Definition of get_a() function
void A ::get_a() { cout << a << "\n"; }

// Definition of overloaded unary minus operator - friend function
A operator-(A ob)
{
  ob.a = -(ob.a);
  return ob;
}

int main()
{
  A ob;
  ob.set_a();

  cout << "The value of a is : ";
  ob.get_a();

  // Calling operator overloaded function - to negate the value
  ob = -ob; // ob object is passed as an argument to the friend function and its
            // negative version is returned.

  cout << "The value of a after calling operator overloading friend function - "
          "is : ";
  ob.get_a();
}