        // Multi-level

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

class Marks:public Student
{
    protected:
        int Marks[5];
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
        void show1()
        {
            Student::show();
            cout<<"\nMarks obtained in five subjects are : \n";
            for(int i = 0; i<5; i++)
            {
                cout<<"\tSubject "<<(i+1)<<" = "<<Marks[i]<<endl;
            }
        }
};

class Result:public Marks
{
    private:
        float per;
    public:
        void Show2()
        {
            Marks::show1();
            for(int i = 0; i<5; i++)
            {
                per = per + Marks[i];
            }
            per /= 5;
            cout<<"\nPercentage of the student : "<<per<<"%";
            if(per>=90)
            {
                cout<<"\nGrade of the student : "<<"A";
            }
            else if(per>=80 && per<90)
            {
                cout<<"\nGrade of the student : "<<"B";
            }
            else if(per>=70 && per<80)
            {
                cout<<"\nGrade of the student : "<<"C";
            }
            else if(per>=60 && per<70)
            {
                cout<<"\nGrade of the student : "<<"D";
            }
            else
            {
                cout<<"\nGrade of the student : "<<"Fail";
            }
        }
};

int main()
{
    Result R;
    R.get1();
    cout<<"\n----------------------------------------------------"<<endl;
    R.Show2();
    cout<<"\n****************************************************"<<endl;
    return 0;
}