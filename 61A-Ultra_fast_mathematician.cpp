#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    if (cin >> s1 >> s2) {
        string ans = "";
        ans.reserve(s1.length());
        
        for (size_t i = 0; i < s1.length(); ++i) {
            ans += (s1[i] != s2[i] ? '1' : '0');
        }
        
        cout << ans << "\n";
    }

    return 0;
}