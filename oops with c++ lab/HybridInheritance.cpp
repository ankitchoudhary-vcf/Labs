        // Hybrid Inheritance

#include<iostream>
using namespace std;

class Student
{
    protected:
        char Name[30];
        int Roll;
        char Branch[30];
    public:
        void get()
        {
            cout<<"\nEnter Name of the Student => ";
            cin>>Name;
            cout<<"Enter Roll Number Of the Student => ";
            cin>>Roll;
            cout<<"Enter Branch of the student => ";
            cin>>Branch;
        }
        void show()
        {
            cout<<"\nName of the Student : "<<Name;
            cout<<"\nRoll Number of Student : "<<Roll;
            cout<<"\nBranch of the Student : "<<Branch;
        }
};
class Result:public virtual Student
{
    protected:
        int Marks[5];
        float per = 0;
    public:
        void get1()
        {
            Student::get();
            cout<<"Enter marks of five subjects: \n";
            for(int i = 0; i < 5; i++)
            {
                cout<<"\tSubject "<<(i+1)<<" = ";
                cin>>Marks[i];
            }
        }
        void Show1()
        {
            Student::show();
            cout<<"\nMarks obtained in five subjects are : \n";
            for(int i = 0; i<5; i++)
            {
                cout<<"\tSubject "<<(i+1)<<" = "<<Marks[i]<<endl;
                per = per + Marks[i];
            }
            per /= 5;
            cout<<"\nPercentage of the student : "<<per;
        }
};
class Sports:virtual public Student
{
    protected:
        char Sport[30];
    public:
        void get2()
        {
            cout<<"Enter Student's Interested Sports => ";
            cin>>Sport;
        }
        void show2()
        {
            cout<<"\nStudent's intrested sport : "<<Sport;
        }
};

class College:public Result, public Sports
{
    private:
        int TotalNumberOfFaculties;
    public:
        void get3()
        {
            Result::get1();
            Sports::get2();
            cout<<"Enter total Number of faculties => ";
            cin>>TotalNumberOfFaculties;
        }
        void show3()
        {
            Result::Show1();
            Sports::show2();
            cout<<"\nNumber of Faculties : "<<TotalNumberOfFaculties;
        }

};

int main()
{
    College R;
    R.get3();
    cout<<"\n----------------------------------------------------"<<endl;
    R.show3();
    cout<<"\n****************************************************"<<endl;
    return 0;
}