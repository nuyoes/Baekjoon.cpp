#include <iostream>

using namespace std;

int main(){
    int H, M;
    cin >> H >> M;

    if(M>=45) {
        M -= 45;
    } else {
        int tmp = 45 - M;
        H--;
        if(H<0) H = 23;
        M = 60 - tmp;
    }
    
    cout << H << " " << M;

    return 0;
}