#include<iostream>
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
    int temp = 0;
	int ctr = 0;
	int totalCom = 0;
	for(int i=0; i<n-1; i++)
	{
		ctr = 0;
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j+1] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			ctr++;
			totalCom++;
		}
		cout << "After pass " << i+1 << ": ";
		for(int k=0; k<n; k++)
			cout << arr[k] << " ";
		cout << "\nComparisons made in pass " << i+1 << ": " << ctr;
		cout << endl << endl;
	}
	cout << "Total comparisons: "  << totalCom<<endl;
    return 0;
}
