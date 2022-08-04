#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(a==b)
    return a;
    if (a>b)
    return GCD(a-b,b);
    return GCD(a,b-a);
}
int main(){
    int a,b;
    cout<<"Enter two digits";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<"is: "<<GCD(a,b);
    return 0;
}
