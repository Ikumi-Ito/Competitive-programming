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
  ll N, M;
  cin >> N >> M;
  vll s(M), c(M);
  for(ll i = 0; i < M; i++){
    cin >> s[i] >> c[i];
  }

  bool check = false;

  for (ll i = 0; i < 1000; i++) {
    string res = to_string(i);
    if (res.size() != N) {
      continue;
    }
    bool k = true;
    for (ll j = 0; j < M; j++) {
      if (res[s[j] - 1]-'0' != c[j]) {
        k = false;
      }
    }
    if (!k) continue;
    cout << i << endl;
    check = true;
    break;
  }

  if(!check){
      cout << -1 << endl;
  }
  return 0;
}