#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a >= 2 && a <= 5) {
        a += 10;
    }
    else if (a >= 7 && a <= 40) {
        a -= 100;
    }
    else if (a <= 0 || a > 3000) {
        a *= 3;
    }
    else {
        a = 0;
    }
    cout << a;
    return 0;
}