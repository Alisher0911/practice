#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0) {
        if (a >= b && a >= c && a >= d) {
            cout << a;
        }
        else if (b >= a && b >= c && b >= d) {
            cout << b;
        }
        else if (c >= a && c >= b && c >= d) {
            cout << c;
        }
        else if (d >= a && d >= b && d >= c) {
            cout << d;
        }
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0) {
        if (a >= b && a >= c) {
            cout << a;
        }
        else if (b >= a && b >= c) {
            cout << b;
        }
        else if (c >= a && c >= b) {
            cout << c;
        }
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 != 0) {
        if (a >= b) {
            cout << a;
        }
        else {
            cout << b;
        }
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0) {
        cout << a;
    }
    else if (a % 2 == 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0) {
        if (a >= b && a >= d) {
            cout << a;
        }
        else if (b >= a && b >= d) {
            cout << b;
        }
        else if (d >= a && d >= b) {
            cout << d;
        }
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 != 0 && d % 2 == 0) {
        if (a >= d) {
            cout << a;
        }
        else {
            cout << d;
        }
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 == 0) {
        cout << d;
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0 && d % 2 != 0) {
        cout << b;
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0 && d % 2 != 0) {
        cout << c;
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0) {
        if (a >= c && a >= d) {
            cout << a;
        }
        else if (c >= a && c >= d) {
            cout << c;
        }
        else if (d >= a && d >= c) {
            cout << d;
        }
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 == 0 && d % 2 == 0) {
        if (c >= d) {
            cout << c;
        }
        else {
            cout << d;
        }
    }
    else if (a % 2 != 0 && b % 2 == 0 && c % 2 != 0 && d % 2 == 0) {
        if (b >= d) {
            cout << b;
        }
        else {
            cout << d;
        }
    }
    if (a % 2 != 0 && b % 2 == 0 && c % 2 == 0 && d % 2 != 0) {
        if (b >= c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    else if (a % 2 == 0 && b % 2 != 0 && c % 2 == 0 && d % 2 != 0) {
        if (a >= c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0) {
        cout << "not found";
    }
    return 0;
}