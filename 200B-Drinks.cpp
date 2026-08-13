#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double p;
        cin >> p;
        sum += p;
    }

    cout << fixed << setprecision(12) << sum / n << "\n";

    return 0;
}