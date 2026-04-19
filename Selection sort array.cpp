#include <iostream>
using namespace std;

int main()
{
    int arr[]={6,45,8,2,12};
    int n=5;
    for(int i=1;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }

    cout<<"The sorted the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
