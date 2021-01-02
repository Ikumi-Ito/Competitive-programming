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
  vector<ll> A(N), B(N+1);
  B[0] = 0;
  for (int i = 0; i < N; i++) {
    ll a;
    cin >> a;
    A[i] = a;
  }
  sort(A.begin(), A.end(), greater<ll>());
  for(int i = 0; i < N; i++){
    B[i + 1] = B[i] + A[i];
  }
  ll out = 0;
  for(int i = 0; i < N-1; i++) {
    out += abs((A[i] * (N - i - 1)) - (B[N] - B[i + 1]));
  }
  cout << out << endl;
  return 0;
}