#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int max_val = -1, min_val = 101;
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > max_val) {
            max_val = a;
            max_idx = i;
        }
        if (a <= min_val) {
            min_val = a;
            min_idx = i;
        }
    }

    int swaps = max_idx + (n - 1 - min_idx);
    if (max_idx > min_idx) {
        swaps--;
    }

    cout << swaps << "\n";
    return 0;
}