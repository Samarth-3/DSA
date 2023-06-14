#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char chara = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << chara;
            chara++;
        }
        cout << endl;
        chara='A'+i+1;
    }
    
    return 0;
}

// A
// BC
// CDE
// DEFG
// EFGHI