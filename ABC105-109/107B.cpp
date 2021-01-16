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
  ll H, W;
  cin >> H >> W;
  vector<string> S(H);
  for(ll i = 0; i < H ; i++){
      cin >> S[i];
  }
  vvll ta(H, vector<ll>(W, 0));
  vvll yo(H, vector<ll>(W, 0));
  vvll check(H, vector<ll>(W, 0));

  for(ll i = 0 ; i < H ; i++){
      for(ll j = 0; j < W; j++){
          if(S[i][j]== '.'){
              ta[i][j]=1;
              yo[i][j]=1;
          }
      }
  }
  for(ll i = 0 ; i < H ; i++){
      for(ll j = 0; j < W-1; j++){
          if(yo[i][j]!=0 && yo[i][j+1]!=0){
              yo[i][j+1]=yo[i][j] + 1;
          }
      }
  }
  for(ll j=0; j<W ; j++){
      for(ll i = 0 ; i < H-1 ; i++){
          if(ta[i][j]!=0 && ta[i+1][j]!=0){
              ta[i+1][j] = ta[i][j] + 1;
          }
      }
  }
  for(ll i = 0 ; i < H ; i++){
      if(yo[i][W-1]==W){
          for(ll j = 0 ; j < W ; j++){
              check[i][j] = 1;
          }
      }
  }
  for(ll j = 0; j < W ; j++){
      if(ta[H-1][j]==H){
          for(ll i= 0 ; i < H ; i++){
              check[i][j] = 1;
          }
      }
  }

  for(ll i = 0 ; i < H ; i++){
      bool a=false;
      for(ll j = 0; j < W; j++){
          if(check[i][j]==1)continue;
          else{
              a = true;
              cout << S[i][j];
          }
      }
      if(a){
          cout <<endl;
      }
  }

  return 0;
}