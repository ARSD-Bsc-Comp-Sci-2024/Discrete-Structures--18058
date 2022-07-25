#include <iostream>
#include <math.h>
using namespace std;
bool ismember(int A[],int n)
{
    int a;
    cout << "Enter the element to be searched: ";
    cin >> a;
    for(int i=0;i<n;i++)
    {
        if(A[i]==a)
            return true;
    }
    return false;
}
void powerSet(int A[], int n)
{
    int pow_size = pow(2,n);
    cout<<"Power set of A: "<<endl;
    for(int i=0 ; i<pow_size; i++)
    {
        for(int j=0 ; j<n; j++)
        {
            if( i & ( 1<<j ))
            {
                cout<<A[j];
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements: ";
    for(int i=0 ; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<ismember(A,n)<<endl;
    powerSet(A,n);
}

