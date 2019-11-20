#include <iostream>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double c;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b;
    return 0;
}