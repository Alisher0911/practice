#include <iostream>
using namespace std;
int main () {
    double d = 10;
    int days = 0;
    while (d <= 80) {
        d = d + d * 10/100;
        days++;
    }
    cout << days + 1;
    return 0;
}