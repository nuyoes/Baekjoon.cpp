#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (int a, int b){
    return a > b;
}

int main(){
    vector<int> v;
    int N;

    cin >> N;

    while(N!=0){
        v.push_back(N%10);
        N /= 10;
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0;i<v.size();i++){
        cout << v[i];
    }

    return 0;
}