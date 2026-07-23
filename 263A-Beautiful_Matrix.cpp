#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ans ;
    int val;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if(val == 1){
                ans = abs(i - 2) + abs(j - 2);
            }
        }
    }
    
    cout << ans;
    
    return 0;
}