#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    int A = a;
    a = a + b;
    int B = b;
    b = c - A;
    c = A + B + c;
    cout << a << " " << b << " " << c;
    return 0;
}