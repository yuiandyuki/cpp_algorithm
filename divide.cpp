#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 求所有约数
vector<int> get_divisors(int n){
    vector<int> res;

    for(int i = 1; i <= n / i; i++){
        if(n % i == 0){
            res.push_back(i);
            if (i != n / i) res.push_back(n / i);
        }
    }
    sort(res.begin(), res.end());
    return res;
}

// 约数个数


int main(){
    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        auto res = get_divisors(x);
        for (auto t : res) cout << t << ' ';
        cout << endl;
    }
    return 0;
}
