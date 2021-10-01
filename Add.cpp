#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  // declare variables
  double num1, num2, num3;
  double sum, average;

  // take input from end-user
  cout << "Enter three Numbers :: ";
  cin >> num1 >> num2 >> num3;

  // calculate sum value
  sum = num1 + num2 + num3;

  // calculate average value
  average = sum / 3;
  // calculate factorial
  long long int i=2,factorial=1;
  while ((i<=num1)&&(i>=0))
  {
    factorial*=i;
    i++;
  }

  // display result
  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;
  cout <<"Factorial of first no.="<<factorial<<endl;
  if (num1>0)
  cout <<"Square root of first no.="<<sqrt(num1)<<endl;
  if (sqrt(num1)==int(sqrt(num1)))
  cout<<num1<<"Its a perfect square.";
  else
  cout<<num1<<"Its not a perfect square.";
  return 0;
}
