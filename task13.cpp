#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = 0.1;
    double b = 0.2;
    double x = 1;
    cout << pow(pow(x,2)+b, 1.0/5.0) - ((pow(b, 2) * pow(sin(x+a), 3)) / x);
    return 0;
}