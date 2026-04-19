#include <iostream>

using namespace std;

int main()
{
  int age ;
  int counter = 0;
  {
      cout << "Enter any counter you want :" << " " ;
      cin >> counter;
  }
  for (int i = 1; i <= counter; i++)
  {
      cout << "Enter your age " << " " << i << " : " ;
      cin >> age;
  }
  return 0;
}
