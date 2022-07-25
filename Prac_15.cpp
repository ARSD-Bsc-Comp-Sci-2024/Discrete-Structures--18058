#include<iostream>
#include<cmath>
using namespace std;
int i;
class FUNCTION
{
	private:
	int n;
	double *coefficient;
	double *exponential;
	public:
	void input();
	void display();
	double evaluate(double);
};
void FUNCTION::input()
{
	int n;
	cout << "Enter the number of terms: ";
	cin >> this->n;
	coefficient = new double[n];
	exponential = new double[n];
	for(i=0; i<this->n; i++)
	{
		cout << "Enter coefficient and exponential of term " << i+1 << ": ";
		cin >> coefficient[i] >> exponential[i];
	}
}
void FUNCTION::display()
{
	for(i=0; i<this->n; i++)
	{
		if(coefficient[i] >= 0)
			cout << " + ";
		else
			cout << " - ";
		cout << abs (coefficient[i]);
		if(exponential[i] != 0)
			cout << "(x^" << exponential[i] << ")";
	}
}
double FUNCTION::evaluate(double x)
{
	double result = 0.0;
	for(i=0; i<this->n; i++)
	{
		result += coefficient[i] * (pow(x, exponential[i]));
	}
	return result;
}
int main()
{
	double x;
	FUNCTION ob;
	ob.input();
	cout<<endl;
	cout << "Function is f(x) = ";
	ob.display();
	cout<<endl;
	cout << "\nEnter the value of x: ";
	cin >> x;
	cout << "\nValue of f(" << x << "): " << ob.evaluate(x) << endl;
	return 0;
}
