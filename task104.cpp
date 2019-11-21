#include <iostream>
using namespace std;
int main () {
    int a,b,c,d;
    int sum = 0, k = 0;
    for(int i = 1000; i <= 9999; i++) {
        a = i / 1000;
        b = (i % 1000) / 100;
        c = (i % 100) / 10;
        d = i % 10;
        sum = a + b + c + d;
        if(i == 600 * sum)
            k++;
    }
    cout << k;
    return 0;
}