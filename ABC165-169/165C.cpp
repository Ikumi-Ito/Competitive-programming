#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, M, Q;
vector<ll> a, b, c, d;
vector<string> num;

void find(string cur){
    if(cur.size()==N) {
      cout << cur << endl;
      num.push_back(cur);
      return;
    }
    cout << 'a'<<cur << endl;
    ll last = 1;
    if (cur.size() >= 1) last = cur[cur.size() - 1];
    for (ll i = last; i <= M; i++){
      string nex = cur;
      nex += '0' + i;
      cout << nex << endl;
      find(nex);
    }
}

int main() { 
    cin >> N >> M >> Q;
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    for (int i = 0; i < Q; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    find("");

    ll out = 0;
    for (int i = 0; i < num.size(); i++) {
      for (int j = 0; j < Q; j++){
        if ((num[i][b[j]] - '0') - (num[i][a[j]] - '0') == c[j]) out += d[j];
      }
    }
    cout << out << endl;
    return 0;
}