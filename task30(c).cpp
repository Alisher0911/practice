#include <iostream>
using namespace std;
int main() {
    int a, A;
    cin >> a;
    A = a * a * a;
    a = A * A;
    a = a * a * A;
    cout << a;
    return 0;
}