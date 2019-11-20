#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double d = 10;
    for(int i = 2; i <= 10; i++) {
        d = d + d * 10/100;
        cout << d << endl;
    }
    return 0;
}