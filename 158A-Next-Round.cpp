#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector <int> arr;
    for(int i = 0; i < n; i++){
        int l;
        cin >> l;
        arr.push_back(l);
    }
    
    int ans = 0;
    for(int j = 0; j < arr.size(); j++){
        if(arr[j] >= arr[k - 1] && arr[j] > 0){
            ans++;
        }
    }
    cout << ans;
    return 0;
}