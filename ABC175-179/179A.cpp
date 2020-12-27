#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
using pint = pair<ll, ll>;

int main(){
  string S;
  cin >> S;
  if(S[S.size()-1]=='s'){
    cout << S << "es" << endl;
  }
  else{
      cout << S << "s" << endl;
  }
  return 0;
}