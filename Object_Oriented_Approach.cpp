#include<iostream>
using namespace std;

class Maths
{
    public:
        int No1,No2,Ans;

        void Add();
        void Sub();

};

void Maths::Add()
{
    Ans = No1+No2;
}

void Maths::Sub()
{
    Ans = No1-No2;
}

 int main()
 {
     Maths obj1,obj2;

     obj1.No1 = 10;
     obj1.No2 = 20;

     obj2.No1 = 20;
     obj2.No2 = 10;

     obj1.Add();
     cout << "Addition is : "<<obj1.Ans<<endl;
     obj1.Sub();
     cout << "Subtraction is : "<<obj1.Ans<<endl;

     obj2.Add();
     cout << "Addition is : "<<obj2.Ans<<endl;
     obj2.Sub();
     cout << "Subtraction is : "<<obj2.Ans<<endl;

     return 0;
 }
