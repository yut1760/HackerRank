#include<iostream>
#include<vector>
using namespace std;

int main(void) {

    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];

    vector<int> ans(n);
    for(int i=0; i<n; i++) ans[ p[ p[i]-1 ]-1 ] = i+1;

    for(int i=0; i<n; i++) cout << ans[i] << endl;

    return 0;
}
