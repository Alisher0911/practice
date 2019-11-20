#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x > 3) {
        x += 10;
    }
    else {
        x -= 10;
    }
    cout << x;
    return 0;
}