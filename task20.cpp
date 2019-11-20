#include <iostream>
using namespace std;
int main() {
    double min, s;
    cin >> min >> s;
    cout << (s * 1000) / (min * 60) << " m/s";
    return 0;
}