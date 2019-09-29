// NAME             :   Shelby Alexander
// GROUP            :   Argon
// LAST MODIFIED    :   28 September 2018
// PROBLEM ID       :   Deitel 1.23 Arithmetic Problem
// DESCRIPTION      :   Prompts user for two numbers, and
//                      calculates and displays the sum,
//                      product, difference, and quotient.
// SOURCES/HELP     :   Mr. H, Deitel, Ava Apolo, Sawyer
//                      Barton, Kohler Briggs

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    float num1, num2, quotient, sum, product, difference;
    int numRuns;
    
    // prompt user for number of runs
    cout << "\n\n\nHow many times do you want the program to run?  ";
    cin >> numRuns;
    
    // repeats program
    for (int j = 0; j < numRuns; j++)
    {
        // prompt user for inputs
        cout << "\n\nEnter two numbers:  ";
        cin >> num1 >> num2;
        
        // adds and divides the two numbers
        quotient = num1 / num2;
        sum = num1 + num2;
        product = num1 * num2;
        difference = num1 - num2;
        
        // displays the sum and quotient of both numbers
        cout << "\nSum is " << sum << endl;
        cout << "Difference is " << difference << endl;
        cout << "Product is " << product << endl;
        cout << "Quotient is " << quotient << endl;
    }
    
    // exit program
    cout << "\n\n\n\n";
    return 0;
}
