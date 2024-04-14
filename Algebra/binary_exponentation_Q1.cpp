/*
Q. The input consists of a line containing the number c of datasets, followed by c datasets, followed by a line containing the number ‘0’.
Each dataset consists of a single line containing three positive integers, x, y, and n, separated by blanks. You can assume that 1 < x, n < 2^15 = 32768, and 0 < y < 2
31 = 2147483648.
Output:-
The output consists of one line for each dataset. The i-th line contains a single positive integer z such that z = x y mod n
for the numbers x, y, z given in the i-th input dataset.
*/
#include <iostream>
using namespace std;

long long modular_exponentiation(long long x, long long y, long long p) {
    long long result = 1;  
    x = x % p; 
    while (y > 0) {
        if (y & 1)
            result = (result * x) % p;
        y = y >> 1; 
        x = (x * x) % p;  
    }
    return result;
}

int main() {
    int c;
    cin >> c; //
    while (c--) {
        long long x, y, n;
        cin >> x >> y >> n;
        cout << modular_exponentiation(x, y, n) << endl;
    }
    int end_flag;
    cin >> end_flag; 
    return 0;
}
