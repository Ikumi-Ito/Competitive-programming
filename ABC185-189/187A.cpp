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
  string A, B;
  cin >> A >> B;
  ll a = 0, b = 0;
  for(int i = 0; i < A.size(); i++){
    a += A[i] - '0';
  }
  for(int i = 0; i < B.size(); i++){
    b += B[i] - '0';
  }
  ll out = max(a, b);
  cout << out << endl;
  return 0;
}