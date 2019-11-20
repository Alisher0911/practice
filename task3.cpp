#include <iostream>
using namespace std;
int main () {
    char c = '0';
    int count = 1;
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < count; j++) {
            cout << c;
        }
        cout << endl ;
        count++;
    }
    return 0;

}
