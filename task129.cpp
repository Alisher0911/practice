#include <iostream>
using namespace std;
int main () {
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j < i/2 + 1; j++) {
            if (i % j == 0)
                sum += j;
        }
        if (sum == i)
            cout << i << endl;
    }
    return 0;
}