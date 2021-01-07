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
  ll N, W;
  cin >> N >> W;
  vll S(N), T(N), P(N), Q(300000, 0);

  for (ll i = 0; i < N; i++) {
    cin >> S[i] >> T[i] >> P[i];
    Q[S[i]] += P[i];
    Q[T[i]] -= P[i];
  }

  for(ll i = 1; i < Q.size(); i++) {
    Q[i] += Q[i - 1];
  }

  bool check = true;

  for (ll i = 0; i < Q.size(); i++) {
      if(Q[i]>W){
        check = false;
      }
  }
  
  if(check){
      cout << "Yes" << endl;
  }
  else{
      cout << "No" << endl;
  }
  return 0;
}