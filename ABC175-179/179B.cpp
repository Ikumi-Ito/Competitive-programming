#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using pint = pair<ll, ll>;

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N), b(N);
  for (int i = 0; i < N; i++) cin >> a[i] >> b[i];
  bool check = false;
  for (int i = 0; i < N-2; i++) {
      if(a[i]==b[i] && a[i+1]==b[i+1] && a[i+2]==b[i+2])
        check = true;
  }
  if(check){
      cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}