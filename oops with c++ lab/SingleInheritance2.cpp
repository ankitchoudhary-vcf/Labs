/** 
 * 
 * using Protected access specifier to asscess the instant member of Parant class
 *
 **/

#include<iostream>
using namespace std;

class Student
{
    protected:
        char name[30];
        int age;
        char gender[5];
        int totalnumberOfFaculties;
        int totalnumberOfCourses;
};

class ComputerScience:public Student
{
    public:
        void getdata()
        {
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Age : ";
            cin>>age;
            cout<<"Enter Your Gender : ";
            cin>>gender;
            cout<<"Enter the Total Number of Faculties : ";
            cin>>totalnumberOfFaculties;
            cout<<"Enter the Total Number of Courses :  ";
            cin>>totalnumberOfCourses;
        }
        void view()
        {
            cout<<"Name : "<<name<<"\nAge : "<<age<<"\nGender : "<<gender<<endl;
            cout<<"Total Number of Faculties : "<<totalnumberOfFaculties<<"\nTotal Number of Courses : "<<totalnumberOfCourses<<endl;
        }
};

int main()
{
    ComputerScience stud;
    stud.getdata();
    stud.view();
    return 0;
}