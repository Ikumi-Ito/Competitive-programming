#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
  ll N;
  cin >> N;
  vector<vector<ll>> s(N, vector<ll>(2));
  for(int i = 0; i < N; i++){
    cin >> s[i][0] >> s[i][1];
  }
  ll cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      ll dy = s[j][1] - s[i][1];
      ll dx = abs(s[j][0] - s[i][0]);
      if ((-dx <= dy && dy <= dx)||dx==dy) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}