#include <iostream>

using namespace std;

unsigned factorial(unsigned n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

unsigned permuations(unsigned n, unsigned k)
{
    unsigned p = n / k;
    return p;
}

int main()
{
    unsigned n = 0;
    unsigned k = 0;

    //Receive n from user
    cout << "Enter the value of n: ";
    cin >> n;

    //Receive k from user
    cout << "Enter the value of k: ";
    cin >> k;

    unsigned l = 0;
    l = n - k;

    unsigned factN = factorial(n);
    
    unsigned factL = factorial(l);
   
    unsigned p = permuations(factN, factK);
    
    cout << "Factorial of n " << n << endl;
    cout << "Factorial of l " << l << endl;

    //Print out permutations
    cout << "Permutations of " << n << " and " << k << " is " << p << endl;

    return 0;
}