#include<bits/stdc++.h>
#define ll long long
#define M 5

using namespace std;

set<ll> hash_table[M];

int h(ll x) {
    return x % M;
}

ll n;

int main() {
    while(scanf("%lld", &n) && n) {
        hash_table[h(n)].insert(n);
    }

    for(int i=0; i < M; ++i) {
        printf("hash_table[%d]:", i);
        for(int e : hash_table[i]) {
            printf(" %d", e);
        }
        puts("");
    }


    return 0;
}
