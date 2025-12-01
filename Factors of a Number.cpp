#include <iostream>
using namespace std;

void factors(int n = 10) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++)
        if (n % i == 0) cout << i << " ";
}

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;
    factors(x);
    return 0;
}
