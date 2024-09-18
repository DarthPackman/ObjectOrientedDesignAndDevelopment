// The sample program to show the structure of a C++ program
#include <iostream>
using namespace std;
int main()
{
  int length, width;
  int perimeter, area;              // declarationsgg
  cout <<  "Length = ";             // prompt user
  cin >> length;                    // enter length
  cout << "Width = ";               // prompt user
  cin >> width;                     // input width
  perimeter = 2*(length+width);     // compute perimeter
  area = length*width;              // compute area
  cout << endl   << "Perimeter is " << perimeter;
  cout << endl   << "Area is " << area   << endl; // output results

} // end of main program

//@ Now caculate the perimeter and area of a circle.
int main()
{
  int radius;
  double pi = 3.14159;
  int perimeter, area;              // declarationsgg
  cout <<  "Radius = ";             // prompt user
  cin >> radius;                    // enter length
  perimeter = 2*radius*pi;     // compute perimeter
  area = (radius*pi)*(radius*pi);              // compute area
  cout << endl   << "Perimeter is " << perimeter;
  cout << endl   << "Area is " << area   << endl; // output results

} // end of main program
