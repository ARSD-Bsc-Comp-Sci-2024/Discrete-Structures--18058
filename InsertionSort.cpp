#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<'\n';
    int i,j,temp;
    for(i=1; i<n ; i++)
    {
        temp=arr[i];
        j=i;
        while(arr[j-1]>temp && j>=1)
        {
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
