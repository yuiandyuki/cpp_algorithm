#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for(auto num : vec){
        printf("%d\n", num);
    }
}
// 64 位输出请用 printf("%lld")