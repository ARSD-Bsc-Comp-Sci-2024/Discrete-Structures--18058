#include <iostream>
using namespace std;
int linearS(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
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
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    cout<<"Position of the element: "<<linearS(arr,n,key)<<endl;
}
