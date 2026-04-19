#include <iostream>

using namespace std;

int main()
{
   int age;
   int counter = 0;
   {
       cout << "Enter any counter you want: ";
       cin>> counter;
   }
   int i =1;

   while (i <= counter)
   {
       cout<< "Enter your age" << " " << i << " : " ;
       cin>>age;
       i++;
   }
   return 0;
}
