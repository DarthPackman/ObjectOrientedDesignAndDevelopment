// Addition program that displays the sum of two integers.
#include <iostream>

int main()
{
   // variable declarations
   int number1 = 0; // first integer to add (initialized to 0)
   int number2 = 0; // second integer to add (initialized to 0)
   int addsum = 0; // sum of number1 and number2 (initialized to 0)
   int subsum = 0; // sum of number1 and number2 (initialized to 0)
   int mulsum = 0; // sum of number1 and number2 (initialized to 0)
   int divsum = 0; // sum of number1 and number2 (initialized to 0)

   std::cout << "Enter first integer: "; // prompt user for data
   std::cin >> number1; // read first integer from user into number1

   std::cout << "Enter second integer: "; // prompt user for data
   std::cin >> number2; // read second integer from user into number2

   addsum = number1 + number2; // add the numbers; store result in sum

   //@ perform subtraction of number1 from number2
   subsum = number1 - number2;
   //@ perform multiplication of number1 and number2 and store in product
   mulsum = number1 * number2;
   //@ perform the division of number1 with number2 and print result
   divsum = number1 / number2;

   std::cout << "Sum is " << addsum << std::endl; // display sum; end line
   //@ display result of subtraction
   std::cout << "Sum is " << subsum << std::endl; // display sum; end line
   //@ display sum of multiplication
   std::cout << "Sum is " << mulsum << std::endl; // display sum; end line
   //@ display result of division
   std::cout << "Sum is " << divsum << std::endl; // display sum; end line

} // end function main

