#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int c, d, e, f;
    c = a * (b%10);
    d = a * (b%100 - b%10)/10;
    e = a * (b - b%100)/100; 
    f = c + d*10 + e*100;

    cout << c << "\n" << d << "\n" << e << "\n" << f;

    return 0;
}