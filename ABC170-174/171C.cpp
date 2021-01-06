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

int main(){
    ll N;
    cin >> N;
    vll out;
    while (N != 0) {
      ll a = N % 26;
      if(a==0){
        out.push_back(122);
        N -= 26;
      } else {
        out.push_back(96 + a);
        N -= a;
      }
      N /= 26;
    }
    for (int i = out.size() - 1; i >= 0; i--) {
      printf("%c", out[i]);
    }
    cout << endl;
    return 0;
}