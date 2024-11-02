#include <iostream>
using namespace std;

class Poly {
private:
    double a, b, c; // Coefficients of the polynomial

public:
    // Parameterized constructor to initialize a, b, and c
    Poly(double a = 0.0, double b = 0.0, double c = 0.0) : a(a), b(b), c(c) {}

    // Overloaded addition operator to add two Poly objects
    Poly operator+(const Poly& other) const {
        return Poly(a + other.a, b + other.b, c + other.c);
    }

    // Overloaded insertion operator to output Poly in the format "ax^2 + bx + c"
    friend ostream& operator<<(ostream& out, const Poly& p) {
        bool first = true;
        
        if (p.a != 0) {
            out << p.a << "x^2";
            first = false;
        }
        if (p.b != 0) {
            if (!first) out << (p.b > 0 ? " + " : " - ");
            else if (p.b < 0) out << "-";
            out << (first || p.b < 0 ? abs(p.b) : p.b) << "x";
            first = false;
        }
        if (p.c != 0) {
            if (!first) out << (p.c > 0 ? " + " : " - ");
            else if (p.c < 0) out << "-";
            out << (first || p.c < 0 ? abs(p.c) : p.c);
        }
        if (p.a == 0 && p.b == 0 && p.c == 0)
            out << "0";
        return out;
    }

    // Overloaded extraction operator to input Poly in the format "(a, b, c)"
    friend istream& operator>>(istream& in, Poly& p) {
        char ignore;
        in >> ignore >> p.a >> ignore >> p.b >> ignore >> p.c >> ignore;
        return in;
    }
};

int main() {
    // Declare and initialize Poly objects
    Poly q1(3, 0, -2);     // Represents 3x^2 - 2
    Poly q2(0, -4, 10);    // Represents -4x + 10
    Poly sum;

    // Perform addition and output the results
    sum = q1 + q2;
    cout << q1 << " : q1\n";
    cout << q2 << " : q2\n";
    cout << sum << " : q1+q2\n";

    // Test extraction operator
    Poly userPoly;
    cout << "\nEnter a polynomial in the format (a, b, c): ";
    cin >> userPoly;
    cout << "You entered: " << userPoly << endl;

    return 0;
}
