#include <iostream>
using namespace std;
int main() {
    double x;
    cin >> x;
    if (x < 7) {
        cout << "Yes";
    }
    else if (x > 10) {
        cout << "No";
    }
    else if (x == 9) {
        cout << "Error";
    }
    return 0;
}