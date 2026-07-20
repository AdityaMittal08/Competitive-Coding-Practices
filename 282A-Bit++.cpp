#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string opr;
        cin >> opr;
        for(int j = 0; j < opr.size(); j++){
            if(opr[j] == 'X'){
                continue;
            }
            if(opr[j] == '+'){
                ans++;
                break;
            }
            if(opr[j] == '-'){
                ans--;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}