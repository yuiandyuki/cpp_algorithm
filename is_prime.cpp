#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1000010;
int primes[N], cnt;
bool st[N];

// 判断质数
bool is_prime(int n){
    if (n < 2) return false;
    for(int i = 2; i <= n / i; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

// 分解质因数
void divide(int n){
    for (int i = 2; i <= n / i; i++){
        if (n % i == 0){
            int s = 0;
            while(n % i == 0){
                n /= i;
                s++;
            }
            printf("%d %d", i, s);
        }
    }
    if(n > 1) printf("%d %d", n , 1);
}

// 埃氏筛法
void get_primes(int n){
    for (int i = 2; i <= n; i++){
        if(!st[i]){
            primes[cnt++] = i;
            for (int j = i + i; j <= n; j += i) st[j] = true;
        }
    }
}

// 线性筛
void get_primes1(int n){
    for(int i = 2; i <= n; i++){
        if(!st[i]) primes[cnt++] = i;
        for (int j = 0; primes[j] <= n / i; j++){
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
}


int main(){
    int n;
    cin >> n;

    get_primes1(n);

    cout << cnt << endl;

    return 0;
}