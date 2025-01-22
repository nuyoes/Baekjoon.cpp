#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;
    priority_queue<int> maxHeap;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> x;
        if(x==0){
            if(maxHeap.empty()){
                cout << "0\n";
            } else{
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            }
        } else{
            maxHeap.push(x);
        }
    }

    return 0;
}