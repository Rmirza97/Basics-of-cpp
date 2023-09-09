#include <iostream>
using namespace std;

int main()
{
     int num,i,chk=0;

     cout << "Enter a positive number: \n";
     cin >> num;
     
     for(i=2;i<num;i++)
     {
     	if(num%i==0)
     	{
     		chk++;
     		break;
		 }
	 }
	 
	 if(chk==0)
	 	cout<<"\n Prime Number";
	else
	    cout<<"\n Not Prime Number";
	cout<<endl;
	
	return 0;
	
}	
