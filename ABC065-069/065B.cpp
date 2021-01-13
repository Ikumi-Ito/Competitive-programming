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
using Graph = vector<vector<int>>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

vector<bool> seen;
void dfs(const Graph &G, ll v){
    seen[v] = true;
    for (auto next_v : G[v]){
      if (seen[next_v]) continue;
      dfs(G, next_v);
    }
}

int main() {
  ll N;
  cin >> N;
  Graph G(N);
  for (ll i = 0; i < N; i++) {
    ll a;
    cin >> a;
    G[i].push_back(a - 1);
  }

  vector<ll> dist(N, -1);
  queue<ll> que;

  dist[0] = 0;
  que.push(0);

  while (!que.empty()) {
    ll v = que.front();
    que.pop();

    for (auto nv : G[v]) {
      if (dist[nv] != -1) continue;

      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  if(dist[1]>0){
    cout << dist[1] << endl;
  }
  else{
      cout << -1 << endl;
  }

  return 0;
}