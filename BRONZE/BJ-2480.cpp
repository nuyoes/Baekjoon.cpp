#include <iostream>

using namespace std;

int MAX(int a, int b, int c){
    int max = a;

    if(max < b) max = b;
    if(max < c) max = c;

    return max;
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int money;

    if(a==b && b==c){
        money = 10000+a*1000;     
    } else if(a==b) {
        money = 1000+a*100;
    } else if(b==c){
        money = 1000+b*100;
    } else if(a==c){
        money = 1000+c*100;
    } else {
        money = MAX(a, b, c)*100;
    }

    cout << money;

    return 0;
}