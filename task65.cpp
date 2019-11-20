#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int one =  n / 1000;
    int two = (n % 1000) / 100;
    int three = (n % 100) / 10;
    int four = n % 10;
    
    if (one < 5) cout << one;
    if (two < 5) cout << two;
    if (three < 5) cout << three;
    if (four < 5) cout << four;
    
    if (one > 5) cout << one;
    if (two > 5) cout << two;
    if (three > 5) cout << three;
    if (four > 5) cout << four;
    return 0;
}