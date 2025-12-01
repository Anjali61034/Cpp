#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    if (argc == 2) n = atoi(argv[1]);
    else {
        cout << "Enter n: ";
        cin >> n;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        long long term = pow(i, n);
        if (i % 2 == 0) term = -term;
        sum += term;
    }

    cout << "Sum = " << sum;
    return 0;
}
