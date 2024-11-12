#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v;
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
            v.push_back(input_num);
        } else if(input.find("pop")!=string::npos){
            if(v.size()==0)
                cout << "-1\n";
            // else 스택에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.
            else {
                cout << v.back() << "\n";
                v.pop_back();
            }
        } else if(input.find("size")!=string::npos){
            cout << v.size() << "\n";
        } else if(input.find("empty")!=string::npos){
            if(v.size()==0)
                cout << "1\n";
            else
                cout << "0\n";
        } else if(input.find("top")!=string::npos){
            if(v.size()==0)
                cout << "-1\n";
            else 
                cout << v.back() << "\n";
        }
    }
    
    return 0;
}