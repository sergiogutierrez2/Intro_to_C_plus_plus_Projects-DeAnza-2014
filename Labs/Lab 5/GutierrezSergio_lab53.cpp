/* This program computes the mean of the consecutive positive
integers n, n+1, n+2, . . . , m, where the user chooses n
and m. For example, if the user picks 3 and 9, then the
program should find the mean of 3, 4, 5, 6, 7, 8, and 9,
which is 6.*/

// Sergio Gutierrez

#include <iostream>

using namespace std;

int main()

{

int value1; // value is some positive number n
int value2; // value is some positive number m
int originalvalue1; // This will always hold a copy of the original value1
int originalvalue2; // This will always hold a copy of the original value2
int counter = 0; // This will count the number of iterations on the for loop to
                 //keep track of the number of numbers between value1 and value2.
int biggestvalue; // Will hold the biggest value between value1 and value2.
int lowestvalue; // Will hold the lowest value between value1 and value2.
int total = 0; // total holds the sum of the first n positive numbers
int number; // the amount of numbers
float mean; // the average of the first n positive numbers


cout << "Please enter the first positive integer" << endl;
cin >> value1;

cout << "Please enter the second positive integer" << endl;
cin >> value2;

originalvalue1 = value1;
originalvalue2 = value2;

if (value1 > value2)
  {
    biggestvalue = value1;
    lowestvalue = value2;
  }
else
  {
    biggestvalue = value2;
    lowestvalue = value1;
  }


if (value1 > 0 && value2 > 0)

  {
    for (lowestvalue; lowestvalue <= biggestvalue; lowestvalue++)
          {
            total = total + lowestvalue;
            counter++;
          }

  mean = float(total) / counter; // note the use of the typecast // operator here
  cout << "The mean average of the positive integers " << originalvalue1 << " and " << originalvalue2 << " is "<< mean << endl;
  }

else
  {
    cout << "Invalid input - integers must be positive numbers" << endl;
  }


return 0;
}
