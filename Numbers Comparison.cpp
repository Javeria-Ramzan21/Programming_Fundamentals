#include <iostream>

using namespace std;

int main()
{
int num1,num2,num3;
    cout << "Enter the 1st number ";
    cin>>num1;
    cout << "Enter the 2nd number ";
    cin>>num2;
    cout << "Enter the 3rd number ";
    cin>>num3;
   switch(0)
    {
    case 0:
        if(num1==num2&&num1==num3)
        {cout<<"All three values are equal"<<endl;}
else if (num1==num2)
   {cout<<"The 1st and 2nd values are equal"<<endl; }
   else if (num1==num3)
   {cout<<"The 1st and 3rd values are equal"<<endl; }
  else if (num3==num2)
   {cout<<"The 3rd and 2nd values are equal"<<endl; }
else
    {cout<<"no values are equal"<<endl;}


}




    return 0;
}
