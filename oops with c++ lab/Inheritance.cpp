/***
 * Inheritance
 * ===========
 *      - Class is used to describe properties and behavior of an object.
 *      - It is a process of inheriting properties and behavior of existing class into a new class.
 *      - Existing Class is called as Parint Class, Old Class, Super Class, Main Class and Base Class.
 *      - New Class is called as Child Class, Derived Class, Sub Class.
 *          syntax:-
 *          ======
 *                  Class Parant_Class
 *                  {
 *                  
 *                  };
 *                  Class Child_Class:Visiblity_Class
 *                  {
 *                  };
 *       - Inheritance is the process by which new classes called derived classes are created from existing classes called base classes.
 *       - The derived classes have all the features of the base classes.
 *       - The programmer can chose to add new features specific to the newly created derived class.
 *       - Inheritance provides the idea of reusability i.e., code one written can be used again and again in number of classes.
 *       - The above concept of reusability achieved by inheritance save the programmer's time and effort.Since the main code written can be reused in various situation as needed.
 *       - Any change made to the base class code automatically get propagated to the inherited code. This will provides that it is possible to change one of code and all current object will automatically be updated.
 * 
 * Q. What are different types of inheritance?
 * Ans:- types of inheritance are :->
 *          - Single Inheritance
 *          - Multiple Inheritance
 *          - Multilevel Inheritance
 *          - Hierarchical Inheritance
 *          - Hybrid Inheritance
 *      types of Inheritance in terms of Visiblity:->
 *          - Private
 *          - Public
 *          - Protacted
 * 
 * Single Inheritance
 * ==================
 *          syntax:-
 *          ======
 *                  Class Parant_Class
 *                  {
 *                  
 *                  };
 *                  Class Child_Class:Visiblity_Class
 *                  {
 *                  };
 * Multiple Inheritance
 * ====================
 *          syntax:-
 *          ======
 *                  Class Parant_Class1
 *                  {
 *                  
 *                  };
 *                  Class Parant_Class2
 *                  {
 *                  
 *                  };
 *                  Class Child_Class:Visiblity_Class1,Visiblity_Class2,.....,Visiblity_ClassN
 *                  {
 *                  };
 * Multilevel Inheritance
 * ======================
 *          syntax:-
 *          ======
 *                  Class Parant_Class1
 *                  {
 *                  
 *                  };
 *                  Class Child_Class2:Visiblity_Class1
 *                  {
 *                  
 *                  };
 *                  Class Child_Class3:Visiblity_Class2
 *                  {
 *                  };
 *                  .
 *                  .
 *                  .
 *                  Class Child_Class(N+1):Visiblity_ClassN
 *                  {
 *                  };
 * Hierarchical Inheritance
 * ========================
 *          syntax:-
 *          ======
 *                  Class Parant_Class
 *                  {
 *                  
 *                  };
 *                  Class Child_Class1:Visiblity_Class
 *                  {
 *                  
 *                  };
 *                  Class Child_Class2:Visiblity_Class
 *                  {
 *                  };
 * Hybrid Inheritance
 * ==================
 *          syntax:-
 *          ======
 *                  Class Parant_Class
 *                  {
 *                  
 *                  };
 *                  Class Child_Class1:Visiblity_Class
 *                  {
 *                  };
 *                  Class Child_Class2:Visiblity_Class
 *                  {
 *                  };
 *                  Class Child_Class3:Visiblity_Class1,Visiblity_Class2
 *                  {
 *                  };
 * 
 * Visibility Mode Inheritance:->
 * =============================
 * 
 * Private Inheritance
 * ===================
 * 
 * 
 * Protacted Inheritance
 * =====================
 * 
 * 
 * Public Inheritance
 * ==================
 * 
 * 
 * 
 ***/


// //Single Inheritance Program

// #include<iostream>
// using namespace std;

// //Parant Class
// class Car
// {
//     /** for Variation 1 and 2
//     private:
//         int color_code;
//         char Fuel_type[10];
//     **/

//     //For Variation 3
//     protected:
//         int color_code;
//         char Fuel_type[10];
//     public:
//         void inputdata()
//         {
//             cout<<"Color of car  as \n 1. Silver \n 2. White \n 3. Black \n Enter the Color of your car => ";
//             cin>>color_code;
//             cout<<"Enter your car fuel type => ";
//             cin>>Fuel_type;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
//         void showdata()
//         {
//             if(color_code == 1)
//             {
//                 cout<<"Color of your car is Silver "<<endl;
//             }
//             else if(color_code == 2)
//             {
//                 cout<<"Color of your car is White "<<endl;
//             }
//             else if(color_code == 3)
//             {
//                 cout<<"Color of your car is Black "<<endl;
//             }
//             cout<<"Fuel type of your car is "<<Fuel_type<<endl;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
// };

// //Child Class
// class SportsCar:public Car
// {
//     private:
//         int max_speed;
//         int alarm;
//         int airbags;
//     public:
//         void getdata()
//         {
//             cout<<"Enter the maximum speed of your car => ";
//             cin>>max_speed;
//             cout<<"Enter the number of alarm in your car => ";
//             cin>>alarm;
//             cout<<"Enter the number of airbags in your car => ";
//             cin>>airbags;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
//         void viewdata()
//         {
//             cout<<"Maximum speed of your car => "<<max_speed<<endl;
//             cout<<"Number of alarm in your car => "<<alarm<<endl;
//             cout<<"Number of airbags in your car => "<<airbags<<endl;

//             //for Variation 3
//             if(color_code == 1)
//             {
//                 cout<<"Color of your car is Silver "<<endl;
//             }
//             else if(color_code == 2)
//             {
//                 cout<<"Color of your car is White "<<endl;
//             }
//             else if(color_code == 3)
//             {
//                 cout<<"Color of your car is Black "<<endl;
//             }
//             cout<<"Fuel type of your car is "<<Fuel_type<<endl;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
// };

// int main()
// {
//     Car Swift;
//     SportsCar Tesla;

//     /** variation 1
//     Swift.inputdata();
//     Swift.showdata();
//     Tesla.getdata();
//     Tesla.viewdata();
//     */

//     /** variation 2
//     Tesla.inputdata();
//     Tesla.showdata();
//     Tesla.getdata();
//     Tesla.viewdata();
//     */

//    /**Variation 3 to accessing the instant variable of Parant class in Child Class
//    Tesla.inputdata();
//    Tesla.getdata();
//    Tesla.viewdata();
//    **/

//     return 0;
// }


// // Multiple Inheritance

// #include<iostream>
// #include<math.h>
// using namespace std;

// class A
// {
//     protected:
//         int a, b, c;
//     public:
//         void get()
//         {
//             cout<<"Enter the value of a, b : ";
//             cin>>a>> b;
//             c = a+b;
//         }
// };

// class B
// {   protected:
//         int s;
//     public:
//         void sumOfSquare()
//         {
//             int a = 10, b = 20;
//             s = pow(a,2) + pow(b,3);
//         }

// };

// class C:public A, public B
// {
//     public:
//         void SumOfCube()
//         {
//             int d;
//             d = pow(a,3) + pow(b,3);
//             cout<<"Sum of Cubes : "<<d<<endl;
//             cout<<"Added Value are : "<<c<<endl;
//             cout<<"Sum of square : "<<s<<endl;
//         }
// };


// //Parant Class
// class Car
// {
//     protected:
//         int color_code;
//         char Fuel_type[10];
//     public:
//         void inputdata()
//         {
//             cout<<"Color of car  as \n 1. Silver \n 2. White \n 3. Black \n Enter the Color of your car => ";
//             cin>>color_code;
//             cout<<"Enter your car fuel type => ";
//             cin>>Fuel_type;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
// };

// class SportsCar
// {
//     protected:
//         int max_speed;
//         int alarm;
//         int airbags;
//     public:
//         void getdata()
//         {
//             cout<<"Enter the maximum speed of your car => ";
//             cin>>max_speed;
//             cout<<"Enter the number of alarm in your car => ";
//             cin>>alarm;
//             cout<<"Enter the number of airbags in your car => ";
//             cin>>airbags;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
// };

// class luxurycar:public Car, public SportsCar
// {
//     private:
//         int sunroof;
//         int qled;
//     public:
//         void data()
//         {
//             cout<<"Enter the number of sunroof : ";
//             cin>>sunroof;
//             cout<<"Enter the number of qled : ";
//             cin>>qled;
//             cout<<"---------------*************************------------------------"<<endl;
//         }
//         void viewdata()
//         {
//             if(color_code == 1)
//             {
//                 cout<<"Color of your car is Silver "<<endl;
//             }
//             else if(color_code == 2)
//             {
//                 cout<<"Color of your car is White "<<endl;
//             }
//             else if(color_code == 3)
//             {
//                 cout<<"Color of your car is Black "<<endl;
//             }
//             cout<<"Fuel type of your car is "<<Fuel_type<<endl;
//             cout<<"Maximum speed of your car => "<<max_speed<<endl;
//             cout<<"Number of alarm in your car => "<<alarm<<endl;
//             cout<<"Number of airbags in your car => "<<airbags<<endl;
//             cout<<"Number of sunroof in your car => "<<sunroof<<endl;
//             cout<<"Number of qled in your car => "<<qled<<endl;
//             cout<<"---------------*************************------------------------"<<endl;
//         }

// };

// int main()
// {
//     C obj;
//     obj.get();
//     obj.sumOfSquare();
//     obj.SumOfCube();
//     cout<<"****************************************"<<endl;

//     luxurycar rollroyce;
//     rollroyce.inputdata();
//     rollroyce.getdata();
//     rollroyce.data();
//     rollroyce.viewdata();

//     return 0;
// }