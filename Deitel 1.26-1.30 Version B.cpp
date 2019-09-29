// NAME             :   Shelby Alexander
// GROUP            :   Argon
// LAST MODIFIED    :   28 November 2018
// PROBLEM ID       :   Deitel 1.26-1.30 Version B
// DESCRIPTION      :   Prompts the user for 5 numbers
//                      and displays the sum, product,
//                      average, largest, and smallest
//                      of the numbers.
// SOURCES/HELP     :   Mr. H, Deitel, Ava Apolo, Sawyer
//                      Barton, Kohler Briggs

#include <iostream>
using namespace std;

int main()
{
    // signature
    cout << "Shelby Alexander\nArgon\nDeitel 1.26-1.30 Version B Program";
    
    // declare variables
    float sum, product, average, largestNum, smallestNum;
    float num1, num2, num3, num4, num5;
    const int inputNum = 5;
    int numRuns;
    
    // prompts user for numRuns
    cout << "\n\n\nHow many times do you want this program to run?";
    cin >> numRuns;
    
    // repeats program
    for (int j = 0; j < numRuns; j++)
    {
        // prompts user for input numbers
        cout << "\nPlease input 5 numbers.";
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        
        // finds sum, product, and average of the inputs
        sum = num1 + num2 + num3 + num4 + num5;
        product = num1 * num2 * num3 * num4 * num5;
        average = sum / inputNum;
        
        // finds largest number
        largestNum = num1;
        if (num2 > largestNum)
        {
            largestNum = num2;
        }
        if (num3 > largestNum)
        {
            largestNum = num3;
        }
        if (num4 > largestNum)
        {
            largestNum = num4;
        }
        if (num5 > largestNum)
        {
            largestNum = num5;
        }
        
        // finds smallest number
        smallestNum = num1;
        if (num2 < smallestNum)
        {
            smallestNum = num2;
        }
        if (num3 < smallestNum)
        {
            smallestNum = num3;
        }
        if (num4 < smallestNum)
        {
            smallestNum = num4;
        }
        if (num5 < smallestNum)
        {
            smallestNum = num5;
        }
        
        
        // displays the sum, product, average, largest, and smallest of the inputs
        cout << "\nThe sum is " << sum << endl;
        cout << "The product is " << product << endl;
        cout << "The average is " << average << endl;
        cout << "The largest number is " << largestNum << endl;
        cout << "The smallest number is " << smallestNum << endl << endl;
    }
    
    // exit program
    cout << "\n\n\n\n\n";
    return 0;
}
