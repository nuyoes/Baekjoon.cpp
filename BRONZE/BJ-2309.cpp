#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int i, j, input, sum=0;
    vector<int> height;
    set<int> result;
    int flag1 = -1;
    int flag2 = -1;

    for(i=0;i<9;i++){
        cin >> input;
        sum += input;
        height.push_back(input);
    }

    if(sum>100) sum -= 100;

    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(height[i]+height[j]==sum) {
                flag1 = i;
                flag2 = j;
            }
        }
    }

    for(i=0;i<9;i++){
        if (i == flag1) continue;
        else if (i == flag2) continue;
        else result.insert(height[i]);
    }

    for (set<int>::iterator iter = result.begin(); iter != result.end(); iter++) 
        cout << *iter << "\n";

    return 0;
}