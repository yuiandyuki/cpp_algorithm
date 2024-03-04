#include <cstring>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
const int N = 100010;
int h[N], ph[N], hp[N], sizen;
// ph是插入的顺序映射到堆的位置 hp是ph的逆映射
void heap_swap(int a, int b){
    swap(ph[hp[a]], ph[hp[b]]);
    swap(hp[a], hp[b]);
    swap(h[a], h[b]);
}
void down(int u){
    int t = u;
    if (u * 2 <= sizen && h[u * 2] < h[t]) t = u * 2;
    if (u * 2 + 1 <= sizen && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    if (u != t){
        heap_swap(u, t);
        down(t);
    }
}

void up(int u){
    while(u / 2 && h[u / 2] > h[u]){
        heap_swap(u / 2, u);
        u /= 2;
    }
}

int main(){
    int n, m = 0;
    scanf("%d", &n);
    while(n--){
        char op[10];
        int k, x;
        scanf("%s", op);
        if(!strcmp(op, "I")){
            scanf("%d", &x);
            sizen++;
            m++;
            ph[m] = sizen, hp[sizen] = m;
            h[sizen] = x;
            up(sizen); 
        }
        else if (!strcmp(op, "PM")) printf("%d\n", h[1]);
        else if (!strcmp(op, "DM")){
            heap_swap(1, sizen);
            sizen--;
            down(1);
        }
        else if(!strcmp(op, "D")){
            scanf("%d", &k);
            k = ph[k];
            heap_swap(k, sizen);
            sizen--;
            down(k), up(k);
        }
        else {
            scanf("%d%d", &k, &x);
            k = ph[k];
            h[k] = x;
            down(k), up(k);
        }
    }
    return 0;
}