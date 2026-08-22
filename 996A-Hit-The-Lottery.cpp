#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    if (!(cin >> n)) return 0;

    int bills[] = {100, 20, 10, 5, 1};
    long long ans = 0;

    for (int bill : bills) {
        ans += n / bill;
        n %= bill;
    }

    cout << ans << "\n";
    return 0;
}