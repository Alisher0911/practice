#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b || a == b) {
        cout << a;
    }
    else if (a < b) {
        cout << b;
    }
    return 0;
}