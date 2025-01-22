#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;

    int save[26];
    
    for(int i=0;i<26;i++)
        save[i] = -1;

    for(int i=0;i<26;i++){
        for(int j=0;j<input.size();j++){
            if(input[j] == char('a'+i)){
                save[i] = j;
                break;
            }
        }
    }
    
    for(int i=0;i<26;i++)
        cout << save[i] << " ";
    

    return 0;
}