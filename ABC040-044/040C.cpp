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
    ll N;
    cin >> N;
    vector<ll> a(1100000);
    for (int i = 0; i < N; i++) cin >> a[i];
    vector<ll> dp(1100000);
    for (int i = 0; i < 1100000; i++) dp[i] = INF;
    dp[0] = 0;
    for (int i = 0; i < N; i++){
      chmin(dp[i + 1], dp[i] + abs(a[i + 1] - a[i]));
      chmin(dp[i + 2], dp[i] + abs(a[i + 2] - a[i]));
    }
    cout << dp[N-1] << endl;
    return 0;
}