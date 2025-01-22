#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, x;
    priority_queue<int, vector<int>, greater<int> > minHeap;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> x;
        if(x==0){
            if(minHeap.empty()){
                cout << "0\n";
            } else{
                cout << minHeap.top() << '\n';
                minHeap.pop();
            }
        } else{
            minHeap.push(x);
        }
    }

    return 0;
}