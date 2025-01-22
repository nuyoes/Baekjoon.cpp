#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;

    int alpha[28] = {0};

    for(int i=0;i<input.size();i++){
        int save = tolower(input[i])-97;
        alpha[save]++;
    }

    int max = alpha[0];
    int cnt = 0;
    int index = 0;
    int tmp = -1;

    for(int i=1;i<28;i++){
        if(max < alpha[i]){
            max = alpha[i];
            index = i;
        } 
        else if(max == alpha[i]) {
            cnt++;
            tmp = max;
        }
    }

    if(cnt == 0) {
        cout << char(index + 65);
    } else if(cnt != 0 && tmp == max){
        cout << '?';
    } else {
        cout << char(index + 65);
    }

    return 0;
}