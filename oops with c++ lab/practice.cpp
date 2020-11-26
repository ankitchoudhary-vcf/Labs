#include<iostream>
using namespace std;

struct person
{
    char name[30];
    int age;
    float salary;
};

void display(int n, struct person);
struct person details(int n , struct person);

struct person details(int n , struct person p[])
{
    int i;
    for(i = 0; i < n; i++)
    {
        cout<<"Enter name of person "<<i+1<<" => ";
        cin>>p[i].name;
        cout<<"Enter age of person "<<i+1<<" => ";
        cin>>p[i].age;
        cout<<"Enter salary of person "<<i+1<<" => ";
        cin>>p[i].salary;
    }

    return p[n];
}



void display(int n ,struct person p[])
{
    int i;
    cout<<"Display the details: "<<endl;
    for(i = 0; i < n; i++)
    {
        cout<<"Name of "<<i+1<<" person => "<<p[i].name<<endl;
        cout<<"Age of "<<i+1<<" person => "<<p[i].age<<endl;
        cout<<"Salary of "<<i+1<<" person => "<<p[i].salary<<endl;

    }
}

int main()
{
    int n;
    cout<<"Enter the number of persons => "<<endl;
    cin>>n;
    struct person g[n];
    g[n] = details(n ,g);
    display(n ,g);
}