//This program is of lab 3.1
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime> // For time
#include <cmath> // For the math functions
#include <iomanip> // For setprecision

using namespace std;

int main ()
{
    int x, y;
    double a, b, c;
    // get the system time
    unsigned seed= time(0);

    // seed the random number generator
    srand(seed);

    x= 1 + rand() % 20;
    y= 1 + rand() % 20;

    cout << "The two random numbers are " << x << " and " << y << endl;

    //Square root formula
    a=sqrt(x);
    b= sqrt(y);

    //To force the output to print with 3 digits after the decimal point
    cout << setprecision(3) << fixed;
    cout << "The square root of " << x << " = " << a << endl;
    cout << "The square root of " << y << " = " << b << endl;

    //The average formula
    c = (x+y)/2;

    //To force the output to print with 1 digit after the decimal point
    cout << setprecision(1) << fixed;
    cout << "The average of " << x << " and " << y << " = " << c << endl;

    return 0;
}
