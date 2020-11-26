                /**
                 * SMA:- Static Memory Allocation
                 * DMA:- Dynamic Memory Allocation 
                */
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;      //Creating of integer block dynamically using "new" operater in C++.
    *ptr = 12;
    cout<<"The Value inside the new block refereed by integer prt = "<<*ptr<<endl;
    float *ptr1;
    ptr1 = new float;       //Creating of float block dynamically using "new" operater in C++.
    *ptr1 = 22.45;
    cout<<"The Value inside the new block refereed by float prt1 = "<<*ptr1<<endl;
    int n;
    cout<<"Enter the number of elements you want -> ";
    cin>>n;
    int *ptr2;
    ptr2 = new int[n];       //Creating of integer array block dynamically using "new" operater in C++.
    cout<<"Enter the values of "<<n<<" element ->"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>ptr2[i];
    }
    cout<<"The Value inside the new block refereed by integer array prt2 are -> "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<ptr2[i]<<endl;
    }
    

    delete ptr;     //Deletion of dynamically created block which was refererred by ptr using "delect" operator.
    delete ptr1;        //Deletion of dynamically created block which was refererred by ptr1 using "delect" operator.
    delete[] ptr2;      //Deletion of dynamically created block which was refererred by ptr2 using "delect" operator.
    
    return 0;
}