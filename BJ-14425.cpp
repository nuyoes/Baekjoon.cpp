#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string T;
    set<string> S;
    int N, M, sum = 0;

    cin >> N >> M;

    for(int i=0;i<N;i++){
        cin >> T;
        S.insert(T);
    }

    for(int i=0;i<M;i++){     
        cin >> T;
        if(S.find(T) != S.end()) {
            sum++;
        }
    }
    
    std::cout << sum;

    return 0;
}