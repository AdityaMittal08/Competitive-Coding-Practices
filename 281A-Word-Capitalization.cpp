#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int ans = str[0];
    if(ans >= 65 && ans <= 90){
        cout << str;
    }else{
        ans -= 32;
        str[0] = ans;
        cout << str;
    }
    return 0;
}