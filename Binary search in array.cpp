#include <iostream>

using namespace std;

int main()
{
   int seq[12]={10,20,30,50,60,70,80,90,100,110,120};
   int i,h,loc=-1,mid,start=0,end=11;
   cout<<"Enter value to find: ";
   cin>>h;
  while(start<=end)
  {
      mid=(start+end)/2;
      if(seq[mid]==h)
      {
          loc=mid;
          break;
      }
      else if(h<seq[mid])
        end=mid-1;
      else
        start=mid+1;
  }
  if(loc==-1)
    cout<<"Value not found"<<endl;
  else
    cout<<"Value found at index "<<loc;
    return 0;
}
