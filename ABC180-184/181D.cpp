#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define rep_up(i, a, b) for (ll i = a; i < b; ++i)
#define rep_down(i, a, b) for (ll i = a; i > b; --i)

#define fi first
#define se second

#define vvvvll vector<vector<vector<vector<ll>>>>
#define vvvll vector<vector<vector<ll>>>
#define vvll vector<vector<ll>>
#define vll vector<ll>

constexpr ll INF = (1ll << 60);
constexpr ll mod = 1000000007;
constexpr double pi = 3.14159265358979323846;

using ping = pair<ll, ll>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
  string S;
  cin >> S;
  sort(S.begin(), S.end());
  vll v(10, 0);
  for (ll i = 0; i < S.size(); i++) {
    v[S[i] - '0']++;
  }

  bool out = false;

  if(S.size()<=3){
      do{
        string s;
        for (auto l : S) s.push_back(l);
        if (stoi(s) % 8 == 0) out = true;
      } while (next_permutation(S.begin(), S.end()));
  }
  else{
    for (ll i = 100; i <= 1000; i++) {
      if (i % 8 != 0) {
        continue;
      }

      bool check = true;
      string s = to_string(i);
      vll r(10, 0);
      for (ll j = 0; j < s.size(); j++) {
        r[s[j] - '0']++;
      }
      for (ll k = 0; k < 10; k++) {
        if (v[k] < r[k]) {
          check = false;
        }
      }
      if (check) {
        out = true;
      }
    }
  }

  if(out){
      cout << "Yes" << endl;
  }
  else{
      cout << "No" << endl;
  }
  return 0;
}