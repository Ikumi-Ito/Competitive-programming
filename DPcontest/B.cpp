#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long INF = 1LL << 60;
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main(){
    ll N, K;
    cin >> N >> K;
    vector<ll> h(1000001);
    for (int i = 0; i < N; i++) cin >> h[i];
    vector<ll> dp(1000001);
    for (int i = 0; i < 10001; i++) dp[i] = INF;
    dp[0] = 0;

    for (int i = 0; i < N; i++){
      for (int j = 1; j <= K; j++){
        chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
      }
    }
    cout << dp[N-1] << endl;
    return 0;
}