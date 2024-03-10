// #include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans = 0;
    int len = s.size();
    if (!len || len == 1){
        return ans;
    }
    for (int i = 1; i < len; i++){
        if (s[i] == s[i - 1]){
            i++;
            ans++;
            continue;
        }
    }
    cout << ans;
    return 0;
}