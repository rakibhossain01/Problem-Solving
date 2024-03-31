#include <bits/stdc++.h>
using namespace std;
 
string det(int a, int b, int c) {
    if (a<b && b<c) {
        return "STAIR";
    } 
    else if (a<b && b>c) {
        return "PEAK";
    } 
    else {
        return "NONE";
    }
}
 
int main() {
    int t;
    cin>>t;
 
    for (int i=0;i<t;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<det(a, b, c) <<endl;
    }
 
    return 0;
}
