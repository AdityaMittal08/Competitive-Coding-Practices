#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string given;
    cin >> given;
    
    string ans = "";
    
    for (char c : given) {
        char lower_c = tolower(c);
        
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || 
            lower_c == 'o' || lower_c == 'u' || lower_c == 'y') {
            continue;
        } 
        
        ans += '.';
        ans += lower_c;
    }
    
    cout << ans << endl;
    return 0;
}