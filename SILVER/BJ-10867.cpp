#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, input;
    cin >> N;

    vector<int> V;

    for(int i=0;i<N;i++){
        cin >> input;
        V.push_back(input);
    }

    sort(V.begin(), V.end());

    V.erase(unique(V.begin(), V.end()), V.end());

    for(int i=0;i<V.size();i++)
        cout << V[i] << ' ';

    return 0;
}