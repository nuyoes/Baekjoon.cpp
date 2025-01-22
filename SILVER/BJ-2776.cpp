#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M;
    int input_data;

    cin >> T;

    while(T--){
        unordered_set<int> note1;
        
        cin >> N;
        for(int i=0; i < N; i++){
            cin >> input_data;
            note1.insert(input_data);
        }
        
        cin >> M;
    
        for(int j=0;j<M;j++){
            cin >> input_data;
            if(note1.find(input_data) != note1.end()) {
                cout << "1" << '\n'; 
            } else{
                cout << "0" << '\n';
            }
        }

    }
    
}