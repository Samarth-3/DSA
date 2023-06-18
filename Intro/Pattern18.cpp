#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <=n-i ; j++) {
            cout << j;
        }
        for (int k = i; k <2*i; k++) {
            cout << "*";
        }
        for (int k = i; k <2*i; k++) {
            cout << "*";
        }
        for (int x = n-i; x >0; x--)
        {
            cout<<x;
            
        }
        cout << endl;
    }
    return 0;
}


// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1