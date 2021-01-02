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
  ll out = 1;
  for (int i = 1; i <= 11; i++){
    out *= (N - i);
    out /= i;
  }
  cout << out << endl;
  return 0;
}