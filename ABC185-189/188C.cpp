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
  ll a = pow(2, N);
  vll A(a), B(a);
  for(ll i = 0; i < a; i++){
    ll b = 0;
    cin >> b;
    A[i] = b;
    B[i] = b;
  }
  ll cnt = N;
  ll d = 2;
  ll out = 0;
  while (cnt != 0) {
    for(ll i = 0; i < a; i+=d){
        if(cnt==1){
          out = min(A[i], A[i + d - 1]);
          break;
        }
        if(A[i]<A[i+d-1]){
          A[i] = A[i + d - 1];
        }
        else {
          A[i + d - 1] = A[i];
        }
    }
    cnt--;
    d *= 2;
  }

  for(ll i = 0; i < a; i++){
      if(B[i]==out){
          cout << i+1 << endl;
          break;
      }
  }
  return 0;
}