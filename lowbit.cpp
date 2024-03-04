#include<iostream>
using namespace std;
bool at(int num, int k){
    return (num >> k) & 1;
}

int lowbit(int x){
    return x&-x;
}


int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int res = 0;
        while(x) x -= lowbit(x), res++;
        cout << res << ' ';
    }
    return 0;
}