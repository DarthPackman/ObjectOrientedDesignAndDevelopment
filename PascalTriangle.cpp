//The Pascal triangle defines the coefficient of the terms (Cn)
//in the expansion of the binomial:
//(x + y)^n = C0*x^0*y^n + C1*x^1*y^(n−1) + ... + Cn-1 * x^(n−1)y^1 + Cn*x^n*y^0

#include <iostream>
#include <iomanip>
using namespace std;

//The following shows the coefficient related to each n from 0 to 5.
//Note that both rows and columns start from 0.
// n = 0     1
// n = 1     1  1
// n = 2     1  2  1
// n = 3     1  3  3  1
// n = 4     1  4  6  4  1
// n = 5     1  5  10 10 5  1
// The value of each coefficient in a row and column is calculated by:
// Pascal (row, col) = pascal (row − 1, col − 1) + pascal (row − 1 , col)

int pascal(int row, int col)
{
    if (col == 0 || col == row)
        return 1;
    else
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

//@: Write a recursive function and test it in main function to print the
//Pascal triangle for any n.(The above example is the Pascal triangle for n=5)

//Hint: You can use std::setw() to set the width of the next output field to format output,
//e.g., cout << setw(10) << "Item" << setw(10) << "Price" << endl;

int main()
{
    int n;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << setw(4) << pascal(i, j);
        }
        cout << endl;
    }
    return 0;
}





