#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << char('a' + rand()%26) << " ";
        }
        cout << endl;
    }
    return 0;
}