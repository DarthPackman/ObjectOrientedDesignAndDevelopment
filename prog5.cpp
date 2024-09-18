//Compare two integers
#include <iostream>
using namespace std;

// function main begins program execution
int main()
{
   int number1 = 0; // first integer to compare (initialized to 0)
   int number2 = 0; // second integer to compare (initialized to 0)

   cout << "Enter two integers to compare: "; // prompt user for data
   cin >> number1 >> number2; // read two integers from user

   if ( number1 == number2 )
      cout << number1 << " == " << number2 << endl;

   if ( number1 != number2 )
      cout << number1 << " != " << number2 << endl;

   if ( number1 < number2 )
      cout << number1 << " < " << number2 << endl;

   if ( number1 > number2 )
      cout << number1 << " > " << number2 << endl;

   if ( number1 <= number2 )
      cout << number1 << " <= " << number2 << endl;

   if ( number1 >= number2 )
      cout << number1 << " >= " << number2 << endl;

// @ Write statement to find the modulo of number1 by 2
   bool mod = number1 % 2;
// @ if the result is 0, print the message as "number 1 is EVEN", otherwise print "number 1 is ODD"
   if (mod == 0)
      cout << "number 1 is EVEN" << endl;
   else
      cout << "number 1 is ODD" << endl;
} // end function main

