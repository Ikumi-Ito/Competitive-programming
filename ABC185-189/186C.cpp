#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

bool cnt_ll7(ll n){
    ll cnt = 0;
    string str = to_string(n);
    for(int i = 0; i <str.size(); i++){
      if (str[i] == '7') cnt++;
    }
    if(cnt==0){
      return true;
    }
    else{
      return false;
    }
}

bool cnt_8sin(ll n) {
    ll cnt = 0;
    while (n / 8 != 0) {
      if (n % 8 == 7) {
          cnt++;
          break;
      }
      n /= 8;
    }
    if (n == 7) cnt++;
    if (cnt == 0) {
      return true;
    } else {
      return false;
    }
}

int main(){
  ll N;
  cin >> N;
  ll cnt = 0;
  for (int i = 1; i <= N; i++){
    if(cnt_ll7(i)&&cnt_8sin(i)){
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}