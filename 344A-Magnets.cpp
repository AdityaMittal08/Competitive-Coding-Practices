#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    string prev, curr;
    cin >> prev;

    int groups = 1;
    for (int i = 1; i < n; ++i) {
        cin >> curr;
        if (curr != prev) {
            groups++;
            prev = curr;
        }
    }

    cout << groups << "\n";
    return 0;
}