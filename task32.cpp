#include <iostream>
using namespace std;
int main() {
    int x = 237 - (237/100) * 100;
    x = x * 10 + 237/100;
    cout << x;
    return 0;
}