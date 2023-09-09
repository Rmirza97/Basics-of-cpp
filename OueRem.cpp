#include<iostream>
using namespace std;
int main()
{
	int divisor,dividend,quotient,remainder;
	
	cout<<"Enter the dividend";
	cin>>dividend;
	
	cout<<"Enter the divisor";
	cin>>divisor;
	
	quotient = dividend/divisor;
	remainder =  dividend % divisor;
	
	cout<<"Quotient = "<< quotient <<endl;
	cout<<"Remainder = "<<remainder;
	
	return 0;
}
