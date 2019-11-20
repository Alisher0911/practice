#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    if (y >= 0 && x - sqrt(y) >= 0) {
        cout << sqrt(x - sqrt(y));
    }
    else {
        cout << "not exist";
    }
    return 0;
}