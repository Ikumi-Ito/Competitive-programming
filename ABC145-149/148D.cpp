#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const long long INF = 1LL << 60;
const ll MOD = 1000000007;
using ping = pair<ll, ll>;
const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<ll> a(N);
    for(int i = 0; i < N; i++)cin >> a[i];

    ll tmp = 1;
    ll cnt = 0;
    bool check = false;
    for (int i = 0; i < N; i++) {
      if (a[i]!=tmp){
        cnt++;
      }
      else{
        tmp = a[i] + 1;
        check = true;
      }
    }
    if(check){
        cout << cnt << endl;
    }
    else{
        cout <<-1<< endl;
    }
    return 0;
}