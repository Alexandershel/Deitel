// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   01 May 2019
// PROBLEM ID       :   ACSL Asterisks
// DESCRIPTION      :   This program uses the given size and
//                      shape of a figure and prints it using
//                      asterisks.
// SOURCES/HELP     :   Mr. H, Ava Apolo, Maicee Bishop, Anna
//                      Buck, Aiden Eichman, Andrew Salisbury

#include <iostream>
using namespace std;

// declares prototypes
void S(int);
void H(int);
void L(int);
void B(int, int);

int main()
{
    // declare variables
    char shape;
    int length, width, height, numRuns;
    
    // signature
    cout << "Shelby Alexander\nHex\nACSL Asterisks";
    
    // prompts user for the number of runs
    cout << "\n\n\nPlease input the number of desired runs:  ";
    cin >> numRuns;
    cout << endl;
    
    // repeats the program
    for(int z = 0; z < numRuns; z++)
    {
        // prompts user for shape
        cout << "\nPlease input the shape:  ";
        cin >> shape;
        
        // determines the input for the size
        if(shape == 'B' || shape == 'b')
        {
            // prompts user for length and width
            cout << "\n\nPlease input the length:  ";
            cin >> length;
            cout << "\n\nPlease input the width:  ";
            cin >> width;
            cout << endl;
        }
        else
        {
            // prompts user for height
            cout << "\n\nPlease input the height:  ";
            cin >> height;
            cout << endl;
        }
        
        // determines output
        if(shape == 'S' || shape == 's')
        {
            S(height);
        }
        else if(shape == 'L' || shape == 'l')
        {
            L(height);
        }
        else if(shape == 'H' || shape == 'h')
        {
            H(height);
        }
        else
        {
            B(length, width);
        }
        cout << endl;
    }
    
    // exits program
    return 0;
}

void S(int height)
{
    // prints the rows of *
    for(int k = 0;k < height; k++)
    {
        // prints the * in a row
        for(int j = 0; j < height; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void H(int height)
{
    // initializes the counter
    int count = 0;
    
    // prints the rows of *
    for(int j = 0; j < height; j++)
    {
        // prints the spaces and * in a row
        for(int k = 0; k < j; k++)
        {
            cout << "  ";
        }
        for(int k = 0; k < height - count; k++)
        {
            cout << "* ";
        }
        cout << endl;
        count++;
    }
}

void L(int height)
{
    // initializes the counter
    int count = height - 1;
    
    // prints the rows of *
    for(int j = 0; j < height; j++)
    {
        // prints the * in a row
        for(int k = 0; k < height - count; k++)
        {
            cout << "* ";
        }
        cout << endl;
        count--;
    }
}

void B(int length, int width)
{
    // prints the rows of *
    for(int k = 0;k < width; k++)
    {
        // prints the * in a row
        for(int j = 0;j < length; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
