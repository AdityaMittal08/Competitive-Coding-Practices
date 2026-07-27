#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int small;
    int big;
    
    cin >> small;
    cin >> big;
    int ans = 0;
    while(small <= big){
        small *= 3;
        big *= 2;
        ans++;
    }
    
    cout << ans;
    return 0;
}