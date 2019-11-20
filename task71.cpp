#include <iostream>
using namespace std;
int main() {
    double h, m;
    cin >> h >> m;
    double angle = (h + m/60) * 30 - m * 6;
    if(h >= 0 && h <= 23 && m >= 0 && m <= 59) {
        if(angle >= 360) {
            cout << angle - 360;
        }
        else if(angle < 0) {
            cout << 360 + angle;
        }
    }
    else {
        cout << "no such time";
    }
    return 0;
}
