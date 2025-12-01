#include <iostream>
using namespace std;

template <class T>
class TwoDim {
public:
    T x, y;
    TwoDim() { x = y = 0; }
    TwoDim(T a, T b) { x = a; y = b; }
    void print() { cout << x << " , " << y; }
};

template <class T>
class ThreeDim : public TwoDim<T> {
public:
    T z;
    ThreeDim() : TwoDim<T>() { z = 0; }
    ThreeDim(T a, T b, T c) : TwoDim<T>(a, b) { z = c; }

    void print() { cout << this->x << " , " << this->y << " , " << z; }
};

int main() {
    TwoDim<int> a(2, 3);
    ThreeDim<int> b(2, 3, 4);

    cout << "2D: ";
    a.print();
    cout << "\n3D: ";
    b.print();
}
