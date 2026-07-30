#include <iostream>
#include <string>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int ans = 0;
    int cost = 0;
    for(int i = 1; i <= w; i++){
        cost += i*k;
    }
    
    ans = cost - n;
    if(ans < 0){
        cout  << 0;
        return 0;
    }
    cout << ans;
    return 0;
}