#include <iostream>
#include <set>

using namespace std;

int main() {
    int input;
    set<int> S1;

    for(int i=1;i<=30;i++){
        S1.insert(i);
    }
    
    for(int i=0;i<28;i++){
        cin >> input;
        S1.erase(input);
    }
    
    for (set<int>::iterator iter = S1.begin(); iter != S1.end(); iter++) {
	    cout << *iter << "\n";
    }

    return 0;
}
