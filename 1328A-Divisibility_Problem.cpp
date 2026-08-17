#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        int val = a % b;

        if (val == 0) {
            cout << 0 << "\n";
        } else {
            cout << b - val << "\n";
        }
    }

    return 0;
}