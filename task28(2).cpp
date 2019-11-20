#include <iostream>
using namespace std;
int main() {
    double sum, percent;
    cin >> sum >> percent;
    sum = sum + 5 * sum * percent/100;
    cout << sum;
    return 0;
}