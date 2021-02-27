// int n = 1;
// int x = n++; // x will be 1 and n will be 2

// In this example, the statement gets executed prior to the increment.

// int n = 1;
// int x = ++n; // both x and n will be 2

#include <iostream>
using namespace std;

int foo [] = {15, 10, 12, 45, 6};
int n, result = 0;

int main()
{
    for ( n=0; n<5; ++n )
    {
        result += foo[n];
    }
    cout << result;
    return 0;
}