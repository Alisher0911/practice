#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    int sum = 0;
    for(int i = 100; i < 999; i++) {
        a =  i / 100;
        b = (i % 100) / 10;
        c = i % 10;
        sum = a*a*a + b*b*b + c*c*c;
        if(i == sum)
            cout << i << endl;
    }
    return 0;
}