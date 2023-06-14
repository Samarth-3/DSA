#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char chara = 'A';
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            cout << chara <<" ";
            chara++;
        }
        cout << endl;
        chara = 'A' + i + 1;
    }
    
    return 0;
}

// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 