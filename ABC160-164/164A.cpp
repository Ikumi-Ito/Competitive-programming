#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;
using ping = pair<ll, ll>;

int main() {
  ll S, W;
  cin >> S >> W;
  if(W>=S){
    cout << "unsafe" << endl;
  }
  else{
      cout << "safe" << endl;
  }
  return 0;
}