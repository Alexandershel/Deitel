// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   23 May 2019
// PROBLEM ID       :   ACSL Y2K Senior
// DESCRIPTION      :   This program determines an arithmetic
//                      sequence and finds the amount of times
//                      that each number occurs, as well as finds
//                      which number(s) occur(s) the most.
// SOURCES/HELP     :   Mr. H, Ava Apolo, Maicee Bishop, Anna
//                      Buck

#include <iostream>
using namespace std;

int main()
{
    // signature
    cout << "Shelby Alexander\nHex\nACSL Y2K Senior";
    
    // declare variables
    int numRuns, sequence[3], currentNum, pattern, time, count[10], currentChop, digit, biggest;
    
    // prompts user for the number of runs
    cout << "\n\n\nPlease input the desired number of runs:  ";
    cin >> numRuns;
    
    // repeats program
    for(int j = 0; j < numRuns; j++)
    {
        // initializes variables
        time = 0;
        biggest = 0;
        for(int k = 0; k < 10; k++)
        {
            count[k] = 0;
        }
        
        do
        {
            // prompts user for the arithmetic sequence
            cout << "\n\nInput the first 3 integers of an arithmetic sequence:  ";
            for(int k = 0; k < 3; k++)
            {
                cin >> sequence[k];
            }
            
            // error message
            if(sequence[2] - sequence[1] != sequence[1] - sequence[0])
            {
                cout << "\n\nThis is not an arithmetic sequence. Please try again." << endl;
            }
        } while(sequence[2] - sequence[1] != sequence[1] - sequence[0]);
        
        // determines the pattern
        pattern = sequence[2] - sequence [1];
        
        // initializes the first number
        currentNum = sequence[0];
        currentChop = currentNum;
        
        // determines if any number in the sequence contains a 2
        do
        {
            do
            {
                digit = abs(currentChop % 10);
                count[digit]++;
                
                // changes the place being checked
                currentChop = currentChop / 10;
            } while(currentChop != 0);
            
            // increments the sequence
            currentNum += pattern;
            currentChop = currentNum;
            time++;
        } while (time < 2000);
        
        // determines what the biggest number is
        biggest = count[0];
        for(int k = 1; k < 10; k++)
        {
            if (count[k] >= biggest)
            {
                biggest = count[k];
            }
        }
        
        // prints the answer
        cout << "\nTotal Number Counts" << endl;
        for(int k = 0; k < 10; k++)
        {
            cout << k << "s = " << count[k] << endl;
        }
        cout << "The digit(s) that occur(s) the most is/are: ";
        for(int k = 0; k < 10; k++)
        {
            if(count[k] == biggest)
            {
                cout << k << " ";
            }
        }
        cout << endl;
    }
    
    // exits program
    cout << "\n\n\n\n\n";
    return 0;
}
