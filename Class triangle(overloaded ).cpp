#include <iostream>
using namespace std;

class Triangle {
public:
    float area(float b, float h) { return 0.5 * b * h; }
    float area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle t;
    cout << t.area(5, 10) << endl;
    cout << t.area(3, 4, 5);
}
