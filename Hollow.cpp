// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   30 April 2019
// PROBLEM ID       :   Hollow Program
// DESCRIPTION      :   This program 
// SOURCES/HELP     :   Mr. H, Ava Apolo, Maicee Bishop, Anna
//                      Buck
#include <iostream>
using namespace std;

// declare prototypes
int boxtop(int);

int main()
{
    // declare variables
    int boxSize;
    
    // prompts user for the size of the box
    cout << "What do you want the size of the box to be?  ";
    cin >> boxSize;
    cout << endl;
    
    // prints the row of * five times
    for(int k = 0; k < boxSize; k++)
    {
        // prints the * five times
        for(int j = 0;j < boxSize; j++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    cout << endl;
    
    // prints top of box
    for(int k = 0; k < boxSize; k++)
    {
        cout << "* ";
    }
    cout << endl;
    
    // prints hollow box row
    for(int j = 0; j < boxSize - 2; j++)
    {
        cout << "*";
        for(int k = 0; k < boxSize - 2; k++)
        {
            cout << "  ";
        }
        cout << " *\n";
    }
    
    cout << boxtop(boxSize);
    
    cout << "\n\n\n\n";
    return 0;
}

int boxtop(int boxSize)
{
    // prints top of box
    for(int k = 0; k < boxSize; k++)
    {
        cout << "* ";
    }
    cout << endl;
    
    cout << endl << "The size of the box is ";
    return boxSize;
}
