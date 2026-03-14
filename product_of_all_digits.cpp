#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long product = 1;

    while (n > 0) {
        int digit = n % 10;   // get last digit
        product *= digit;     // multiply with product
        n /= 10;              // remove last digit
    }

    cout << product << endl;

    return 0;
}