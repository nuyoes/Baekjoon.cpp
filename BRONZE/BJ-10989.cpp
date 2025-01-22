#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int i, input;
    vector<int> num;

    cin >> i;

    for(int j=0; j<i; j++){
        cin >> input;
        num.push_back(input);
    }

    sort(num.begin(), num.end());

    for(int j=0; j<i; j++)
        cout << num[j] << '\n';

    return 0;
}