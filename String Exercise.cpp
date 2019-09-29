// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   06 February 2019
// PROBLEM ID       :   Sampling Strings
// DESCRIPTION      :   This program prompts the user for
//                      their first and last name, along
//                      with a verb to print a sentence and
//                      certain letters of their name.
// SOURCES/HELP     :   Mr. H, Deitel, Sydney Hyde, Alex
//                      Kish, Cole

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    string fName, lName, myVerb, fullName, readsLine;
    int numRuns;
    
    // prompts user for the number of runs
    cout << "\n\nEnter the number of runs:  ";
    cin >> numRuns;
    
    // repeats the program
    for(int j = 0; j < numRuns; j++)
    {
        // prompts user for their first and last name
        cout << "\nEnter a first name and a last name:  ";
        cin >> fName >> lName;
        
        // prompts user for an action verb
        cout << "Type an action verb (rule, rock, suck, etc.):  ";
        cin >> myVerb;
        
        // prints a sentence combining the verb and names given
        cout << "\nYou " << myVerb << ", " << fName << " " << lName << "!\n\n";
        
        // finds the full name and prints the full name
        fullName = fName + " " + lName;
        cout << "Your full name is " << fullName << endl << endl;
        
        // prints the third and fourth letters in the full name
        cout << "The 3rd and 4th letters of your full name are " << fullName[2] << " and " << fullName[3] << "." << endl << endl;
        
        // prints the full name backwards
        cout << "Your name backwards is ";
        for(int k = fullName.size(); k >= 0; k--)
        {
            cout << fullName[k];
        }
        cout << "." << endl << endl;
        
        // prompts user for schools
        cout << "What school(s) do you go to?  ";
        cin.ignore();
        getline(cin, readsLine);
        cout << "\nDid you say \"" << readsLine << "?\"" << endl;
    }
           
    // exits program
    cout << "\n\n\n\n\n";
    return 0;
}
