#include <iostream>
using namespace std;

int main()
{
     int n,temp,rev = 0,sum;

     cout << "Enter a positive number: \n";
     cin >> n;
     temp=n;
     
     while(n>0)
     {
     	rev=n%10;
     	sum=(sum*10)+rev;
     	n=n/10;
	 }
	 
	 if(temp==sum)
	 cout<<"Palindrome number";
	 else
	 cout<<"Not a Palindrome number";
	 
	 return 0;
	 
}	 
