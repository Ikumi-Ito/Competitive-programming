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
  ll N, K;
  cin >> N >> K;
  vll a(N);

  for(ll i = 0; i < N; i++){
      cin >> a[i];
  }
  ll right = 0;
  ll out = 0;
  ll s = 0;
  for(ll left = 0; left < N ; left++){
      while(right < N && s<K){
          s +=a[right];
          right++;
      }
      if(s<K)break;
      out+=N-(right-1);
      if(right==left)right++;
      else s -= a[left];
  }
  cout << out << endl;
  return 0;
}