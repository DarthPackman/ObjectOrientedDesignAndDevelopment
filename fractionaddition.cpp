/*
The formula of the sum of two fractions a/b and c/d is
a     c       a * d + b * c
-  +  -   =   -------------
b     d            b * d
For example,
1     2       1 * 3 + 2 * 2   7
-  +  -   =   ------------- = -
2     3           2 * 3       6
Write a program that let the user to enter two fractions
then displays their sum in fractional form. (don�t need to reduce it to lowest terms)
The interaction with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator can be chained to
read in more than one character at once.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int sumtop = 0;
    int sumbot = 0;

    cout << "Please enter the first fraction and then the second. Pressing enter between each part of the numbers."<< endl;

    cin >> a >> b >> c >> d;

    sumtop = (a * d) + (b * c);
    sumbot = b * d;

    cout << "The sum of " << a << "/" << b << " and " << c << "/" << d << " is " << sumtop << "/" << sumbot << "." << endl;

    return 0;
}
