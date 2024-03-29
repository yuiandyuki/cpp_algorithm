#include<iostream>
using namespace std;

const int N = 10010, M = 100010;

int n, m;
char p[N], s[M];
int ne[N];

int main(){
    cin >> n >> p + 1 >> m >> s + 1;
    // // 求nest
    // for(int i = 2, j = 0; i <= n; i++){
    //     while(j && p[i] != p[j + 1]) j = ne[j];
    //     if (p[i] == p[j + 1]) j++;
    //     ne[i] = j;
    // }
    // // kmp匹配过程 j是已经匹配好的下标
    // for (int i = 1, j = 0; i <= m; i++){
    //     while(j && s[i] != p[j + 1]) j = ne[j];
    //     if(s[i] == p[j + 1]) j++;
    //     if (j == n){
    //         // 匹配成功
    //         printf("%d", i - n);
    //         j = ne[j];
    //     }
    // }
    for (int i = 2, j = 0; i <= n; i++){
        while(j && p[j + 1] != p[i]) j = ne[j];
        if(p[i] == p[j + 1]) j++;
        ne[i] = j;
    }

    for (int i = 1, j = 0; i <= m; i++){
        while(j && p[j + 1] != s[i]) j = ne[j];
        if(p[j + 1] == s[i]) j++;
        if (j == n){
            // 匹配成功
            j = ne[j];
        }
    }
}

