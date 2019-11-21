#include <iostream>
using namespace std;
int sum(int k){
    int a, b, c, d, e, f;
    int sum = 0;
    a =  k / 100000;
    b = (k % 100000) / 10000;
    c = (k % 10000) / 1000;
    d = (k % 1000) / 100;
    e = (k % 100) / 10;
    f = k % 10;
    sum = a + b + c + d + e + f;
    return sum;
}
int main () {
    int num1, num2;
    for (int i = 100000; i <= 999999; i++) {
        int j = i + 1;
        num1 = sum(i);
        num2 = sum(j);
        if(num1 % 13 == 0 && num2 % 13 == 0){
            cout << i << " " << j << endl;
        }
    }
    return 0;
}