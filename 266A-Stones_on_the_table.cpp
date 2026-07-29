#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string val;
    cin >> val;

    for (int i = 1; i < n; i++) {
        if (val[i] == val[i - 1]) {
            ans++;
        }
    }

    cout << ans;
    return 0;
}