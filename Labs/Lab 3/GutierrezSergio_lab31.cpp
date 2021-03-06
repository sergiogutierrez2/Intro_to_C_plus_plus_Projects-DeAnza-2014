//This program is of lab 3.1
#include <iostream>
#include <iomanip> // For setprecision
#include <string>

using namespace std;

int main ()
{
    int numberitem1, numberitem2;
    const double tax = 0.08675; //This is equivalent to 8.675%
    double subtotal, subtotaltimestax, price1, price2, pricetotal1, pricetotal2, Total;
    string item1, item2;

    //Asking for the info of item 1
    cout << "Enter name of item 1:" << endl;
    getline (cin, item1);
    cout << "Enter number of " << item1 << " and the price of each" << endl;
    cin >> numberitem1 >> price1;

    //Asking for the info of item 2
    cout << "Enter name of item 2:" << endl;
    cin.ignore();
    getline (cin, item2);
    cout << "Enter number of " << item2 << " and the price of each" << endl;
    cin >> numberitem2 >> price2;

    //pricetotal1 is the total cost of the first item (including the amount bought)
    pricetotal1 = price1 * numberitem1;
    //pricetotal2 is the total cost of the second item (including the amount bought)
    pricetotal2 = price2 * numberitem2;
    //The subtotal adds the cost of ALL the items
    subtotal = pricetotal1 + pricetotal2;
    //The subtotaltimestax equals to 8.675% times the cost of all items
    subtotaltimestax = tax * subtotal;
    //The Total is assigned the subtotal plus 8.675% of it.
    Total = subtotal + subtotaltimestax;

    //Displaying receipt with columns left indented
    cout << left << setw(20) << "Item" << setw(8) << "Count" << setw(10) << "Price" << endl;
    cout << setw(20) << "----" << setw(8) << "-----" << setw(10) << "-----" << endl;
    cout << setw(20) << "----" << setw(8) << "-----" << setw(10) << "-----" << endl;
    cout << setw(20) << item1 << setw(8) << numberitem1 << setw(10) << pricetotal1 <<endl;
    cout << setw(20) << item2 << setw(8) << numberitem2 << setw(10) << pricetotal2 << endl;
    cout << setprecision(2) << fixed;
    cout << setw(20) << "Tax" << setw(8) << "" << setw(10) << subtotaltimestax << endl;
    cout << setw(20) << "Total" << setw(8) << "" << setw(10) << Total << endl;

    /* cout << set(20) << item << setw(6) << quantity << setw(10) <<price <<endl; */


    /*To force the output to print with 1 digit after the decimal point
    cout << setprecision(1) << fixed;*/

    return 0;
}
