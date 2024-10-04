#include <iostream>

using namespace std;
//Import cmath library
#include <cmath>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if ( i % 2 == 0)
            continue;
        //Check if i is a perfect square
        else if (sqrt(i) == int(sqrt(i)))
            continue;
        else if (i % 3 == 0)
            continue;
        else if (i % 5 == 0)
            continue;
        else if (i % 7 == 0)
            continue;
        else
            cout << i << endl;
    }
}