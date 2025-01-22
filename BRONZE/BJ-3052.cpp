#include <iostream>
#include <set>

using namespace std;

int main(){
    int input, tmp;
    set<int> s;

    for(int i=0;i<10;i++){
        cin >> input;
        tmp = input % 42;
        s.insert(tmp);
    }

    cout << s.size();

    return 0;
}