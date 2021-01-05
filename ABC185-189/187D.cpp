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
  ll N, X = 0;
  cin >> N;
  vll x(N), A(N), B(N);
  rep(i, N) {
    cin >> A[i] >> B[i];
    x[i] = 2 * A[i] + B[i];
    X -= A[i];
  }
  sort(x.begin(), x.end(), greater<ll>());
  rep(i, x.size()){
    X += x[i];
    if(X>0){
      cout << i + 1 << endl;
      break;
    }
  }
  return 0;
}