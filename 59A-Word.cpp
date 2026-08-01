#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string given;
    cin >> given;
    
    string ans;
    int upper = 0;
    int lower = 0;
    for(int i = 0; i < given.size(); i++){
        if(given[i] > 96){
            lower++;
        }else{
            upper++;
        }
    }
    
    if(lower >= upper){
        for(int i = 0; i < given.size(); i++){
            given[i] = tolower(given[i]);
        }
        ans = given;
    }else{
        for(int i = 0; i < given.size(); i++){
            given[i] = toupper(given[i]);
        }
        ans = given;
    }
    
    cout << ans << endl;
    return 0;
}