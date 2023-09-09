#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After Swapping \n"<<"a="<<a<<" ,b="<<b;
	
	return 0;
}
