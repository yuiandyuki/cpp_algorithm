#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string s;
    // cin >> s;
    getline(cin, s);
    // cout << s;
    int len = s.length();
    // cout << len << endl;
    int ans = 0;
    for (int i = len - 1; i >= 0; i--){
        if(s[i] != ' '){
            ans++;
        } else{
            break;
        }
        
    }
    cout << ans;
}
// 64 位输出请用 printf("%lld")