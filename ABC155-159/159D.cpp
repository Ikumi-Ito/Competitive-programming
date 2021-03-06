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
  vll A(N), B(N+1, INF), C(N);
  for (ll i = 0; i < N; i++) {
    ll a;
    cin >> a;
    A[i] = a;
    B[i] = a;
  }
  sort(B.begin(), B.end());
  vll seki(210000, 1);
  for(ll i = 1; i < seki.size(); i++){
    seki[i] = seki[i - 1] * (i + 1);
  }
  ll maxsum = 0;
  ll cnt = 1;
  for (ll i = 0; i < N; i++) {
      if(B[i]==B[i + 1]){
        cnt++;
      }
      else{
          if(cnt>=2){
            maxsum += (cnt * (cnt - 1)) / 2;
            C[B[i]-1] = ((cnt * (cnt - 1)) / 2) - (((cnt - 1) * (cnt - 2)) / 2);
            cnt = 1;
          }
      }
  }
  for(ll i = 0; i< N; i++){
      cout << maxsum - C[A[i]-1] << endl;
  }
  return 0;
}