#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char chara = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << chara;
        }
        cout << endl;
        chara++;
    }
    
    return 0;
}

// A
// BB
// CCC
// DDDD
// EEEEE