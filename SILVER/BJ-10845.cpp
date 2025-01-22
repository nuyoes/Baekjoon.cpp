#include <iostream>
#include <queue> 
#include <string>
using namespace std;


int main(){
    queue<int> q;
    int N, input_num;
    string input;

    cin >> N;
    cin.ignore();

    for(int i=0;i<N;i++){
        getline(cin, input);
        if(input.find("push")!=string::npos){
            string temp="";
            int j=input.find(" ");
            for(j=j+1;j<input.length();j++)
                temp+=input[j];
            input_num=stoi(temp);
            q.push(input_num);
        } else if(input.find("pop")!=string::npos){
            if(q.empty()) cout << "-1\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
        } else if(input.find("size")!=string::npos){
            cout << q.size() << "\n";
        } else if(input.find("empty")!=string::npos){
            if(q.empty()) cout << "1\n";
            else cout << "0\n";
        } else if(input.find("front")!=string::npos){
            if(q.empty()) cout << "-1\n";
            else cout << q.front() << "\n";
        } else if(input.find("back")!=string::npos){
            if(q.empty()) cout << "-1\n";
            else cout << q.back() << "\n";
        }
    }

    return 0;
}