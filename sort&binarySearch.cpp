#include <iostream>
//#include <algorithm>  -->  IDE 따라 다름.. 귀찮으면 #include <bits/stdc++.h> 쓰라네요
using namespace std;

int main(){
    int arr[10] = {1,2,3,8,5,6,7,8,9,8};

    sort(arr, arr+10);

    for(int i=0;i<9;i++)
        cout << arr[i] << " ";

    if(binary_search(arr, arr+10, 5))
        cout << "검색 데이터가 배열 내부에 존재합니다.";
}