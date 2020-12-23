#include <iostream> 
using namespace std; 
  
// class A 
class A{ 
private: 
    A(){ 
       cout << "constructor of A\n"; 
    } 
    friend class B; 
}; 
  
// class B, friend of class A 
class B{ 
public: 
    B(){ 
        A a1; 
        cout << "constructor of B\n"; 
    } 
}; 


int main(){ 
    B b1; 
    return 0; 
} 