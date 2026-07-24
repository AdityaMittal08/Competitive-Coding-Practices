#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string s;
    cin >> s;
    unordered_map<char, int> myMap;   
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(myMap.count(s[i])){
            continue;
        }else{
            myMap.insert({s[i], 1});
            ans++;
        }
    }
    if(ans%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}