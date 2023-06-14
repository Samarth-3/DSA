#include <iostream>
using namespace std;

int main() {
    int n = 3;
    char current_char = 'A';
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << current_char <<" ";
        }
        cout << endl;
        current_char++;
    }
    
    return 0;
}

// A A A 
// B B B 
// C C C 