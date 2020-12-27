#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;
using ping = pair<ll, ll>;

int main() {
  string N;
  cin >> N;
  bool check = false;
  for (int i = 0; i < N.size(); i++) {
    if (N[i] == '7') check = true;
  }
  if (check) cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}