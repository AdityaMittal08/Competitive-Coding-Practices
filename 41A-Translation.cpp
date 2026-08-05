#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    string revGive;
    cin >> revGive;
    string rev = "";
    for(int i = n.size() - 1; i>= 0; i--){
        rev += n[i];
    }
    
    if(revGive == rev){
        cout  << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}