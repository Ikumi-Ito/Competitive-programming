#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template <class T>
inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template <class T>
inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

int main() {
    ll N;
    cin >> N;
    vector<ll> h(N);
    for(int i = 0; i < N; i++)cin >> h[i];
    vector<ll> dp(N);
    for (int i = 0; i < N; i++) dp[i] = 1000000000;
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < N; i++) {
      chmin(dp[i], dp[i - 1] + abs(h[i - 1] - h[i]));
      chmin(dp[i], dp[i - 2] + abs(h[i - 2] - h[i]));
    }
    cout << dp[N - 1] << endl;
    return 0;
}