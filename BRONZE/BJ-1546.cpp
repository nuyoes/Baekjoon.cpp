#include <iostream>
#include <vector>

using namespace std;

int main(){ 
    int N, M, input;
    float result = 0;
    vector<int> grade;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> input;
        grade.push_back(input);
    }

    M = grade[0];

    for(int i=0;i<N;i++){
        if(grade[i] > M){
            M = grade[i];
        }
    }

    for(int i=0;i<N;i++){
        result += (float)(grade[i] / (float)M) * 100;
    }

    cout << result / N;

    return 0;
}