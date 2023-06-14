#include <iostream>
using namespace std;

int main() {
    int n = 7;
    char chara = 'A'+n-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << chara;
            chara++;
        }
        cout << endl;
        chara=('A'+n-1)-i-1;
    }
    
    return 0;
}

// G
// FG
// EFG
// DEFG
// CDEFG
// BCDEFG
// ABCDEFG