#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int valid_rooms = 0;
    while (n--) {
        int p, q;
        cin >> p >> q;
        
        if (q - p >= 2) {
            valid_rooms++;
        }
    }

    cout << valid_rooms << "\n";
    return 0;
}