#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;

int main() {
    ll N;
    cin >> N;
    ll total = 1;
    for (int i = 1; i<=N; ++i){
        total=total*10%MOD;
    }
    ll seki = 1;
    for(int i = 1; i<=N; ++i){
      seki = seki*8%MOD;
    }
    ll A = 1;
    for(int i = 1; i <=N; ++i){
      A = A*9%MOD;
    }
    cout << (2*MOD+(total % MOD) + (seki % MOD) - (A % MOD) - (A % MOD)) % MOD << endl;
    return 0;
}