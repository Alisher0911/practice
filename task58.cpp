#include <iostream>
using namespace std;
int main() {
    int d, m, y;
    cin >> d >> m >> y;
    int D, M, Y;
    cin >> D >> M >> Y;
    if (d > 0 && y > 0 && D > 0 && Y > 0 && y < Y) {
        cout << "YES";
    }
    else if (d > 0 && y > 0 && D > 0 && Y > 0 && y == Y) {
        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (m < M) {
                    cout << "YES";
                }
                else if (m == M) {
                    if(d <= 31 && D <= 31 && d < D) {
                        cout << "YES";
                    }
                    else {
                        cout << "NO";
                    }
                }
                else if (m > M) {
                    cout << "NO";
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (m < M) {
                    cout << "YES";
                }
                else if (m == M) {
                    if(d <= 30 && D <= 30 && d < D) {
                        cout << "YES";
                    }
                    else {
                        cout << "NO";
                    }
                }
                else if (m > M) {
                    cout << "NO";
                }
                break;
            case 2:
                if (m < M) {
                    cout << "YES";
                }
                else if (m == M) {
                    if(d <= 28 && D <= 28 && d < D) {
                        cout << "YES";
                    }
                    else {
                        cout << "NO";
                    }
                }
                else if (m > M) {
                    cout << "NO";
                }
                break;
            default: cout << "No date";
        }
    }
    else {
        cout << "NO";
    }
    return 0;
}