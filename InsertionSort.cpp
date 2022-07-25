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
    int temp=0;
	int ctr = 0;
	int totalCom = 0;
	int i,j,k;
	for(i=1; i<n; i++)
	{
		temp = arr[i];
		ctr = 0;
		for(j=i-1; j>=0; j--)
		{
			ctr++;
			totalCom++;
			if(arr[j] > temp)
			{
				arr[j+1] = arr[j];
			}
			else
				break;
		}
		arr[j+1] = temp;
		cout << "After pass " << i << ": ";
		for(k=0; k<n; k++)
			cout << arr[k] << " ";
				cout << "\nComparisons made in pass " << i << ": " << ctr;
		cout << endl << endl;
	}
	cout << "Total comparisons: "  << totalCom<<endl;
    return 0;
}
