#include <iostream>
using namespace std;
 
int main (){
    int watermelonWeight= 0;
    cin >> watermelonWeight;
    if(watermelonWeight % 2 == 0 && watermelonWeight > 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}