#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;
using ping = pair<ll, ll>;

int main() {
  string S;
  cin >> S;
  bool check = true;
  if (S[2] != S[3]) check = false;
  if (S[4] != S[5]) check = false;
  if (check)
    cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}