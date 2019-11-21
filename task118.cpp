#include <iostream>
using namespace std;
int main () {
    int a;
    int k = 0;
    while(a != 0) {
        cin >> a;
        if (a % 2 == 0)
            k++;
    }
    cout << k - 1;
    return 0;
}