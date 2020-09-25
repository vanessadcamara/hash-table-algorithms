#include<bits/stdc++.h>
#define ll long long
#define M 11
#define BASE 128

using namespace std;

vector<string> hash_table[M];

int h(string s) {
    int res = 0;
    for(int i=0; i < s.size(); ++i) {
        res = (res * BASE) + (int)s[i];
        res %= M;
    }
    return res;
}

string s;

int main() {

    while(cin >> s && s != "0") {
        hash_table[h(s)].push_back(s);

    }

    for(int i=0; i < M; ++i) {
        cout << "hash_table[" << i <<  "]:";;
        for(string e : hash_table[i]) {
            cout << ' ' << e;
        }
        cout << endl;
    }


    return 0;
}
