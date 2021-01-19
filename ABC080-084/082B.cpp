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

#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll, vector<ll>, greater<ll>>

constexpr ll INF = (1ll << 60);
constexpr ll mod = 1000000007;
constexpr double pi = 3.14159265358979323846;

using ping = pair<ll, ll>;
using Graph = vector<vector<ll>>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

const int dx8[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy8[8] = {0, 1, 0, -1, 1, 1, -1, -1};

template <typename T>
bool chmax(T& a, const T& b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <typename T>
bool chmin(T& a, const T& b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

int main() {
  string s, t;
  cin >> s >> t;
  ll N = s.size();
  ll M = t.size();
  bool check = true;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end(), greater<ll>());
  for(ll i = 0; i < max(N, M); i++){
      if(i!=N && i==M){
          check = false;
          break;
      }
      ll a = s[i];
      ll b = t[i];
      if(b>a){
          break;
      }
      else if(a==b){
          continue;
      }
      else{
          check = false;
          break;
      }
  }
  if(s==t)check = false;
  if(check){
      cout << "Yes" << endl;
  }
  else{
      cout << "No" << endl;
  }
  return 0;
}