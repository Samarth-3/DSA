#include <iostream>
using namespace std;

void rev(string &st, int s, int e) {
    if (e < s) {
        return; // Base case: 
    }
    swap(st[s++], st[e--]);
    rev(st, s, e);
}

int main() {
    string st = "hello";
    rev(st, 0, st.length() - 1);
    cout << st << endl;
}
