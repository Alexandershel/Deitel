// NAME             :   Shelby Alexander
// GROUP            :   Hex
// LAST MODIFIED    :   29 April 2019
// PROBLEM ID       :   Recursive Algebraic Functions Program
// DESCRIPTION      :   This program recursively solves all
//                      problems on the Recursive Functions
//                      worksheet.
// SOURCES/HELP     :   Mr. H, Ava Apolo, Maicee Bishop, Anna
//						Buck

#include <iostream>
using namespace std;

// declare function prototypes
int prob1(int);
int prob2(int);
int prob3(int);
int prob4(int);
int prob5(int);
int prob6(int,int);

int main()
{
    // declare variables
    int num1, num2;
    
    // signature
    cout << "Shelby Alexander\nHex\nRecursive Functions Program\n\n";
    
    // problem 1
    num1 = 20;
    cout << "f(" << num1 << ") = " << prob1(num1) << endl;
    
    // problem 2
    num1 = 10;
    cout << "f(" << num1 << ") = " << prob2(num1) << endl;

    // problem 3
    num1 = 16;
    cout << "f(" << num1 << ") = " << prob3(num1) << endl;

    // problem 4
    num1 = 6;
    cout << "f(" << num1 << ") = " << prob4(num1) << endl;

    // problem 5
    num1 = 9;
    cout << "f(" << num1 << ") = " << prob5(num1) << endl;

    // problem 6
    num1 = 10; num2 = 4;
    cout << "f(" << num1 << " , " << num2 << ") = " << prob6(num1,num2) << endl;
}

// problem 1 method
int prob1(int num1)
{
    int result;
	
	if(num1 > 12)
    {
        result = prob1(num1 - 5) + 6;
    }
    else if(num1 > 1)
    {
        result = prob1(num1 - 3) + 4;
    }
    else
    {
        result = -1;
    }
    
    return result;
}

// problem 2 method
int prob2(int num1)
{
    int result;
    
    if(num1 >= 7)
	{
		result = prob2(1 + prob2(num1 - 3)) - 2;
	}
	else if(num1 > -1 && num1 < 7)
	{
		result = prob2(num1 - 4) + 1;
	}
	else
	{
		result = 2 * num1 + 3;
	}
	
    return result;
}

// problem 3 method
int prob3(int num1)
{
    int result;
	
	if(num1 >= 10)
	{
		result = prob3(num1 - 4) + 1;
	}
	else if(num1 > 2 && num1 < 10)
	{
		result = prob3(num1 - 3) - 3;
	}
	else
	{
		result = num1 * num1 - 1;
	}
    
    return result;
}

// problem 4 method
int prob4(int num1)
{
    int result;
    
	if(num1 % 2 == 0 && num1 > 0)
	{
		result = prob4(num1 - 2) - 2 * prob4((num1 - 1) % 3) + 1;
	}
	else if(num1 % 2 != 0)
	{
		result = num1 + 1;
	}
	else
	{
		result = 0;
	}
	
    return result;
}

// problem 5 method
int prob5(int num1)
{
    int result;
	
	if(num1 % 2 != 0 && num1 > 0)
	{
		result = prob5(num1 - 3) + 3;
	}
	else if(num1 % 2 == 0 && num1 > 0)
	{
		result = 2 - prob5(num1 + 1);
	}
	else
	{
		result = 5;
	}
    
    return result;
}

// problem 6 method
int prob6(int num1, int num2)
{
    int result;
    
	if(num1 > num2)
	{
		result = prob6(num1 - 2, num2 + 1) - 1;
	}
	else if(num1 == num2)
	{
		result = prob6(2 * num1 + 1, num2 + 2) + 3;
	}
	else
	{
		result = num1 * num1 + num2;
	}
	
    return result;
}
