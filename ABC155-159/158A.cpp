#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
using ping = pair<ll, ll>;

int main() {
  string S;
  cin >> S;
  bool check = false;
  for (int i = 0; i < 2; i++) {
    if (S[i] != S[i + 1]) check = true;
  }
  if(check)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}