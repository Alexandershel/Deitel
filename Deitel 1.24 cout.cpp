// NAME             :   Shelby Alexander
// GROUP            :   Argon
// LAST MODIFIED    :   16 October 2018
// PROBLEM ID       :   Deitel 1.24 cout Problem
// DESCRIPTION      :   Prints the numbers 1 to 4 on the
//                      same line using these methods: uses
//                      one cout statement with either one
//                      stream operator or four stream
//                      operators, and using four cout
//                      statements.
// SOURCES/HELP     :   Mr. H, Deitel, Ava Apolo, Sawyer
//                      Barton, Kohler Briggs

#include <iostream>
using namespace std;

int main()
{
    // signature
    cout << "Shelby Alexander\nArgon\nDeitel 1.24 cout Program";
    
    // using one cout statement and one stream operator
    cout << "\n\n\n1 2 3 4";
    
    // using one cout statement and four stream operators
    cout << "\n1" << " 2" << " 3" << " 4";
    
    // using four cout statements
    cout << "\n1";
    cout << " 2";
    cout << " 3";
    cout << " 4";
    
    // exit program
    cout << "\n\n\n\n\n";
    return 0;
}
