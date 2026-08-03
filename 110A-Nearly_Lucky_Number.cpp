#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    int no_of_lucky = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '4' || n[i] == '7'){
            no_of_lucky++;
        }
    }
    
    if(no_of_lucky == 4 || no_of_lucky == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}