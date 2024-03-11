#include <iostream>
using namespace std;
//要保证a < b
int gcd(int a, int b){
    if (b % a == 0) return a;
    return gcd(b % a, b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}