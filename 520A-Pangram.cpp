#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26) {
        cout << "NO\n";
        return 0;
    }

    vector<bool> seen(26, false);
    int unique_count = 0;

    for (char c : s) {
        char lower = tolower(c);
        if (lower >= 'a' && lower <= 'z') {
            int idx = lower - 'a';
            if (!seen[idx]) {
                seen[idx] = true;
                unique_count++;
            }
        }
    }

    if (unique_count == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}