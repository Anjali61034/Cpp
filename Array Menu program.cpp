#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, choice, key;
    cout << "Enter size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n1. Min/Max/Average"
             << "\n2. Linear Search"
             << "\n3. Binary Search"
             << "\n4. Display Address"
             << "\n5. Exit"
             << "\nChoice: ";
        cin >> choice;

        // OPTION 1: Min / Max / Average
        if (choice == 1) {
            int mn = a[0], mx = a[0], sum = 0;

            for (int i = 0; i < n; i++) {
                int x = a[i];
                if (x < mn) mn = x;
                if (x > mx) mx = x;
                sum += x;
            }

            cout << "Min = " << mn
                 << "  Max = " << mx
                 << "  Avg = " << sum / (float)n;
        }

        // OPTION 2: Linear Search
        else if (choice == 2) {
            cout << "Enter key: ";
            cin >> key;

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (a[i] == key) {
                    cout << "Found at index " << i;
                    found = true;
                }
            }
            if (!found)
                cout << "Not found";
        }

        // OPTION 3: Binary Search
        else if (choice == 3) {
            cout << "Enter key: ";
            cin >> key;

            int l = 0, r = n - 1, mid;
            bool ok = false;

            while (l <= r) {
                mid = (l + r) / 2;

                if (a[mid] == key) {
                    cout << "Found at index " << mid;
                    ok = true;
                    break;
                }
                else if (a[mid] > key)
                    r = mid - 1;
                else
                    l = mid + 1;
            }

            if (!ok)
                cout << "Not found";
        }

        // OPTION 4: Display Address
        else if (choice == 4) {
            for (int i = 0; i < n; i++)
                cout << "Address of a[" << i << "] = " << &a[i] << endl;
        }

    } while (choice != 5);

    return 0;
}
