#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int h;
    cin >> n;
    cin >> h;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        if(k > h){
            ans += 2;
        }else{
            ans++;
        }
    }
    cout << ans;
    return 0;
}