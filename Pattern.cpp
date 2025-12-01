#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (char c = 'A' + i; c >= 'A'; c--)
            cout << c;
        cout << endl;
    }
    return 0;
}
