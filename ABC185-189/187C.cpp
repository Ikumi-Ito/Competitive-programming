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
  map<string, ping> out;
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;
    if(s[0]!='!'){
      out[s].first = 1;
    }
    if(s[0]=='!'){
      string k;
      for (int i = 1; i < s.size(); i++){
        k.push_back(s[i]);
      }
      out[k].second = 1;
    }
  }
  for(auto iter=out.begin(); iter!=out.end(); iter++){
    if (iter->second.first == 1 && iter->second.second==1) {
      cout << iter->first << endl;
      return 0;
    }
  }
  cout << "satisfiable" << endl;
  return 0;
}