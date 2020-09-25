#include<bits/stdc++.h>
#define ll long long
#define M 11

using namespace std;

vector<ll> hash_table[M];

int h(ll x) {
    return (2 * x + 5) % M;
}

ll n;

int main() {
    while(scanf("%lld", &n) && n) {
        hash_table[h(n)].push_back(n);
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
