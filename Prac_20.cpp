#include<iostream>
using namespace std;
int calcNodes(int m, int I)
{
	int result = 0;
	result = I * (m - 1) + 1;
	return result;
}
int main()
{
	int m,I,N;
	cout << "Enter the maximum number of children in full m-ary tree: ";
	cin >> m;
	cout << "Enter the number of internal vertices: ";
	cin >> I;
	N = calcNodes(m, I);
	cout<<endl;
	cout << "Number of leaf nodes in the full m-ary tree: " << N<<endl;
	return 0;
}
