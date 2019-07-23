/*! 
 *  \file
 *  \brief     Check for properties of a Number
 *  \details   This code checks whether a number is Armstrong, Prime or Palindrone
 *  \author    Sudhanshu Dubey
 *  \version   1.0
 *  \date      28/7/18
 *  \bug       No known bugs.
 */

#include<iostream>
#include"header.h"
using namespace std;

/*! \fn	int main()
 * \brief	The main function of this file
 * \return	An integer
 */
int main()
{ /*! \var	num
   * The number on which operation is to be performed
   * \var	opt
   * The option of operation chosen by user
   * \var	ans
   * The answer returned by functions
   */ 
  int num, opt;
  char ans;
  cout<<" Enter the number : ";
  cin>>num;
  cout<<" What do you want to check : \n 1. Is number prime?"; 
  cout<<"\n 2. Is it armstrong number? \n 3. Is number a palindrome?\n";
  cin>>opt;
  switch(opt)
  { case 1 : ans = isprime(num);
	     if( ans = 'y')
		     cout<<num<<" is a prime number.\n";
	     else if( ans = 'n' )
		     cout<<num<<" is not a prime number.\n";
	     break;

    case 2 : ans = isarmstrong(num);
	     if( ans = 'y')
		     cout<<num<<" is a armstrong number.\n";
	     else if( ans = 'n' )
		     cout<<num<<" is not a armstrong number.\n";
     	     break;

    case 3 : ans = ispalindrome(num);
	     if( ans = 'y')
		     cout<<num<<" is a palindrome.\n";
	     else if( ans = 'n' )
		     cout<<num<<" is not a palindrome.\n";
	     break;

    default : cout<<" Invalid input !!!\n"; 
  }
  return 0;
}  
