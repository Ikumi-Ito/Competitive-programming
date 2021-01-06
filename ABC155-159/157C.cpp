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
  ll N, M;
  cin >> N >> M;
  vll v(N, INF);
  bool check = true;
  for (int i = 0; i < M; i++) {
    ll a, b;
    cin >> a >> b;
    if((v[a-1] != INF && v[a-1] != b)||(a == 1 && b == 0 && N!=1)){
      check = false;
    }
    v[a - 1] = b;
  }

  if(!check){
      cout <<-1 << endl;
      return 0;
  }

  for (int i = 0; i< N; i++){
        if(v[i]!=INF){
          cout << v[i];
        }
        else{
            if(i==0 && N!=1){
              cout << 1;
            }
            else{
              cout << 0;
            }
        }
    }
    cout << endl;
    return 0;
}