#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

vector<long long> divisor(long long n) {
  vector<long long> ret;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(ret.begin(), ret.end());  // 昇順に並べる
  for (int i = 0; i < ret.size(); i++){
      cout << ret[i] << endl;
  } return ret;
}

int main() {
    ll N;
    cin >> N;
    divisor(N);
    return 0;
}