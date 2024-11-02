/*
1. Define an abstract data type - Poly, with three private data members a, b and c (type double) to
represent the coefficients of a quadratic polynomial in the form:
      ax^2 + bx + c

2. Include a parameter constructor in the Poly class to initialize all private data members with
caller-supplied values.

3. Overload the addition operator to return the sum of two Poly objects.

4. Overload the << (insertion) operator to output Poly objects in the following format,
     e.g.,: ax^2 + bx + c
where a, b and c are the data members of the Poly object. Do not display the a or b terms if they
have zero coefficients. Moreover, if any coefficient is negative it should be precede by a minus sign,
and not a plus sign.

5. In your main() function, declare and initialize two Poly objects, q1 and q2, to represent the
following polynomials: 3x^2 – 2 and -4x + 10 . Also declare a third, un-initialized Poly object
named sum.

6. Output the sum of the two polynomials to the console using the following code exactly as it
appears:
sum = q1 + q2;
cout << q1 << " : q1\n";
cout << q2 << " : q2\n";
cout << sum << " : q1+q2\n";

7. Overload the >> (extraction) operator to input a Poly object in the following format:
     (a, b, c)
where a, b and c are the data members of the poly object. The input will include the parentheses and
commas as shown. Test the user input as "(-43, 60.32, -6.9)" and output this Poly object.
*/

