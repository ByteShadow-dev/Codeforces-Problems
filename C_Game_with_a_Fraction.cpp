#include <iostream>

using namespace std;

void solve() {
    long long p, q;
    cin >> p >> q;
    if (3 * p  - 2*q>= 0 && p < q) { // ok bro
        cout << "Bob" << endl;
    } else {
        cout << "Alice" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}

// definetely written by me and not gemini pro