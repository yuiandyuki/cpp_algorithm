#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;
int f[N][N];
int n, m;
int V[N], W[N];

int main(){
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) cin >> V[i] >> W[i];
    
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= m; j++) {
                f[i][j] = f[i - 1][j];
                if(j >= V[i]) f[i][j] = max(f[i - 1][j], f[i][j - V[i]] + W[i]);
            }
    
    cout << f[n][m] << endl;
    return 0;
}