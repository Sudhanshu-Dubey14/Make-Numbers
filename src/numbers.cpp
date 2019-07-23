/*! 
 *  \file
 *  \brief     Compute numbers related to a Number
 *  \details   This code finds the Factorial of a number and average of two numbers
 *  \author    Sudhanshu Dubey
 *  \version   1.0
 *  \date      28/7/18
 *  \bug       No known bugs.
 */

#include<iostream>
#include"header.h"
using namespace std;

int main()
{ int num1, num2, result, opt;
  cout<<" What do you want to do : \n 1.Find factorial \n 2.Find average\n";
  cin>>opt;
  switch(opt)
  { case 1 : cout<<" Enter number whose factorial is to be found : ";
	     cin>>num1;
	     result=factorial(num1);
	     cout<<" The factorial of "<<num1<<" is "<<result<<"\n";
	     break;

    case 2 : cout<<" Enter two numbers whose average is to be found : ";
	     cin>>num1>>num2;
	     result=average(num1,num2);
	     cout<<" The average of "<<num1<<" & "<<num2<<" is "<<result<<"\n";
	     break;
   
    default : " Invalid input !!!\n";
  }
  return 0;
} 
