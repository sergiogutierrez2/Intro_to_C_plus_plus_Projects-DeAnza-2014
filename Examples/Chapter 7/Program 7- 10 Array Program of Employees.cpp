// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int index = 0;
   const int NUM_EMPLOYEES = 5;
   int hours[NUM_EMPLOYEES];
   double payrate;

   // Input the hours worked.
   cout << "Enter the hours worked by ";
   cout << NUM_EMPLOYEES << " employees who all\n";
   cout << "earn the same hourly rate.\n";
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
      cout << "Employee #" << (index + 1) << ": ";
      cin >> hours[index];
   }

   // Input the hourly rate for all employees.
   cout << "Enter the hourly pay rate for all the employees: ";
   cin >> payrate;

   // Display each employee's gross pay.
   cout << "Here is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);
   for (index = 0; index < NUM_EMPLOYEES; index++)
   {
      double grossPay = hours[index] * payrate;
      cout << "Employee #" << (index + 1);
      cout << ": $" << grossPay << endl;
   }
   return 0;
}
