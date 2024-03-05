/*
vector 变长数组
size()
empty()
clear()
front()/back()
push_back()/pop_back()
begin()/end()
支持比较运算 按字典序

pair<int, int>p;
p.first() p.second();
支持比较运算,以first为第一关键字
p = make_pair(1, 2);
p = {1, 2};
pair<int, pair<int, int>> p;

string substr(), c_str()
size() / length()
empty()
+


queue
push()
front()
back()
pop()
size()
empty()

priority_queue push() 大根堆
front() pop()
push()
top()
pop()



stack push() top() pop() size() empty()


deque 双端队列 
size()
empty()
clear()
front()
back()
push_back()/pop_back()
push_front()/pop_front()
begin() / end()


set, map, multiset, multimap 红黑树 平衡二叉树
unordered_set, unordered_map, unordered_multiset, 哈希表
begin()/end() ++, --

set
insert()
size()
empty()
clear()
find() 
count()
erase() 
(1) 删除数 或者 迭代器
lower_bound()/upper_bound()
返回大于等于x的最小的数的迭代器
返回大于x的最小的数的迭代器

map/multimap
insert() 插入pair
erase() pair/ 迭代器
find()
[] 像数组一样用

unordered_set, unordered_map 和上面类似 但是不支持lower_bound()/upper_bound()

bitset 压位
bitset<10000> s;
~, &, |, ^ >> << == != []
count() 有多少1
any() 是否有一个1
none（） 判断是否全为0
set(k, v)
set()
reset()
flip()
flip(k, v)

1024bool 1024B 128B
*/

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int main(){
    vector<int> a;
    // vector<int> a(10);
    // vector<int> a(10, 3);
    // vector<int> a[10];
    // a.size(); o(1)
    // a.empty(); o(1)
    priority_queue<int, vector<int>, greater<int> > heap; // 小根堆
}
