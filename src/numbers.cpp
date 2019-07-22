#include<iostream>
#include"header.h"
using namespace std;

int main()
{ int num1, num2, result, opt;
  cout<<" What do you want to do : \n 1.Find factorial \n 2.Find average";
  cin>>opt;
  switch(opt)
  { case 1 : cout<<" Enter number whose factorial is to be found : ";
	     cin>>num1;
	     result=factorial(num1);
	     cout<<" The factorial of "<<num1<<" is "<<result;
	     break;

    case 2 : cout<<" Enter two numbers whose average is to be found : ";
	     cin>>num1>>num2;
	     result=average(num1,num2);
	     cout<<" The average of "<<num1<<" & "<<num2<<" is "<<result;
	     break;
   
    default : " Invalid input !!!";
  }
  return 0;
} 
