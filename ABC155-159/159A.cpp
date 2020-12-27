#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;
using ping = pair<ll, ll>;

int main() {
    ll N, M;
    cin >> N >> M;
    ll cnt = 0;
    cnt += N * (N - 1) / 2;
    cnt += M * (M - 1) / 2;
    cout << cnt << endl;
    return 0;
}