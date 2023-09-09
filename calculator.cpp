#include<iostream>
using namespace std;
int main()
{
	char cal;
	float num1,num2;
	
	cout<<"Enter the Operators: \n";
	cin>>cal;
	
	cout<<"Enter the two operands: \n";
	cin>>num1>>num2;
	
	switch(cal){
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
			
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
			
		case'*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
			
		case'/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;
			
		default:
			cout<<"Error! Operator is not Correct.";
			break;

	}
 return 0;
}
