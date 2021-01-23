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
  ll N;
  cin >> N;
  vll A(N);
  for(ll i = 0; i < N; i++){
      cin >> A[i];
  }
  ll out = -INF;
  for(ll i = 0; i < N; i++){
      ll tmp = 0;
      ll b = A[i];
      out = max(out, A[i]);
      for(ll j = i; j < N; j++){
          if(A[j]>=b){
              tmp += b;
              out = max(out, tmp);
          }
          else{
              ll c = A[j];
              tmp -= (b-c)*(j-i);
              tmp += c;
              out = max(out, tmp);
              b = c;
          }
      }
      out = max(out, tmp);
  }
  cout << out << endl;
  return 0;
}