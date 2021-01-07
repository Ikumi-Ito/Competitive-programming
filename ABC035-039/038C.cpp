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
  ll N;
  cin >> N;
  vll a(N);
  for(ll i = 0; i < N; i++){
    cin >> a[i];
  }
  ll cnt = 1;
  ll out = 0;
  for (ll i = 0; i < N; i++) {
      if(i==N-1){
        out += (cnt * (1 + cnt)) / 2;
        break;
      }
      if(a[i]<a[i+1]){
        cnt++;
      }
      else{
        out += (cnt * (1 + cnt)) / 2;
        cnt = 1;
      }
  }
  cout << out << endl;
  return 0;
}