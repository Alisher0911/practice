#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "YES";
    }
    else {
        swap(a, b);
        cout << a << " " << b;
    }
    return 0;
}