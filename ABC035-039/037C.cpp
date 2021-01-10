#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define rep_up(i, a, b) for (ll i = a; i < b; ++i)
#define rep_down(i, a, b) for (ll i = a; i > b; --i)

#define fi first
#define se second

#define vvvvll vector<vector<vector<vector<ll>>>>
#define vvvll vector<vector<vector<ll>>>
#define vvll vector<vector<ll>>
#define vll vector<ll>

constexpr ll INF = (1ll << 60);
constexpr ll mod = 1000000007;
constexpr double pi = 3.14159265358979323846;

using ping = pair<ll, ll>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
  ll N, K;
  cin >> N >> K;
  vll a(N);
  for(ll i = 0; i < N; i++){
    cin >> a[i];
  }
  vll sum(N + 1, 0);
  for(ll i = 0; i < N; i++){
    sum[i + 1] = sum[i] + a[i];
  }
  ll out = 0;
  for (ll i = K; i < N+1; i++){
    out += sum[i] - sum[i - K];
  }
  cout << out << endl;
  return 0;
}