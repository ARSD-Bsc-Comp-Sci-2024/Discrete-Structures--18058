#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<'\n';
    int counter=0;
    while(counter<n-1)
    {
        for(int i=0;i<n-counter-1;i++)
        {
           if(a[i]>a[i+1])
           {
               int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
           }
        }
        counter++;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
