#include <iostream>
#include <cmath>     // <-- REQUIRED for sqrt()
using namespace std;

class Triangle {
public:
    float area(float b, float h) {
        return 0.5 * b * h;
    }

    float area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }
};

int main() {
    Triangle t;
    cout << t.area(5, 10) << endl;   // area with base & height
    cout << t.area(3, 4, 5);         // area with 3 sides
}
