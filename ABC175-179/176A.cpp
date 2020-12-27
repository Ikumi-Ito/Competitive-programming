#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int cnt = 0, out=0;
    while(out<n){
      out += x;
      cnt+=t;
    }
    cout << cnt << endl;
    return 0;
}
