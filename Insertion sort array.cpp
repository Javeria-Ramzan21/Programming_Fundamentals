#include <iostream>
using namespace std;

int main()
{
    int arr[]={6,45,8,2,12};
    int n=5;
    int temp;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"The sorted the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
