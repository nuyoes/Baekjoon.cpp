#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

//아왜틀렷는데ㅠㅠㅠㅠ!!!!

int main(){
    int N, x, y;
    cin >> N;

    vector<pair<int,int> > data;
    
    for(int i=0;i<N;i++){
        cin >> x >> y;
        pair<int, int> pair = make_pair(x,y);
        data.push_back(pair);
    }

    sort(data.begin(), data.end());

    int current_time = 0;
    
    for(int i=0;i<N-1;i++){
        int start_time = data[i].first;
        int ing_time = data[i].second;
        int next_time = data[i+1].first;
        int ing_next = data[i+1].second;

        int waiting_time = 0;


        if(start_time + ing_time < next_time) {
            waiting_time = next_time - start_time + ing_time;
            current_time += waiting_time;
        
            cout << "in if loop" << endl;
            cout << "* " << i << "st loop" << endl;
            cout << "start_time " << start_time << endl;
            cout << "ing_time " << ing_time << endl;
            cout << "next_time " << next_time << endl;
            cout << "waiting_time " << waiting_time << endl;
            cout << "current_time " << current_time << endl;
            cout << endl;
        
        }
        current_time += ing_time;

        cout << "* " << i << "st loop" << endl;
        cout << "start_time " << start_time << endl;
        cout << "ing_time " << ing_time << endl;
        cout << "next_time " << next_time << endl;
        cout << "waiting_time " << waiting_time << endl;
        cout << "current_time " << current_time << endl;
        cout << endl;

    }

// 한 번 덜 도는 것 같아서 더한 건데 아아모르겟어
    current_time += data[N-1].second;

    cout << current_time;

    return 0;
}