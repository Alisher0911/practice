#include <iostream>
using namespace std;
int main() {
    int  x0, y0, r;
    int x, y;
    int count = 0;
    cin >> x0 >> y0 >> r;
    for (x = x0 - r; x <= x0 + r; x++) {
        for (y = y0 - r; y <= y0 + r; y++) {
            if (x * x + y * y <= r * r) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}