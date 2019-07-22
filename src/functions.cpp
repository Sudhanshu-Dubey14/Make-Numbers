#include<iostream>
#include"header.h"
using namespace std;

int main()
{ int num, opt;
  char ans;
  cout<<" Enter the number : ";
  cin>>num;
  cout<<" What do you want to check : \n 1.Is number prime?"; 
  cout<<"\n 2.Is it armstrong number? \n 3. Is number a palindrome?";
  cin>>opt;
  switch(opt)
  { case 1 : ans = isprime(num);
	     if( ans = 'y')
		     cout<<num<<" is a prime number.";
	     else if( ans = 'n' )
		     cout<<num<<" is not a prime number.";
	     break;

    case 2 : ans = isarmstrong(num);
	     if( ans = 'y')
		     cout<<num<<" is a armstrong number.";
	     else if( ans = 'n' )
		     cout<<num<<" is not a armstrong number.";
     	     break;

    case 3 : ans = ispalindrome(num);
	     if( ans = 'y')
		     cout<<num<<" is a palindrome.";
	     else if( ans = 'n' )
		     cout<<num<<" is not a palindrome.";
	     break;

    default : cout<<" Invalid input !!!"; 
  }
  return 0;
}  
