#include<iostream>
#include<conio.h>
using namespace std;

class Calculator
{
    public:
            int N1 ,N2 ,Result;

            Calculator()
            {
                N1 = 0;
                N2 = 0;
                Result = 0;
            }

            Calculator(int num1 , int num2)
            {
                N1 = num1;
                N2 = num2;
                Result = 0;
            }

            void Add()
            {
                Result = N1+N2;
             }

            void Sub()
            {
              Result = N1-N2;
            }
        ~Calculator()
        {
            cout<< "\n \n Inside Destructor ";
        }

};

   int main()
   {
       Calculator obj1  ;

       cout<<"\n Enter 1st Number : ";
       cin>>obj1.N1;

       cout<<"\n Enter 2nd Number : ";
       cin>>obj1.N2;

       obj1.Add();
       cout<< "\n Addition of : " << obj1.N1 << " & " << obj1.N2 << " is : " << obj1.Result << ".";

       obj1.Sub();
       cout << "\n Subtraction of : " << obj1.N1 << " & " << obj1.N2 << " is : " << obj1.Result << ".";

       getch();
       return 0;

   }




















