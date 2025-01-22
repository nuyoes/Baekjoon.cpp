#include <iostream>
#include <string>

using namespace std;
int main(){
    int T;
    cin >> T;

    string test;
    for(int i=0;i<T;i++){
        cin >> test;
        if(test.size()>1){
            cout << test.front() << test.back() << '\n';
        } else {
            cout << test << test << '\n';
        }
    }    
    
    return 0;
}