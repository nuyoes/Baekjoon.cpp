#include <iostream>
#include <vector>
//#include <algorithm>  -->  IDE에 따라!
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N;

    vector<int> V1;

    int input_data;
    for(int i=0;i<N;i++){
        cin >> input_data;
        V1.push_back(input_data);
    }

    sort(V1.begin(), V1.end()); // nlogn
    
    cin >> M;

    // m * logn
    for(int i=0;i<M;i++){
        cin >> input_data;
        if(binary_search(V1.begin(), V1.end(), input_data)){
            cout << "1" << '\n'; //endl ㅁㅊㄴ아 얘때문에시간초과뜸
        } else {
            cout << "0" << '\n';
        }
    }
    
    return 0;
}