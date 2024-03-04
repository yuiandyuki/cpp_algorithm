#include <iostream>
using namespace std;

const int N = 100010;
int m;
int e[N], l[N], r[N], idx;

void init(){
    // 0是head， 1是tail
    r[0] = 1;
    l[1] = 0;
    idx = 2;
}
// 在下标是k的点的右边插入
void add(int k, int x){
   e[idx] = x;
   r[idx] = r[k];
   l[idx] = k;
   l[r[k]] = idx;
   r[k] = idx;
}

void remove(int k){
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}