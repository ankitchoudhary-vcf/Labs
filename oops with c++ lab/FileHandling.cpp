                // File Handling

#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream fOut;  //Create output stream object
    fOut.open("filehandling.txt", ios::app); // Open the file if exits else first create that file and open that file in write only mode.
    fOut<<"Hello\n";  // Write data in the file
    fOut.close();   // Close the file

    ifstream fin;  //Create input stream object
    fin.open("filehandling.txt"); // Open the file in read only mode
    string line;
    
    while(fin)  // Reading data from the file
    {
        getline(fin, line);

        cout<<line<<endl;
    }
    fin.close(); // Close file
    
    return 0;
}