#include <cctype>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string s;
    char c;
    getline(cin, s);
    cin >> c;
    c = tolower(c);
    int len = s.size();
    int ans = 0;
    for (int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
        if(s[i] == c){
            ans++;
        }
    }
    cout << ans;
}
// 64 位输出请用 printf("%lld")