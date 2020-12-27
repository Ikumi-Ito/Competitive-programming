#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
using Graph = vector<vector<ll>>;


int main() {
  ll N, M;
  cin >> N >> M;
  ll G[12][12]={0};
  for (int i = 0; i < M; i++) {
    ll a, b;
    cin >> a >> b;
    a--, b--;
    G[a][b] = 1;
    G[b][a] = 1;
  }

  ll out = 1;
  for (int bit = 0; bit < (1 << N); bit++) {
    vector<ll> as;
    for (int i = 0; i<N; i++){
      if (bit & (1 << i)) as.push_back(i);
    }

    bool check = true;

    for(auto a: as){
        for(auto b: as){
          if (a == b) continue;
          if (G[a][b] != 1) check = false;
        }
    }
    if(check){
      out = max(out, (ll)as.size());
    }
  }
  cout << out << endl;
  return 0;
}