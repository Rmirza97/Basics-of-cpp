#include<iostream>
using namespace std;
int main()
{
	char c,C;
	bool isUpperVowel, isLowerVowel;
	
	cout<<"Enter any Aphabet\n";
	cin>> c;
	
	isLowerVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	isUpperVowel= (C=='A'|| C=='E'|| C=='I'|| C=='O'|| C=='U');
	
	if(!isalpha(c))
	printf("Error! Non-aphabetic character");
	
	else if(isLowerVowel || isUpperVowel)
	    cout<<c<<" is a Vowel";
	else
	    cout<<c<<" is a Consonent";
	    
 return 0;
}
