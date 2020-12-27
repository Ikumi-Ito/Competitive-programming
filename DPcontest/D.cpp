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

int main() {
  ll N, W;
  cin >> N >> W;
  ll dp[110][100010] = {0};
  ll weight[110] = {0}, value[110] = {0};
  for (int i = 0; i < N; i++){
    cin >> weight[i] >> value[i];
  }

  for (int i = 0; i < N; i++){
    for (int wh = 0; wh <=W; wh++){
        if(wh>=weight[i])
          chmax(dp[i + 1][wh], dp[i][wh - weight[i]] + value[i]);
        chmax(dp[i + 1][wh], dp[i][wh]);
    }
  }
  cout << dp[N][W] << endl;
  return 0;
}