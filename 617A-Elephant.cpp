#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int ans = 0;
    int coordinates;
    cin >> coordinates;
    
    while(coordinates != 0){
        if(coordinates - 5 >= 0){
            ans++;
            coordinates -= 5;
            continue;
        }else if(coordinates - 4 >= 0){
            ans++;
            coordinates -= 4;
            continue;
        }else if(coordinates - 3 >= 0){
            ans++;
            coordinates -= 3;
        }else if(coordinates - 2 >= 0){
            ans++;
            coordinates -= 2;
        }else{
            ans++;
            coordinates--;
        }
    }
    
    cout << ans;
    return 0;
}