#include <iostream>
using namespace std;
int main () {
    int a,b,c,d,e;
    int sum = 0;
    for(int i=10000; i<99999; i++) {
        a =  i/ 10000;
        b = (i % 10000) / 1000;
        c = (i % 1000) / 100;
        d = (i % 100) / 10;
        e = i % 10;
        sum = a + b + c + d + e;
        if (sum % 4 == 0 && c % 2 != 0 && i % 2 == 0)
            cout << i << endl;
    }
    return 0;
}