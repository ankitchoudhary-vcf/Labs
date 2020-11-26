#include<iostream>
using namespace std;

void removeDupWord(string str) 
{ 
   string word = ""; 
   for (auto x : str)
   { 
       if (x == '.') 
       { 
           cout << word << endl; 
           word = ""; 
       } 
       else
       { 
           word = word + x; 
       } 
   }  
   cout << word << endl; 
} 
  
// Driver function 
int main() 
{ 
    float num;
    cout<<"Enter the number => ";
    cin>>num;
    string str = to_string(num); 
    removeDupWord(str); 
    return 0; 
} 