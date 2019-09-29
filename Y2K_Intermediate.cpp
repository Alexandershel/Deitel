// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   10 May 2019
// PROBLEM ID       :   ACSL Y2K Intermediate
// DESCRIPTION      :   This program determines an arithmetic
//                      sequence and finds which numbers in this
//                      sequence contain a 2.
// SOURCES/HELP     :   Mr. H, Ava Apolo, Maicee Bishop, Anna
//                      Buck

#include <iostream>
using namespace std;

int main()
{
    //signature
    cout << "Shelby Alexander\nHex\nACSL Y2K Intermediate";
    
    // declare variables
    int numRuns, sequence[3], currentNum, pattern, time, count, currentChop;
    
    // prompts user for the number of runs
    cout << "\n\n\nPlease input the desired number of runs:  ";
    cin >> numRuns;
    
    //repeats program
    for(int j = 0; j < numRuns; j++)
    {
        // initializes variables
        time = 0;
        count = 0;
        
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
                if(currentChop % 10 == 2 or currentChop % 10 == -2)
                {
                    count++;
                }
               
               // changes the place being checked
               currentChop = currentChop / 10;
               
            } while(currentChop != 0);
            
            // increments the sequence
            currentNum += pattern;
            currentChop = currentNum;
            time++;
        } while (time < 2000);
        
        // prints the answer
        cout << "\nThe amount of times an integer contained a 2 was " << count << "." << endl;
    }
    
    cout << "\n\n\n\n\n";
    return 0;
}

