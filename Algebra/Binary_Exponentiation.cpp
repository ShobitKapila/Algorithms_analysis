/*
- Binary exponentiation (also known as exponentiation by squaring) is a trick which allows to calculate a^n  using only  
O(log n) multiplications (instead of O(n) multiplications required by the naive approach).
- The idea of binary exponentiation is, that we split the work using the binary representation of the exponent.
- Applications :- 
  > Effective computation of large exponents modulo a number
  > Effective computation of Fibonacci numbers
  > Applying a permutation k times
  > Fast application of a set of geometric operations to a set of points
  > Number of paths of length k in a graph
  > Variation of binary exponentiation: multiplying two numbers modulo m 
*/

// Iterative approach 
#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b) {
    long long result = 1;
    while(b) {
        if (b & 1) 
        result = result * a;
        a = a * a;
        b >>= 1;
    }
    return result;
}

int main() {
    cout<<power(2, 12)<<"\n";
    return 0;
}
// Recursive approach 
#include <bits/stdc++.h>
using namespace std;

long long power(long long A, long long B)
{
    if (B == 0)
        return 1;

    long long res = power(A, B / 2);

    if (B % 2)
        return res * res * A;
    else
        return res * res;
}

int main()
{
    cout << power(2, 12) << "\n";
    return 0;
}
