                // File Handling

#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream fOut;  //Create output stream object
    fOut.open("filehandling.dat"); // Open the file if exits else first create that file and open that file in write only mode.
    fOut<<"Hello";  // Write data in the file
    fOut.close();   // Close the file
    
    return 0;
}