#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double days, discount, sum;
    cin >> days >> discount >> sum;
    for(int i = 0; i < days; i++) {
        sum += 3;
        sum = sum + sum * discount/100;
    }
    cout << sum;
    return 0;
}