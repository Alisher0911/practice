#include <iostream>
using namespace std;
int main () {
    double d = 10, sum = 0;
    for(int i = 1; i <= 7; i++) {
        sum += d;
        d = d + d * 10/100;
    }
    cout << sum;
    return 0;
}