#include <iostream>
using namespace std;
int main() {
    int d1, m1, y1, d2, m2, y2;
    bool check = false;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2 ;
    
    if (d1 < 1 || m1 > 12 || y1 < 0 || d2 < 1 || m2 > 12 || y2 < 0){
        cout << "Invalid date";
        return 0;
    }
    
    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        if (d1 >= 1 && d1 <= 31) check = true;
        else {
            cout << "Invalid date";
        }
    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        if (d1 >= 1 && d1 <= 30) check = true;
        else {
            cout << "Invalid date";
        }
    }
    else if (m1 == 2){
        if (d1 >= 0 && d1 <= 28) check = true;
        else {
            cout << "Invalid date";
        }
    }
    
    
    if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12){
        if (d2 >= 1 && d2 <= 31) check = true;
        else {
            cout << "Invalid date";
        }
    }
    else if (m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11 ){
        if (d2 >= 1 && d2 <= 30) check = true;
        else {
            cout << "Invalid date";
        }
    }
    else if (m2 == 2){
        if (d2 >= 1 && d2 <= 28) check = true;
        else {
            cout << "Invalid date";
        }
    }
    
    if (check){
        if (y1 < y2) cout << "Yes";
        else {
            if (m1 < m2) cout << "Yes";
            else {
                if (d1 < d2) cout << "Yes";
                else cout << "No";
            }
        }
    }
    return 0;
}
