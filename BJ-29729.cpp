#include <iostream>
//#include <vector>
using namespace std;

int main(){
    int S0, N, M;
    int i = 0, j = 0, sum = 0;
    cin >> S0 >> N >> M;
    //vector <int> V(S0);  ->  벡터를 안 썼네.....
    
    for(int i=0;i<N+M;i++){
        cin >> j;
        if(j==1) sum++;
        else if(j==0) sum--;
        if(S0<sum) S0 *= 2;
    }

    cout << S0;
}