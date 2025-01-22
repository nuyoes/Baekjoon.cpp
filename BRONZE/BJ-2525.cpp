#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if(B+C>59){
        A += (B+C)/60;
        B = (B+C)%60;
        if(A>23) A -= 24;
    } else {
        B = B+C;
    }

    cout << A << " " << B;

    return 0;
}