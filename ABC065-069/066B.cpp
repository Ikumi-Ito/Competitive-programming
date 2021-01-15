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
using Graph = vector<vector<int>>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

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
  string S;
  cin >> S;
  ll N = S.size();
  for(ll i = N-2 ; i >= 0 ; i--){
    bool check = true;
    vector<char> a;
    for(ll j = 0 ; j <=i; j++){
      a.push_back(S[j]);
    }
    if(a.size()%2==1){
        check = false;
    }
    else{
      ll l = 0;
      ll r = a.size() / 2;
      while (r!=a.size()) {
        if (a[l] != a[r]) {
          check = false;
        }
        l++;
        r++;
      }
    }
    if(check){
        cout << i+1 << endl;
        break;
    }
  }
  return 0;
}