
#include <bits/stdc++.h>
using namespace std;
 
vector<string>g(int n) {
    vector<string>c(2*n,string(2*n,'#'));
    for (int i=0;i<2*n;i++) {
        for (int j=0;j<2*n;j++) {
            if ((i/2+j/2)%2 == 1) {
                c[i][j] = '.';
            }
        }
    }
    return c;
}
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> c = g(n);
        for (const string& row : c) {
            cout<<row<<'\n';
        }
    }
    return 0;
}
