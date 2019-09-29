// NAME             :   Shelby Alexander
// GROUP            :   Argon
// LAST MODIFIED    :   28 November 2018
// PROBLEM ID       :   Deitel 1.26-1.30 Version A
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
    cout << "Shelby Alexander\nArgon\nDeitel 1.26-1.30 Version A Program";
    
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
        if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
        {
            largestNum = num1;
        }
        else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
        {
            largestNum = num2;
        }
        else if (num3 >= num2 && num3 >= num1 && num3 >= num4 && num3 >= num5)
        {
            largestNum = num3;
        }
        else if (num4 >= num3 && num4 >= num2 && num4 >= num1 && num4 >= num5)
        {
            largestNum = num4;
        }
        else
        {
            largestNum = num5;
        }
        
        // finds smallest number
        if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5)
        {
            smallestNum = num1;
        }
        else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5)
        {
            smallestNum = num2;
        }
        else if (num3 <= num2 && num3 <= num1 && num3 <= num4 && num3 <= num5)
        {
            smallestNum = num3;
        }
        else if (num4 <= num3 && num4 <= num2 && num4 <= num1 && num4 <= num5)
        {
            smallestNum = num4;
        }
        else
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
