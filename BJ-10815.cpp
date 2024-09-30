#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, i, j, k;
    set <int> S;
    vector <int> V;

    cin >> N;
    for(i=0;i<N;i++){
        cin >> k;
        S.insert(k);
    }

    cin >> M;
    for(i=0;i<M;i++){
        cin >> k;
        if(S.find(k)==S.end()) cout << "0 ";
        else cout << "1 ";
    }

    return 0;
}
    

    