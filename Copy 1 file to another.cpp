#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    char c;
    int count = 0;

    while (fin.get(c)) {
        fout.put(c);
        count++;
    }

    cout << "Characters copied: " << count;
    return 0;
}
