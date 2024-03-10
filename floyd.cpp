#include <cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N = 210, INF = 1e9;

int n, m;
int d[N][N];

void floyd(){
    for (int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}


int main(){
    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }

    while (m --){
        int a, b, w;
        scanf("%d%d%d", &a, &b, &w);

        d[a][b] = min(d[a][b], w);
        d[b][a] = min(d[b][a], w);
    }


    floyd();

    for(int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d ", d[i][j]);
        }
        puts("");
    }
    return 0;
}
