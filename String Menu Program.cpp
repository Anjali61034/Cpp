#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    cout << "Enter string: ";
    cin.getline(s, 100);

    int choice;
    do {
        cout << "\n1.Length\n2.Check uppercase words\n3.Reverse\n4.Char addresses\n5.Exit\n";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            char *p = s;
            int len = 0;
            while (*p++) len++;
            cout << "Length = " << len;
        }

        else if (choice == 2) {
            for (int i = 0; i < strlen(s); i++)
                if (i == 0 || s[i - 1] == ' ')
                    if (isupper(s[i])) cout << s[i] << " ";
        }

        else if (choice == 3) {
            int n = strlen(s);
            for (int i = 0; i < n / 2; i++)
                swap(s[i], s[n - 1 - i]);
            cout << "Reversed: " << s;
        }

        else if (choice == 4) {
            for (int i = 0; i < strlen(s); i++)
                cout << s[i] << " -> " << (void*)&s[i] << endl;
        }

    } while (choice != 5);
}
