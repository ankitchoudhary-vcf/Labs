/**
 * A reference variable is a variable which can take reference of previously defied variable.
 * - creating a reference for a variable means, creating a new name(allies) for that variable.
 * Syntax:-
 *      int x = 10; //simple variable.
 *      int &a = x; //reference variable.
 * Condition of a reference:- A reference variable must be initalized at thr time of declaration.
 * C++ assign alternative meaning of symbole & here & - is not an address operater.
 * Some Important Points on Reference Variable:-
 *  - Reference means address.
 *  - Reference variable is an internal pointer.
 *  - Declaration of reference variable is precede with '&' symbol (but it does not read as 'address of ')
 *  - It must be initialize during declaration.
 *  - Reference variable cannot be updated.
 * Note:- You cannot have NULL references. Once a reference is initialized to an object, it cannot be changed to refer another Object. A reference must be initialized when it is created.
 * 
 * 
 *  Normal Variable |   Pointer Variable |  Reference Variable
 *                  |                    |
 *  int x = 20;     |   int x = 20;      |  int a = 30;
 *                  |   int *pnt;        |  int &ref = a;
 *                  |   pnt = &x;        |  
 * 
*/
#include<iostream>
using namespace std;
int main()
{
    int x = 10; // Normal Variable
    int &ref = x; // Reference Variable
    ref = 20;
    cout<<"The value of x = "<<x<<endl;
    x = 30;
    cout<<"The Reference variable value of x = "<<ref<<endl;
    return 0;
}