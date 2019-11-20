#include <iostream>
using namespace std;
int main() {
    double sum, percent;
    cin >> sum >> percent;
    for(int i = 0; i < 5; i++) {
        sum += sum * percent/100;
    }
    cout << sum;
    return 0;
}