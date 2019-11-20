#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= a + c && a + b >= b + c) {
        cout << a << " " << b;
    }
    else if (a + c >= a + b && a + c >= b + c) {
        cout << a << " " << c;
    }
    else if (b + c >= a + b && b + c >= a + c) {
        cout << b << " " << c;
    }
    return 0;
}