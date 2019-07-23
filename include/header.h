/*! 
 *  \file
 *  \brief     Functions to be used elsewhere
 *  \details   This code contains various mathematical functions that can be used elsewhere
 *  \author    Sudhanshu Dubey
 *  \version   1.0
 *  \date      28/7/18
 *  \bug       No known bugs.
 */

#include<math.h>

/*! \fn	int factorial(int num)
 * \brief	The function to find factorial of a number
 * \return	An integer
 * \param	num	Number whose factorial is to be found
 */

int factorial(int num)
{ int i,fact=1;
  for( i=1; i<=num ; i++)
   fact *= i;
  return fact;
}

/*! \fn	char isprime(int num)
 * \brief	The function to check for prime number
 * \return	A character
 * \param	num	Number whose prime is to be checked
 */

char isprime(int num)
{ int i;
  for( i=2; i<num ; i++ )
  { if( num%i == 0 )
	 return 'n';
    else
	 return 'y';
  }
}

/*! \fn	char ispalindrome(int num)
 * \brief	The function to check for palindrome number
 * \return	A character
 * \param	num	Number whose palindrome is to be checked
 */

char ispalindrome(int num)
{ int i, rev=0;
  for( ; num!=0 ; num/=10 )
   rev = rev*10 + num%10;
  if(rev == num  )
    return 'y';
  else
    return 'n';
}

/*! \fn	char isarmstrong(int num)
 * \brief	The function to check for armstrong number
 * \return	A character
 * \param	num	Number whose armstrong is to be checked
 */

char isarmstrong(int num)
{ int i, arm=0, len=0, Digits[len], num_cpy;
  for( num_cpy=num, i=0 ; num_cpy!=0 ; num_cpy/=10 )
  { len++;
    Digits[i] = num_cpy%10;
  }
  for( i=0; i<len; i++ )
   arm += pow(Digits[i],len);  
  if( arm = num )
	  return 'y';
  else 
	  return 'n';
}

/*! \fn	int average(int num1, int num2)
 * \brief	The function to find average
 * \return	An integer
 * \param	num1	First number
 * \param	num2	Second number
 */

int average( int num1, int num2 )
{ return (num1 + num2)/2;
}
