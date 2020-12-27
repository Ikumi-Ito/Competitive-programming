#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;
using ping = pair<ll, ll>;

int main() {
  ll K, A, B;
  cin >> K >> A >> B;
  bool check = false;
  for (int i = A; i<=B; i++){
    if (i % K == 0) check = true;
  }
  if(check){
      cout << "OK" << endl;
  }
  else{
      cout << "NG" << endl;
  }
  return 0;
}