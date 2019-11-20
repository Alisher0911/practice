#include <iostream>
using namespace std;
int main() {
    int weeks, months, years;
    cin >> weeks >> months >> years;
    cout << (7*weeks) + (30*months) + (12*30*years);
    return 0;
}