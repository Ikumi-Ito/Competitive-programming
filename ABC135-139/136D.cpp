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
using Graph = vector<vector<int>>;

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main() {
  string S;
  cin >> S;
  ll cr = 1;
  ll cl = 1;
  vll out;
  for (ll i = 0; i < S.size() - 1; i++) {
    if (S[i] == 'R') {
      if(S[i+1]=='R'){
        cr++;
      }
      else{
        out.push_back(cr);
        cr = 1;
      }
    }
    else{
        if(S[i+1] == 'L'){
          cl++;
        }
        else{
            out.push_back(cl);
            cl = 1;
        }
    }
  }
  if(S[S.size()-2]=='L'){
    out.push_back(cl);
  }
  else{
    out.push_back(1);
  }
  ll idx = 0;
  ll A, B;
  for (ll i = 0; i < S.size(); i++) {
    if (S[i] == 'R' && S[i + 1] == 'L') {
      A = (out[idx] + 1) / 2;
      B = (out[idx + 1] + 1) / 2;
      cout << A + (out[idx + 1] - B) << ' ';
    } 
    else if (S[i] == 'L' && S[i - 1] == 'R') {
      cout << (out[idx] - A) + B << ' ';
      idx += 2;
    } else {
      cout << 0 << ' ';
    }
  }
  cout << endl;

  return 0;
}