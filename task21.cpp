#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    cout << (a*b)/2 << " " << sqrt(pow(a, 2) + pow(b, 2)) + a + b << " " << sqrt(pow(a, 2) + pow(b, 2));
    return 0;
}