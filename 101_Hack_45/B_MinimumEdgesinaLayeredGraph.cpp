#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(void) {

    int n, k;
    cin >> n >> k;

    if( n == k ){
      cout << n-1 << endl;
      return 0;
    }else if( n < k ){
      cout << -1 << endl;
      return 0;
    }else if( k == 2 && n != k ){
      cout << -1 << endl;
      return 0;
    }

    vector<int> layer(k, 1);
    n -= k;
    layer[1] += n;

    int ans = 0;
    for(int i=0; i<k-1; i++) ans += layer[i] * layer[i+1];
    cout << ans << endl;

    return 0;
}
