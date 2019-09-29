// NAME             :   Shelby Alexander
// GROUP            :   Argon
// LAST MODIFIED    :   19 December 2018
// PROBLEM ID       :   Deitel 1.26-1.30 Version C
// DESCRIPTION      :   Prompts the user for the numbers
//                      and displays the sum, product,
//                      average, largest, and smallest
//                      of the numbers.
// SOURCES/HELP     :   Mr. H, Deitel, Ava Apolo, Sawyer
//                      Barton, Jane Heystek, Anna Buck
//                      Keshavi Dave

#include <iostream>
using namespace std;

int main()
{
    // signature
    cout << "Shelby Alexander\nArgon\nDeitel 1.26-1.30 Version C Program";
    
    // declare variables
    float sum, product, average, largestNum, smallestNum;
    const int inputNum = 9;
    float num[inputNum - 1];
    int numRuns;
    
    
    // prompts user for the number of runs
    cout << "\n\n\nHow many times do you want this program to run?  ";
    cin >> numRuns;
    
    // repeats program
    for (int i = 0; i < numRuns; i++)
    {
        // prompts user for input numbers
        cout << "\nPlease input " << inputNum << " numbers:  ";
        for (int j = 0; j < inputNum; j++)
        {
            cin >> num[j];
        }
        
        // finds sum
        sum = 0;
        for (int j = 0; j < inputNum; j++)
        {
            sum += num[j];
        }
        
        // finds product
        product = 1;
        for (int j = 0; j < inputNum; j++)
        {
            product *= num[j];
        }
        
        // finds average
        average = sum / inputNum;
        
        // finds largest number
        largestNum = num[0];
        for (int j = 0; j < inputNum; j++)
        {
            if (num[j] > largestNum)
            {
                largestNum = num[j];
            }
        }
        
        // finds smallest number
        smallestNum = num[0];
        for (int j = 0; j < inputNum; j++)
        {
            if (num[j] < smallestNum)
            {
                smallestNum = num[j];
            }
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
