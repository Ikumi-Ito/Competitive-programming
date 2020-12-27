#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
    ll N;
    cin >> N;
    vector<ll> x(N);
    for(int i=0; i < N; i++)cin >> x[i];
    ll man=0, tyebi = 0;
    long double yuku = 0;
    for (int i = 0; i < N; i++) {
      man += abs(x[i]);
      yuku += abs(x[i]) * abs(x[i]);
      tyebi = max(tyebi, abs(x[i]));
    }
    cout << man << endl;
    cout << fixed<<setprecision(10)<<sqrt(yuku) << endl;
    cout << tyebi << endl;
    return 0;
}