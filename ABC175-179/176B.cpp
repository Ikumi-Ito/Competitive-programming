#include <bits/stdc++.h>
using namespace std;

int main() { 
    string n;
    cin >> n;
    if(n=="0"){
      cout << "Yes" << endl;
      return 0;
    }
    int cnt = 0;
    for (int i = 0; i < n.size(); i++) {
      cnt += n[i]-'0';
    }
    if(cnt%9==0) cout <<"Yes" <<endl;
    else cout <<"No" << endl;
    return 0;
}
