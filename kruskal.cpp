#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 2e5 + 10;

int n, m;
int p[N];

struct Edge{
    int a, b, w;
    bool operator < (const Edge &W) const{
        return w < W.w;
    }
}edges[N];

int find(int a){
    if(p[a] != a) p[a] = find(p[a]);
    return p[a];
}

int main(){
    scanf("%d%d", &n, &m);

    for(int i = 0; i < m; i++){
        int a, b, w;
        scanf("%d%d%d", &a, &b, &w);
        edges[i] = {a, b, w};
    }

    int cnt = 0, res = 0;
    sort(edges, edges + m);

    for(int i = 0; i <= n; i++) p[i] = i;

    for(int i = 0; i < m; i++){
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;
        a = find(a), b = find(b);
        if (a != b){
            p[a] = b;
            res += w;
            cnt++;
        }
    }

    if (cnt < n - 1){
        puts("orz");
    } else{
        printf("%d", res);
    }
    return 0;
}
