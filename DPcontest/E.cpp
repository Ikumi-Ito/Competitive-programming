#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}


int main(){
    ll N, W;
    cin >> N >> W;
    ll weight[110] = {0}, value[110] = {0};
    for(int i=0; i<N; ++i)cin >> weight[i] >> value[i];
    vector<vector<ll>> dp(N+1, vector<ll>(100100));
    for(int i=0; i<N+1; ++i)for (int j = 0; j < 100100; ++j) dp[i][j] = INF;

    dp[0][0] = 0;

    for (int i = 0; i < N; i++){
      for (int j = 0; j < 100100; j++){
        if (j >= value[i]) chmin(dp[i + 1][j], dp[i][j - value[i]] + weight[i]);
        chmin(dp[i + 1][j], dp[i][j]);
      }
    }
    ll out = 0;
    for (int i = 0; i < 100100; i++){
      if (dp[N][i] <= W) out = i;
    }
    cout << out << endl;
    return 0;
}