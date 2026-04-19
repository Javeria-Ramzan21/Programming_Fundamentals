#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of  array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<size;i++)
    {
            cin>>arr[i];
    }
    cout<<"The original values of array"<<endl;
    for(int i=0;i<size;i++)
    {
            cout<<arr[i]<<endl;
    }
    cout<<"The sorted value of array"<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}
