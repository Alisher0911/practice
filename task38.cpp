#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (abs(a - b) == 100) {
        cout << "YES";
    }
    else {
        cout << "No";
    }
    return 0;
}