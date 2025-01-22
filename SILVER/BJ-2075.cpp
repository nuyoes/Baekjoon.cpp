#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, input;
    priority_queue<int, vector<int>, greater<int> > Heap;

    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> input;
            Heap.push(input);
            if(Heap.size()>N){
                Heap.pop();
            } 
        }
    }
    
    cout << Heap.top();

    return 0;
}