#include <iostream>

using namespace std;

int main()
{
   int i = 1;
   int result = 2;

   while (i <= 10)
   {
       cout << "2^" << i << "=" << result << endl;
       result *= 2;
       i++;
   }
return 0;
}
