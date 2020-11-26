        //Single Inheritance

#include<iostream>
using namespace std;

class Student
{
    private:
        char name[30];
        int age;
        char gender[5];
    public:
        void inputdata()
        {
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Age : ";
            cin>>age;
            cout<<"Enter Your Gender : ";
            cin>>gender;
        }
        void show()
        {
            cout<<"Name : "<<name<<"\nAge : "<<age<<"\nGender : "<<gender<<endl;
        }
};

class ComputerScience:public Student
{
    private:
        int totalnumberOfFaculties;
        int totalnumberOfCourses;
    public:
        void getdata()
        {
            cout<<"Enter the Total Number of Faculties : ";
            cin>>totalnumberOfFaculties;
            cout<<"Enter the Total Number of Courses :  ";
            cin>>totalnumberOfCourses;
            cout<<"**************************************************"<<endl;
        }
        void view()
        {
            cout<<"Total Number of Faculties : "<<totalnumberOfFaculties<<"\nTotal Number of Courses : "<<totalnumberOfCourses<<endl;
        }
};

int main()
{
    ComputerScience stud;
    stud.inputdata();
    stud.getdata();
    stud.show();
    stud.view();
    cout<<"**************************************************"<<endl;
    return 0;
}