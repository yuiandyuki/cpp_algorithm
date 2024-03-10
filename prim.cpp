#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 5010, INF = 0x3f3f3f3f;

int n, m;
int g[N][N];
int dist[N];
bool st[N];

int prim(){
    memset(dist, 0x3f, sizeof dist);

    int res = 0;
    for (int i = 0; i < n; i++){
        int t = -1;
        for (int j = 1; j <= n; j++){
            if (!st[j] && (t == -1 || dist[t] > dist[j])){
                t = j;
            }
        }
        // cout << t << ' ';
        if(i && dist[t] == INF) return INF;
        if (i) res += dist[t]; // 先加 再更新
        // cout << dist[t] << ' ' << res << endl;
        for(int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);
        st[t] = true;
    }
    return res;
}

int main(){
    scanf("%d%d", &n, &m);
    memset(g, 0x3f, sizeof g);
    while(m --){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        g[a][b] = g[b][a] = min(g[a][b], c);
    }

    int t = prim();

    if (t == INF) puts("orz");
    else printf("%d\n", t);

    return 0;
}   
